
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/LiveLinkAnimationCore.LiveLinkInstance
/// Size: 0x0000 (0x000350 - 0x000350)
class ULiveLinkInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:


	/// Functions
	// Function /Script/LiveLinkAnimationCore.LiveLinkInstance.SetSubject
	// void SetSubject(FLiveLinkSubjectName SubjectName);                                                                       // [0xa00dc54] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLinkAnimationCore.LiveLinkInstance.SetRetargetAsset
	// void SetRetargetAsset(UClass* RetargetAsset);                                                                            // [0xa00db94] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LiveLinkAnimationCore.LiveLinkRetargetAsset
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkRetargetAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkAnimationCore.LiveLinkRemapAsset
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Struct /Script/LiveLinkAnimationCore.AnimNode_LiveLinkPose
/// Size: 0x0038 (0x000010 - 0x000048)
class FAnimNode_LiveLinkPose : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FPoseLink)                                 InputPose                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FLiveLinkSubjectName)                      LiveLinkSubjectName                                         OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	CMember(UClass*)                                   RetargetAsset                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(ULiveLinkRetargetAsset*)                   CurrentRetargetAsset                                        OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/LiveLinkAnimationCore.LiveLinkInstanceProxy
/// Size: 0x0040 (0x000700 - 0x000740)
class FLiveLinkInstanceProxy : public FAnimInstanceProxy
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1856;

public:
	SMember(FAnimNode_LiveLinkPose)                    PoseNode                                                    OFFSET(getStruct<T>, {0x6F8, 72, 0, 0})
};

