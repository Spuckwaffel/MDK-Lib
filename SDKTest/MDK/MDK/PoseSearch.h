
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/PoseSearch.MotionMatchingAnimNodeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMotionMatchingAnimNodeLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PoseSearch.PoseSearchDatabase
/// Size: 0x00E8 (0x000030 - 0x000118)
class UPoseSearchDatabase : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(UPoseSearchSchema*)                        Schema                                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FPoseSearchExcludeFromDatabaseParameters)  ExcludeFromDatabaseParameters                               OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	CMember(TArray<FInstancedStruct>)                  AnimationAssets                                             OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(EPoseSearchMode)                           PoseSearchMode                                              OFFSET(get<T>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   NumberOfPrincipalComponents                                 OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   KDTreeMaxLeafSize                                           OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   KDTreeQueryNumNeighbors                                     OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bSkipSearchIfPossible                                       OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel
/// Size: 0x0018 (0x000028 - 0x000040)
class UPoseSearchFeatureChannel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   ChannelDataOffset                                           OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   ChannelCardinality                                          OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_FilterCrashingLegs
/// Size: 0x0040 (0x000040 - 0x000080)
class UPoseSearchFeatureChannel_FilterCrashingLegs : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FBoneReference)                            LeftThigh                                                   OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FBoneReference)                            RightThigh                                                  OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	SMember(FBoneReference)                            LeftFoot                                                    OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	SMember(FBoneReference)                            RightFoot                                                   OFFSET(getStruct<T>, {0x64, 12, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(int8_t)                                    LeftThighIdx                                                OFFSET(get<int8_t>, {0x74, 1, 0, 0})
	DMember(int8_t)                                    RightThighIdx                                               OFFSET(get<int8_t>, {0x75, 1, 0, 0})
	DMember(int8_t)                                    LeftFootIdx                                                 OFFSET(get<int8_t>, {0x76, 1, 0, 0})
	DMember(int8_t)                                    RightFootIdx                                                OFFSET(get<int8_t>, {0x77, 1, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x78, 1, 0, 0})
	DMember(float)                                     AllowedTolerance                                            OFFSET(get<float>, {0x7C, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_GroupBase
/// Size: 0x0000 (0x000040 - 0x000040)
class UPoseSearchFeatureChannel_GroupBase : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Group
/// Size: 0x0010 (0x000040 - 0x000050)
class UPoseSearchFeatureChannel_Group : public UPoseSearchFeatureChannel_GroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<UPoseSearchFeatureChannel*>)        SubChannels                                                 OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Heading
/// Size: 0x0030 (0x000040 - 0x000070)
class UPoseSearchFeatureChannel_Heading : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     SampleTimeOffset                                            OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(EHeadingAxis)                              HeadingAxis                                                 OFFSET(get<T>, {0x54, 1, 0, 0})
	DMember(int8_t)                                    SchemaBoneIdx                                               OFFSET(get<int8_t>, {0x55, 1, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x68, 1, 0, 0})
	CMember(EComponentStrippingVector)                 ComponentStripping                                          OFFSET(get<T>, {0x69, 1, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Padding
/// Size: 0x0008 (0x000040 - 0x000048)
class UPoseSearchFeatureChannel_Padding : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   PaddingSize                                                 OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_PermutationTime
/// Size: 0x0008 (0x000040 - 0x000048)
class UPoseSearchFeatureChannel_PermutationTime : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Phase
/// Size: 0x0028 (0x000040 - 0x000068)
class UPoseSearchFeatureChannel_Phase : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(int8_t)                                    SchemaBoneIdx                                               OFFSET(get<int8_t>, {0x50, 1, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0x54, 16, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x64, 1, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Pose
/// Size: 0x0040 (0x000040 - 0x000080)
class UPoseSearchFeatureChannel_Pose : public UPoseSearchFeatureChannel_GroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	CMember(TArray<FPoseSearchBone>)                   SampledBones                                                OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<int8_t>)                            SchemaBoneIdx                                               OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x68, 1, 0, 0})
	DMember(bool)                                      bUseCharacterSpaceVelocities                                OFFSET(get<bool>, {0x69, 1, 0, 0})
	CMember(TArray<UPoseSearchFeatureChannel*>)        SubChannels                                                 OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Position
/// Size: 0x0038 (0x000040 - 0x000078)
class UPoseSearchFeatureChannel_Position : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FBoneReference)                            OriginBone                                                  OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     SampleTimeOffset                                            OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(int8_t)                                    SchemaBoneIdx                                               OFFSET(get<int8_t>, {0x60, 1, 0, 0})
	DMember(int8_t)                                    SchemaOriginBoneIdx                                         OFFSET(get<int8_t>, {0x61, 1, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0x64, 16, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x74, 1, 0, 0})
	CMember(EComponentStrippingVector)                 ComponentStripping                                          OFFSET(get<T>, {0x75, 1, 0, 0})
	CMember(EPermutationTimeType)                      PermutationTimeType                                         OFFSET(get<T>, {0x76, 1, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_SamplingTime
/// Size: 0x0008 (0x000040 - 0x000048)
class UPoseSearchFeatureChannel_SamplingTime : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     TimeToMatch                                                 OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Trajectory
/// Size: 0x0028 (0x000040 - 0x000068)
class UPoseSearchFeatureChannel_Trajectory : public UPoseSearchFeatureChannel_GroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	CMember(TArray<FPoseSearchTrajectorySample>)       Samples                                                     OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<UPoseSearchFeatureChannel*>)        SubChannels                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Velocity
/// Size: 0x0030 (0x000040 - 0x000070)
class UPoseSearchFeatureChannel_Velocity : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     SampleTimeOffset                                            OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(int8_t)                                    SchemaBoneIdx                                               OFFSET(get<int8_t>, {0x54, 1, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x68, 1, 0, 0})
	DMember(bool)                                      bUseCharacterSpaceVelocities                                OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bNormalize                                                  OFFSET(get<bool>, {0x6A, 1, 0, 0})
	CMember(EComponentStrippingVector)                 ComponentStripping                                          OFFSET(get<T>, {0x6B, 1, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchNormalizationSet
/// Size: 0x0010 (0x000030 - 0x000040)
class UPoseSearchNormalizationSet : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<UPoseSearchDatabase*>)              Databases                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchSchema
/// Size: 0x0088 (0x000030 - 0x0000B8)
class UPoseSearchSchema : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(USkeleton*)                                Skeleton                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(TArray<UPoseSearchFeatureChannel*>)        Channels                                                    OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<UPoseSearchFeatureChannel*>)        FinalizedChannels                                           OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(UMirrorDataTable*)                         MirrorDataTable                                             OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(EPoseSearchDataPreprocessor)               DataPreprocessor                                            OFFSET(get<T>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   SchemaCardinality                                           OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	CMember(TArray<FBoneReference>)                    BoneReferences                                              OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<uint16_t>)                          BoneIndicesWithParents                                      OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(float)                                     ContinuingPoseCostBias                                      OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     BaseCostBias                                                OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     LoopingCostBias                                             OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   NumberOfPermutations                                        OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	DMember(int32_t)                                   PermutationsSampleRate                                      OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(float)                                     PermutationsTimeOffset                                      OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bAddDataPadding                                             OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bInjectAdditionalDebugChannels                              OFFSET(get<bool>, {0xB1, 1, 0, 0})
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchBase : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchExcludeFromDatabase
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchExcludeFromDatabase : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchBlockTransition
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchBlockTransition : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchModifyCost
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_PoseSearchModifyCost : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     CostAddend                                                  OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     CostAddend                                                  OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPoseSearchLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/PoseSearch.MotionMatchingAnimNodeReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FMotionMatchingAnimNodeReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PoseSearch.PoseSearchCost
/// Size: 0x0004 (0x000000 - 0x000004)
class FPoseSearchCost : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     TotalCost                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchExcludeFromDatabaseParameters
/// Size: 0x0008 (0x000000 - 0x000008)
class FPoseSearchExcludeFromDatabaseParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     SequenceStartInterval                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     SequenceEndInterval                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseAnimationAssetBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FPoseSearchDatabaseAnimationAssetBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseSequence
/// Size: 0x0018 (0x000008 - 0x000020)
class FPoseSearchDatabaseSequence : public FPoseSearchDatabaseAnimationAssetBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UAnimSequence*)                            Sequence                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FFloatInterval)                            SamplingRange                                               OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	CMember(EPoseSearchMirrorOption)                   MirrorOption                                                OFFSET(get<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseBlendSpace
/// Size: 0x0028 (0x000008 - 0x000030)
class FPoseSearchDatabaseBlendSpace : public FPoseSearchDatabaseAnimationAssetBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UBlendSpace*)                              BlendSpace                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(EPoseSearchMirrorOption)                   MirrorOption                                                OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      bUseSingleSample                                            OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bUseGridForSampling                                         OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(int32_t)                                   NumberOfHorizontalSamples                                   OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   NumberOfVerticalSamples                                     OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(float)                                     BlendParamX                                                 OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     BlendParamY                                                 OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseAnimComposite
/// Size: 0x0018 (0x000008 - 0x000020)
class FPoseSearchDatabaseAnimComposite : public FPoseSearchDatabaseAnimationAssetBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UAnimComposite*)                           AnimComposite                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FFloatInterval)                            SamplingRange                                               OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	CMember(EPoseSearchMirrorOption)                   MirrorOption                                                OFFSET(get<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseAnimMontage
/// Size: 0x0018 (0x000008 - 0x000020)
class FPoseSearchDatabaseAnimMontage : public FPoseSearchDatabaseAnimationAssetBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UAnimMontage*)                             AnimMontage                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FFloatInterval)                            SamplingRange                                               OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	CMember(EPoseSearchMirrorOption)                   MirrorOption                                                OFFSET(get<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchBone
/// Size: 0x0024 (0x000000 - 0x000024)
class FPoseSearchBone : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FBoneReference)                            Reference                                                   OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(int32_t)                                   Flags                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0x14, 16, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchTrajectorySample
/// Size: 0x001C (0x000000 - 0x00001C)
class FPoseSearchTrajectorySample : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Flags                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0xC, 16, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchQueryTrajectorySample
/// Size: 0x0040 (0x000000 - 0x000040)
class FPoseSearchQueryTrajectorySample : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Facing                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     AccumulatedSeconds                                          OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchQueryTrajectory
/// Size: 0x0010 (0x000000 - 0x000010)
class FPoseSearchQueryTrajectory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FPoseSearchQueryTrajectorySample>)  Samples                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchAnimPlayer
/// Size: 0x0218 (0x000000 - 0x000218)
class FPoseSearchAnimPlayer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Struct /Script/PoseSearch.AnimNode_BlendStack_Standalone
/// Size: 0x0020 (0x000038 - 0x000058)
class FAnimNode_BlendStack_Standalone : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/PoseSearch.AnimNode_BlendStack
/// Size: 0x0058 (0x000058 - 0x0000B0)
class FAnimNode_BlendStack : public FAnimNode_BlendStack_Standalone
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UAnimationAsset*)                          AnimationAsset                                              OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(float)                                     AnimationTime                                               OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(bool)                                      bMirrored                                                   OFFSET(get<bool>, {0x65, 1, 0, 0})
	DMember(float)                                     WantedPlayRate                                              OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     RootBoneBlendTime                                           OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     MaxAnimationDeltaTime                                       OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(int32_t)                                   MaxActiveBlends                                             OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	CMember(UBlendProfile*)                            BlendProfile                                                OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(EAlphaBlendOption)                         BlendOption                                                 OFFSET(get<T>, {0x88, 1, 0, 0})
	SMember(FVector)                                   BlendParameters                                             OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	CMember(UMirrorDataTable*)                         MirrorDataTable                                             OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Struct /Script/PoseSearch.AnimNode_MotionMatching
/// Size: 0x0170 (0x000038 - 0x0001A8)
class FAnimNode_MotionMatching : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(UPoseSearchDatabase*)                      Database                                                    OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FPoseSearchQueryTrajectory)                Trajectory                                                  OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(float)                                     TrajectorySpeedMultiplier                                   OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(int32_t)                                   MaxActiveBlends                                             OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	CMember(UBlendProfile*)                            BlendProfile                                                OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(EAlphaBlendOption)                         BlendOption                                                 OFFSET(get<T>, {0x78, 1, 0, 0})
	DMember(float)                                     PoseJumpThresholdTime                                       OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     PoseReselectHistory                                         OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     SearchThrottleTime                                          OFFSET(get<float>, {0x84, 4, 0, 0})
	SMember(FFloatInterval)                            PlayRate                                                    OFFSET(getStruct<T>, {0x88, 8, 0, 0})
	DMember(bool)                                      bResetOnBecomingRelevant                                    OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(bool)                                      bShouldSearch                                               OFFSET(get<bool>, {0x91, 1, 0, 0})
	DMember(float)                                     YawFromAnimationTrajectoryBlendTime                         OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     YawFromAnimationBlendRate                                   OFFSET(get<float>, {0x98, 4, 0, 0})
	CMember(TArray<UPoseSearchDatabase*>)              DatabasesToSearch                                           OFFSET(get<T>, {0x190, 16, 0, 0})
};

/// Struct /Script/PoseSearch.AnimNode_PoseSearchHistoryCollector_Base
/// Size: 0x0098 (0x000010 - 0x0000A8)
class FAnimNode_PoseSearchHistoryCollector_Base : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   PoseCount                                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     PoseDuration                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(TArray<FBoneReference>)                    CollectedBones                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/PoseSearch.AnimNode_PoseSearchHistoryCollector
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class FAnimNode_PoseSearchHistoryCollector : public FAnimNode_PoseSearchHistoryCollector_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/PoseSearch.AnimNode_PoseSearchComponentSpaceHistoryCollector
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class FAnimNode_PoseSearchComponentSpaceHistoryCollector : public FAnimNode_PoseSearchHistoryCollector_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FComponentSpacePoseLink)                   Source                                                      OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/PoseSearch.MotionMatchingState
/// Size: 0x0088 (0x000000 - 0x000088)
class FMotionMatchingState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(float)                                     ElapsedPoseSearchTime                                       OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     WantedPlayRate                                              OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bJumpedToPose                                               OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Enum /Script/PoseSearch.EPoseSearchMode
/// Size: 0x07
enum EPoseSearchMode : uint8_t
{
	EPoseSearchMode__BruteForce0                                                     = 0,
	EPoseSearchMode__PCAKDTree1                                                      = 1,
	EPoseSearchMode__PCAKDTree_Validate2                                             = 2,
	EPoseSearchMode__PCAKDTree_Compare3                                              = 3,
	EPoseSearchMode__Num4                                                            = 4,
	EPoseSearchMode__Invalid5                                                        = 4,
	EPoseSearchMode__EPoseSearchMode_MAX6                                            = 5
};

/// Enum /Script/PoseSearch.EPoseSearchMirrorOption
/// Size: 0x06
enum EPoseSearchMirrorOption : uint8_t
{
	EPoseSearchMirrorOption__UnmirroredOnly0                                         = 0,
	EPoseSearchMirrorOption__MirroredOnly1                                           = 1,
	EPoseSearchMirrorOption__UnmirroredAndMirrored2                                  = 2,
	EPoseSearchMirrorOption__Num3                                                    = 3,
	EPoseSearchMirrorOption__Invalid4                                                = 3,
	EPoseSearchMirrorOption__EPoseSearchMirrorOption_MAX5                            = 4
};

/// Enum /Script/PoseSearch.EComponentStrippingVector
/// Size: 0x04
enum EComponentStrippingVector : uint8_t
{
	EComponentStrippingVector__None0                                                 = 0,
	EComponentStrippingVector__StripXY1                                              = 1,
	EComponentStrippingVector__StripZ2                                               = 2,
	EComponentStrippingVector__EComponentStrippingVector_MAX3                        = 3
};

/// Enum /Script/PoseSearch.EInputQueryPose
/// Size: 0x04
enum EInputQueryPose : uint8_t
{
	EInputQueryPose__UseCharacterPose0                                               = 0,
	EInputQueryPose__UseContinuingPose1                                              = 1,
	EInputQueryPose__UseInterpolatedContinuingPose2                                  = 2,
	EInputQueryPose__EInputQueryPose_MAX3                                            = 3
};

/// Enum /Script/PoseSearch.EPermutationTimeType
/// Size: 0x04
enum EPermutationTimeType : uint8_t
{
	EPermutationTimeType__UseSampleTime0                                             = 0,
	EPermutationTimeType__UsePermutationTime1                                        = 1,
	EPermutationTimeType__UseSampleToPermutationTime2                                = 2,
	EPermutationTimeType__EPermutationTimeType_MAX3                                  = 3
};

/// Enum /Script/PoseSearch.EHeadingAxis
/// Size: 0x06
enum EHeadingAxis : uint8_t
{
	EHeadingAxis__X0                                                                 = 0,
	EHeadingAxis__Y1                                                                 = 1,
	EHeadingAxis__Z2                                                                 = 2,
	EHeadingAxis__Num3                                                               = 3,
	EHeadingAxis__Invalid4                                                           = 3,
	EHeadingAxis__EHeadingAxis_MAX5                                                  = 4
};

/// Enum /Script/PoseSearch.EPoseSearchBoneFlags
/// Size: 0x05
enum EPoseSearchBoneFlags : uint8_t
{
	EPoseSearchBoneFlags__Velocity0                                                  = 1,
	EPoseSearchBoneFlags__Position1                                                  = 2,
	EPoseSearchBoneFlags__Rotation2                                                  = 4,
	EPoseSearchBoneFlags__Phase3                                                     = 8,
	EPoseSearchBoneFlags__EPoseSearchBoneFlags_MAX4                                  = 9
};

/// Enum /Script/PoseSearch.EPoseSearchTrajectoryFlags
/// Size: 0x09
enum EPoseSearchTrajectoryFlags : uint8_t
{
	EPoseSearchTrajectoryFlags__Velocity0                                            = 1,
	EPoseSearchTrajectoryFlags__Position1                                            = 2,
	EPoseSearchTrajectoryFlags__VelocityDirection2                                   = 4,
	EPoseSearchTrajectoryFlags__FacingDirection3                                     = 8,
	EPoseSearchTrajectoryFlags__VelocityXY4                                          = 16,
	EPoseSearchTrajectoryFlags__PositionXY5                                          = 32,
	EPoseSearchTrajectoryFlags__VelocityDirectionXY6                                 = 64,
	EPoseSearchTrajectoryFlags__FacingDirectionXY7                                   = 128,
	EPoseSearchTrajectoryFlags__EPoseSearchTrajectoryFlags_MAX8                      = 129
};

/// Enum /Script/PoseSearch.EPoseSearchDataPreprocessor
/// Size: 0x06
enum EPoseSearchDataPreprocessor : uint8_t
{
	EPoseSearchDataPreprocessor__None0                                               = 0,
	EPoseSearchDataPreprocessor__Normalize1                                          = 1,
	EPoseSearchDataPreprocessor__NormalizeOnlyByDeviation2                           = 2,
	EPoseSearchDataPreprocessor__Num3                                                = 3,
	EPoseSearchDataPreprocessor__Invalid4                                            = 3,
	EPoseSearchDataPreprocessor__EPoseSearchDataPreprocessor_MAX5                    = 4
};

