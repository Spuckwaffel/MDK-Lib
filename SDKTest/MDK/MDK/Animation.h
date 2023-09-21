
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Effects
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayCameras
/// dependency: GrindRailRuntime
/// dependency: NiagaraAnimNotifies
/// dependency: RidingCodeRuntime
/// dependency: ValetRuntime

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Player_HandSplash_R.AnimNotify_Player_HandSplash_R_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_Player_HandSplash_R_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Animation/Game/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C
/// Size: 0x0011 (0x000038 - 0x000049)
class UBP_AnimNotify_CameraShake_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 73;

public:
	CMember(UClass*)                                   Shake_BP                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(double)                                    Shake_Scale                                                 OFFSET(get<double>, {0x40, 8, 0, 0})
	CMember(ECameraShakePlaySpace)                     Shake_Space                                                 OFFSET(get<T>, {0x48, 1, 0, 0})


	/// Functions
	// Function /Game/Animation/Game/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/Game/MainPlayer/Locomotion/Medium/Male/Jog/HeavyWeapon/BP_GCSteps.BP_GCSteps_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UBP_GCSteps_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_HolsterWeapon_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      PlayEquipAnim                                               OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FName)                                     AnimNotifyStateHolster                                      OFFSET(getStruct<T>, {0x34, 4, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.CanApplyHolster
	// bool CanApplyHolster(FName& HolsterId);                                                                                  // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.Received_NotifyEnd
	// bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.Received_NotifyBegin
	// bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlaySoundWithCondition.AnimNotify_PlaySoundWithCondition_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UAnimNotify_PlaySoundWithCondition_C : public UFortAnimNotify_PlaySoundConditional
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep.AnimNotify_FootStep_C
/// Size: 0x0018 (0x000038 - 0x000050)
class UAnimNotify_FootStep_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   FootIndex                                                   OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FFortPlayerFoleyContextSettings)           PreviewSettings                                             OFFSET(getStruct<T>, {0x3C, 20, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep.AnimNotify_FootStep_C.AudioPreview
	// void AudioPreview(AActor* InActor);                                                                                      // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep.AnimNotify_FootStep_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Left.AnimNotify_FootStep_Left_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UAnimNotify_FootStep_Left_C : public UAnimNotify_FootStep_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Right.AnimNotify_FootStep_Right_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UAnimNotify_FootStep_Right_C : public UAnimNotify_FootStep_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_Player_HandSplash_L.AnimNotify_Player_HandSplash_L_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_Player_HandSplash_L_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C
/// Size: 0x1698 (0x000720 - 0x001DB8)
class UGameplay_FaceSystem_StateMachine_AnimBP_C : public UCCP_AnimInstance_Head_GameplayFaceSystemStateMachine
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7608;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x720, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0x728, 20, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x740, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x748, 8, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x750, 120, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   OFFSET(getStruct<T>, {0x7C8, 192, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x888, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0x8B0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0x8D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0x900, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult4                             OFFSET(getStruct<T>, {0x928, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult5                             OFFSET(getStruct<T>, {0x950, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult6                             OFFSET(getStruct<T>, {0x978, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult7                             OFFSET(getStruct<T>, {0x9A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult8                             OFFSET(getStruct<T>, {0x9C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult9                             OFFSET(getStruct<T>, {0x9F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult10                            OFFSET(getStruct<T>, {0xA18, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult11                            OFFSET(getStruct<T>, {0xA40, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult12                            OFFSET(getStruct<T>, {0xA68, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult13                            OFFSET(getStruct<T>, {0xA90, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult14                            OFFSET(getStruct<T>, {0xAB8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult15                            OFFSET(getStruct<T>, {0xAE0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult16                            OFFSET(getStruct<T>, {0xB08, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult17                            OFFSET(getStruct<T>, {0xB30, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult18                            OFFSET(getStruct<T>, {0xB58, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult19                            OFFSET(getStruct<T>, {0xB80, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult20                            OFFSET(getStruct<T>, {0xBA8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult21                            OFFSET(getStruct<T>, {0xBD0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult22                            OFFSET(getStruct<T>, {0xBF8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult23                            OFFSET(getStruct<T>, {0xC20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult24                            OFFSET(getStruct<T>, {0xC48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult25                            OFFSET(getStruct<T>, {0xC70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult26                            OFFSET(getStruct<T>, {0xC98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult27                            OFFSET(getStruct<T>, {0xCC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult28                            OFFSET(getStruct<T>, {0xCE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult29                            OFFSET(getStruct<T>, {0xD10, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0xD38, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0xD80, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0xDA0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0xDE8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0xE08, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0xE50, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0xE70, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult3                                  OFFSET(getStruct<T>, {0xEB8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer4                               OFFSET(getStruct<T>, {0xED8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult4                                  OFFSET(getStruct<T>, {0xF20, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer5                               OFFSET(getStruct<T>, {0xF40, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult5                                  OFFSET(getStruct<T>, {0xF88, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer6                               OFFSET(getStruct<T>, {0xFA8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult6                                  OFFSET(getStruct<T>, {0xFF0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer7                               OFFSET(getStruct<T>, {0x1010, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult7                                  OFFSET(getStruct<T>, {0x1058, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer8                               OFFSET(getStruct<T>, {0x1078, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult8                                  OFFSET(getStruct<T>, {0x10C0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer9                               OFFSET(getStruct<T>, {0x10E0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult9                                  OFFSET(getStruct<T>, {0x1128, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer10                              OFFSET(getStruct<T>, {0x1148, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult10                                 OFFSET(getStruct<T>, {0x1190, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer11                              OFFSET(getStruct<T>, {0x11B0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult11                                 OFFSET(getStruct<T>, {0x11F8, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0x1218, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult12                                 OFFSET(getStruct<T>, {0x1288, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer12                              OFFSET(getStruct<T>, {0x12A8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult13                                 OFFSET(getStruct<T>, {0x12F0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer13                              OFFSET(getStruct<T>, {0x1310, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult14                                 OFFSET(getStruct<T>, {0x1358, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer14                              OFFSET(getStruct<T>, {0x1378, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult15                                 OFFSET(getStruct<T>, {0x13C0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0x13E0, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult16                                 OFFSET(getStruct<T>, {0x1450, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer15                              OFFSET(getStruct<T>, {0x1470, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult17                                 OFFSET(getStruct<T>, {0x14B8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0x14D8, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult30                            OFFSET(getStruct<T>, {0x15A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult31                            OFFSET(getStruct<T>, {0x15C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult32                            OFFSET(getStruct<T>, {0x15F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult33                            OFFSET(getStruct<T>, {0x1618, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult34                            OFFSET(getStruct<T>, {0x1640, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult35                            OFFSET(getStruct<T>, {0x1668, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult36                            OFFSET(getStruct<T>, {0x1690, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult37                            OFFSET(getStruct<T>, {0x16B8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult38                            OFFSET(getStruct<T>, {0x16E0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult39                            OFFSET(getStruct<T>, {0x1708, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult40                            OFFSET(getStruct<T>, {0x1730, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult41                            OFFSET(getStruct<T>, {0x1758, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult42                            OFFSET(getStruct<T>, {0x1780, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult43                            OFFSET(getStruct<T>, {0x17A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult44                            OFFSET(getStruct<T>, {0x17D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult45                            OFFSET(getStruct<T>, {0x17F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult46                            OFFSET(getStruct<T>, {0x1820, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult47                            OFFSET(getStruct<T>, {0x1848, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer16                              OFFSET(getStruct<T>, {0x1870, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult18                                 OFFSET(getStruct<T>, {0x18B8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer17                              OFFSET(getStruct<T>, {0x18D8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult19                                 OFFSET(getStruct<T>, {0x1920, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer18                              OFFSET(getStruct<T>, {0x1940, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult20                                 OFFSET(getStruct<T>, {0x1988, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer19                              OFFSET(getStruct<T>, {0x19A8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult21                                 OFFSET(getStruct<T>, {0x19F0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer20                              OFFSET(getStruct<T>, {0x1A10, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult22                                 OFFSET(getStruct<T>, {0x1A58, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer2                             OFFSET(getStruct<T>, {0x1A78, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult23                                 OFFSET(getStruct<T>, {0x1AE8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer21                              OFFSET(getStruct<T>, {0x1B08, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult24                                 OFFSET(getStruct<T>, {0x1B50, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer3                             OFFSET(getStruct<T>, {0x1B70, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult25                                 OFFSET(getStruct<T>, {0x1BE0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer22                              OFFSET(getStruct<T>, {0x1C00, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult26                                 OFFSET(getStruct<T>, {0x1C48, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer23                              OFFSET(getStruct<T>, {0x1C68, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult27                                 OFFSET(getStruct<T>, {0x1CB0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine1                                 OFFSET(getStruct<T>, {0x1CD0, 200, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x1D98, 32, 0, 0})


	/// Functions
	// Function /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1ebf994] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Game/MainPlayer/Facial/FaceGameplay/Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP
	// void ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP(int32_t EntryPoint);                                       // [0x1ebf994] Final                
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_DisablePawnRotation_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C
/// Size: 0x0068 (0x000030 - 0x000098)
class UAnimNotifyState_AttachAsset_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FAssetAttachment)                          Attachment                                                  OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	CMember(UAnimSequence*)                            Animation                                                   OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      Looping                                                     OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(double)                                    PlayRate                                                    OFFSET(get<double>, {0x70, 8, 0, 0})
	SMember(FGameplayTagContainer)                     DoNotAttachTagContainer                                     OFFSET(getStruct<T>, {0x78, 32, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyEnd
	// bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyBegin
	// bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_StopMontageGroup.AnimNotifyState_StopMontageGroup_C
/// Size: 0x0010 (0x000030 - 0x000040)
class UAnimNotifyState_StopMontageGroup_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     GroupNameToStop                                             OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	DMember(double)                                    BlendOutTime                                                OFFSET(get<double>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_StopMontageGroup.AnimNotifyState_StopMontageGroup_C.Received_NotifyBegin
	// bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference& EventReference); // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C
/// Size: 0x0028 (0x000038 - 0x000060)
class UAnimNotify_PlayForceFeedback_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UForceFeedbackEffect*)                     ForceFeedbackTemplate                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     ForceFeedbackFarTemplate                                    OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bPlayAtWorldLocation                                        OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(double)                                    InnerRadius                                                 OFFSET(get<double>, {0x50, 8, 0, 0})
	DMember(double)                                    OuterRadius                                                 OFFSET(get<double>, {0x58, 8, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_EliminationBotM2.AnimNotify_EliminationBotM2_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_EliminationBotM2_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_TeleportFinished_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Game/Animation/Libraries/FortAnimationBPFunctionLibrary.FortAnimationBPFunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAnimationBPFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HightBeam_HandFX_HologramHide.AnimNotifyState_HightBeam_HandFX_HologramHide_C
/// Size: 0x0000 (0x0000A1 - 0x0000A1)
class UAnimNotifyState_HightBeam_HandFX_HologramHide_C : public UFN_TimedNiagaraNotify_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 161;

public:
};

/// Class /RidingContent/Animation/Notifies/AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_SyncPettingCreature_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C
/// Size: 0x4EF0 (0x000AD0 - 0x0059C0)
class UBoarRidingPlayerLayerAnimBP_C : public UFortVehicleLayerAnimInstance_Riding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 22976;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAD0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0xAD8, 144, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0xB68, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xB70, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0xB78, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0xB98, 176, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0xC48, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone1                                   OFFSET(getStruct<T>, {0xD70, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0xE98, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0xEB8, 32, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone2                                   OFFSET(getStruct<T>, {0xED8, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone3                                   OFFSET(getStruct<T>, {0x1000, 296, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 OFFSET(getStruct<T>, {0x1128, 200, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK                                         OFFSET(getStruct<T>, {0x11F0, 248, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK1                                        OFFSET(getStruct<T>, {0x12E8, 248, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0x13E0, 112, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root1                                         OFFSET(getStruct<T>, {0x1450, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose1                              OFFSET(getStruct<T>, {0x1470, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x1520, 120, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace1                        OFFSET(getStruct<T>, {0x1598, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace1                        OFFSET(getStruct<T>, {0x15B8, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0x15D8, 72, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone4                                   OFFSET(getStruct<T>, {0x1620, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone5                                   OFFSET(getStruct<T>, {0x1748, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone6                                   OFFSET(getStruct<T>, {0x1870, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone7                                   OFFSET(getStruct<T>, {0x1998, 296, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x1AC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0x1AE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0x1B10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0x1B38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult4                             OFFSET(getStruct<T>, {0x1B60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult5                             OFFSET(getStruct<T>, {0x1B88, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult6                             OFFSET(getStruct<T>, {0x1BB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult7                             OFFSET(getStruct<T>, {0x1BD8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult8                             OFFSET(getStruct<T>, {0x1C00, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult9                             OFFSET(getStruct<T>, {0x1C28, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult10                            OFFSET(getStruct<T>, {0x1C50, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult11                            OFFSET(getStruct<T>, {0x1C78, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult12                            OFFSET(getStruct<T>, {0x1CA0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult13                            OFFSET(getStruct<T>, {0x1CC8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult14                            OFFSET(getStruct<T>, {0x1CF0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult15                            OFFSET(getStruct<T>, {0x1D18, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult16                            OFFSET(getStruct<T>, {0x1D40, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult17                            OFFSET(getStruct<T>, {0x1D68, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0x1D90, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0x1DD8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool1                              OFFSET(getStruct<T>, {0x1E20, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0x1E68, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0x1E88, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0x1ED0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool2                              OFFSET(getStruct<T>, {0x1F18, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0x1F60, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer4                               OFFSET(getStruct<T>, {0x1F80, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool3                              OFFSET(getStruct<T>, {0x1FC8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer5                               OFFSET(getStruct<T>, {0x2010, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer6                               OFFSET(getStruct<T>, {0x2058, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool4                              OFFSET(getStruct<T>, {0x20A0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0x20E8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer7                               OFFSET(getStruct<T>, {0x2108, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult3                                  OFFSET(getStruct<T>, {0x2150, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0x2170, 112, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer8                               OFFSET(getStruct<T>, {0x21E0, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive1                                OFFSET(getStruct<T>, {0x2228, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool5                              OFFSET(getStruct<T>, {0x22F0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer9                               OFFSET(getStruct<T>, {0x2338, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult4                                  OFFSET(getStruct<T>, {0x2380, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer10                              OFFSET(getStruct<T>, {0x23A0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult5                                  OFFSET(getStruct<T>, {0x23E8, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult18                            OFFSET(getStruct<T>, {0x2408, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult19                            OFFSET(getStruct<T>, {0x2430, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult20                            OFFSET(getStruct<T>, {0x2458, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult21                            OFFSET(getStruct<T>, {0x2480, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult22                            OFFSET(getStruct<T>, {0x24A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult23                            OFFSET(getStruct<T>, {0x24D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult24                            OFFSET(getStruct<T>, {0x24F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult25                            OFFSET(getStruct<T>, {0x2520, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer11                              OFFSET(getStruct<T>, {0x2548, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult6                                  OFFSET(getStruct<T>, {0x2590, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer12                              OFFSET(getStruct<T>, {0x25B0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult7                                  OFFSET(getStruct<T>, {0x25F8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer13                              OFFSET(getStruct<T>, {0x2618, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult8                                  OFFSET(getStruct<T>, {0x2660, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer14                              OFFSET(getStruct<T>, {0x2680, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult9                                  OFFSET(getStruct<T>, {0x26C8, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult26                            OFFSET(getStruct<T>, {0x26E8, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0x2710, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult10                                 OFFSET(getStruct<T>, {0x27D8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer15                              OFFSET(getStruct<T>, {0x27F8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult11                                 OFFSET(getStruct<T>, {0x2840, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer16                              OFFSET(getStruct<T>, {0x2860, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult12                                 OFFSET(getStruct<T>, {0x28A8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer17                              OFFSET(getStruct<T>, {0x28C8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult13                                 OFFSET(getStruct<T>, {0x2910, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult27                            OFFSET(getStruct<T>, {0x2930, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine1                                 OFFSET(getStruct<T>, {0x2958, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult14                                 OFFSET(getStruct<T>, {0x2A20, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult28                            OFFSET(getStruct<T>, {0x2A40, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult29                            OFFSET(getStruct<T>, {0x2A68, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer18                              OFFSET(getStruct<T>, {0x2A90, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult15                                 OFFSET(getStruct<T>, {0x2AD8, 32, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult16                                 OFFSET(getStruct<T>, {0x2AF8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine2                                 OFFSET(getStruct<T>, {0x2B18, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive2                                OFFSET(getStruct<T>, {0x2BE0, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer2                             OFFSET(getStruct<T>, {0x2CA8, 112, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer19                              OFFSET(getStruct<T>, {0x2D18, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer20                              OFFSET(getStruct<T>, {0x2D60, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool6                              OFFSET(getStruct<T>, {0x2DA8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool7                              OFFSET(getStruct<T>, {0x2DF0, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer3                             OFFSET(getStruct<T>, {0x2E38, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive3                                OFFSET(getStruct<T>, {0x2EA8, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult17                                 OFFSET(getStruct<T>, {0x2F70, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer21                              OFFSET(getStruct<T>, {0x2F90, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult18                                 OFFSET(getStruct<T>, {0x2FD8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine3                                 OFFSET(getStruct<T>, {0x2FF8, 200, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              OFFSET(getStruct<T>, {0x30C0, 240, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x31B0, 40, 0, 0})
	SMember(FAnimNode_Inertialization)                 AnimGraphNode_Inertialization                               OFFSET(getStruct<T>, {0x31D8, 272, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      OFFSET(getStruct<T>, {0x32E8, 280, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend1                             OFFSET(getStruct<T>, {0x3400, 240, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult30                            OFFSET(getStruct<T>, {0x34F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult31                            OFFSET(getStruct<T>, {0x3518, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult32                            OFFSET(getStruct<T>, {0x3540, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0x3568, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult19                                 OFFSET(getStruct<T>, {0x3590, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer4                             OFFSET(getStruct<T>, {0x35B0, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult20                                 OFFSET(getStruct<T>, {0x3620, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose2                                OFFSET(getStruct<T>, {0x3640, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult21                                 OFFSET(getStruct<T>, {0x3668, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine4                                 OFFSET(getStruct<T>, {0x3688, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose1                               OFFSET(getStruct<T>, {0x3750, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose3                                OFFSET(getStruct<T>, {0x37C8, 40, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose2                               OFFSET(getStruct<T>, {0x37F0, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose4                                OFFSET(getStruct<T>, {0x3868, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose5                                OFFSET(getStruct<T>, {0x3890, 40, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace1                     OFFSET(getStruct<T>, {0x38B8, 280, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive                        OFFSET(getStruct<T>, {0x39D0, 208, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace2                     OFFSET(getStruct<T>, {0x3AA0, 280, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult33                            OFFSET(getStruct<T>, {0x3BB8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult34                            OFFSET(getStruct<T>, {0x3BE0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult35                            OFFSET(getStruct<T>, {0x3C08, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult36                            OFFSET(getStruct<T>, {0x3C30, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult37                            OFFSET(getStruct<T>, {0x3C58, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult38                            OFFSET(getStruct<T>, {0x3C80, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult39                            OFFSET(getStruct<T>, {0x3CA8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult40                            OFFSET(getStruct<T>, {0x3CD0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult41                            OFFSET(getStruct<T>, {0x3CF8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult42                            OFFSET(getStruct<T>, {0x3D20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult43                            OFFSET(getStruct<T>, {0x3D48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult44                            OFFSET(getStruct<T>, {0x3D70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult45                            OFFSET(getStruct<T>, {0x3D98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult46                            OFFSET(getStruct<T>, {0x3DC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult47                            OFFSET(getStruct<T>, {0x3DE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult48                            OFFSET(getStruct<T>, {0x3E10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult49                            OFFSET(getStruct<T>, {0x3E38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult50                            OFFSET(getStruct<T>, {0x3E60, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer22                              OFFSET(getStruct<T>, {0x3E88, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer23                              OFFSET(getStruct<T>, {0x3ED0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool8                              OFFSET(getStruct<T>, {0x3F18, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult22                                 OFFSET(getStruct<T>, {0x3F60, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer24                              OFFSET(getStruct<T>, {0x3F80, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer25                              OFFSET(getStruct<T>, {0x3FC8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool9                              OFFSET(getStruct<T>, {0x4010, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult23                                 OFFSET(getStruct<T>, {0x4058, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer26                              OFFSET(getStruct<T>, {0x4078, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult24                                 OFFSET(getStruct<T>, {0x40C0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer27                              OFFSET(getStruct<T>, {0x40E0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer28                              OFFSET(getStruct<T>, {0x4128, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool10                             OFFSET(getStruct<T>, {0x4170, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult25                                 OFFSET(getStruct<T>, {0x41B8, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult51                            OFFSET(getStruct<T>, {0x41D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult52                            OFFSET(getStruct<T>, {0x4200, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult53                            OFFSET(getStruct<T>, {0x4228, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult54                            OFFSET(getStruct<T>, {0x4250, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult55                            OFFSET(getStruct<T>, {0x4278, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult56                            OFFSET(getStruct<T>, {0x42A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult57                            OFFSET(getStruct<T>, {0x42C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult58                            OFFSET(getStruct<T>, {0x42F0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer29                              OFFSET(getStruct<T>, {0x4318, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult26                                 OFFSET(getStruct<T>, {0x4360, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer30                              OFFSET(getStruct<T>, {0x4380, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult27                                 OFFSET(getStruct<T>, {0x43C8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer31                              OFFSET(getStruct<T>, {0x43E8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult28                                 OFFSET(getStruct<T>, {0x4430, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer32                              OFFSET(getStruct<T>, {0x4450, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult29                                 OFFSET(getStruct<T>, {0x4498, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult59                            OFFSET(getStruct<T>, {0x44B8, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine5                                 OFFSET(getStruct<T>, {0x44E0, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult30                                 OFFSET(getStruct<T>, {0x45A8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer33                              OFFSET(getStruct<T>, {0x45C8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult31                                 OFFSET(getStruct<T>, {0x4610, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer34                              OFFSET(getStruct<T>, {0x4630, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult32                                 OFFSET(getStruct<T>, {0x4678, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer35                              OFFSET(getStruct<T>, {0x4698, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult33                                 OFFSET(getStruct<T>, {0x46E0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult60                            OFFSET(getStruct<T>, {0x4700, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine6                                 OFFSET(getStruct<T>, {0x4728, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult34                                 OFFSET(getStruct<T>, {0x47F0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer36                              OFFSET(getStruct<T>, {0x4810, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult35                                 OFFSET(getStruct<T>, {0x4858, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer37                              OFFSET(getStruct<T>, {0x4878, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool11                             OFFSET(getStruct<T>, {0x48C0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer38                              OFFSET(getStruct<T>, {0x4908, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer39                              OFFSET(getStruct<T>, {0x4950, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool12                             OFFSET(getStruct<T>, {0x4998, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult36                                 OFFSET(getStruct<T>, {0x49E0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer40                              OFFSET(getStruct<T>, {0x4A00, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult37                                 OFFSET(getStruct<T>, {0x4A48, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer41                              OFFSET(getStruct<T>, {0x4A68, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool13                             OFFSET(getStruct<T>, {0x4AB0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer42                              OFFSET(getStruct<T>, {0x4AF8, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer5                             OFFSET(getStruct<T>, {0x4B40, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool14                             OFFSET(getStruct<T>, {0x4BB0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult38                                 OFFSET(getStruct<T>, {0x4BF8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine7                                 OFFSET(getStruct<T>, {0x4C18, 200, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone8                                   OFFSET(getStruct<T>, {0x4CE0, 296, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult61                            OFFSET(getStruct<T>, {0x4E08, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult62                            OFFSET(getStruct<T>, {0x4E30, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer43                              OFFSET(getStruct<T>, {0x4E58, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult39                                 OFFSET(getStruct<T>, {0x4EA0, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  OFFSET(getStruct<T>, {0x4EC0, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult40                                 OFFSET(getStruct<T>, {0x4ED0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine8                                 OFFSET(getStruct<T>, {0x4EF0, 200, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive1                       OFFSET(getStruct<T>, {0x4FB8, 208, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive4                                OFFSET(getStruct<T>, {0x5088, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer6                             OFFSET(getStruct<T>, {0x5150, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive5                                OFFSET(getStruct<T>, {0x51C0, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer7                             OFFSET(getStruct<T>, {0x5288, 112, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose1                                 OFFSET(getStruct<T>, {0x52F8, 16, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool15                             OFFSET(getStruct<T>, {0x5308, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool16                             OFFSET(getStruct<T>, {0x5350, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer8                             OFFSET(getStruct<T>, {0x5398, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer9                             OFFSET(getStruct<T>, {0x5408, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool17                             OFFSET(getStruct<T>, {0x5478, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult41                                 OFFSET(getStruct<T>, {0x54C0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine9                                 OFFSET(getStruct<T>, {0x54E0, 200, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root2                                         OFFSET(getStruct<T>, {0x55A8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose2                              OFFSET(getStruct<T>, {0x55C8, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose3                              OFFSET(getStruct<T>, {0x5678, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root3                                         OFFSET(getStruct<T>, {0x5728, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose4                              OFFSET(getStruct<T>, {0x5748, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose5                              OFFSET(getStruct<T>, {0x57F8, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose6                              OFFSET(getStruct<T>, {0x58A8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root4                                         OFFSET(getStruct<T>, {0x5958, 32, 0, 0})
	CMember(AFortPlayerPawn*)                          FortPlayer                                                  OFFSET(get<T>, {0x5978, 8, 0, 0})
	CMember(AFortPawn*)                                WildlifePawn                                                OFFSET(get<T>, {0x5980, 8, 0, 0})
	DMember(bool)                                      State_Rule_Moving_Idle                                      OFFSET(get<bool>, {0x5988, 1, 0, 0})
	DMember(bool)                                      Is_Jumping                                                  OFFSET(get<bool>, {0x5989, 1, 0, 0})
	DMember(bool)                                      Is_Falling                                                  OFFSET(get<bool>, {0x598A, 1, 0, 0})
	DMember(bool)                                      Is_Surface_Swimming                                         OFFSET(get<bool>, {0x598B, 1, 0, 0})
	DMember(double)                                    BodyRoll                                                    OFFSET(get<double>, {0x5990, 8, 0, 0})
	DMember(double)                                    BoarSpeed2D                                                 OFFSET(get<double>, {0x5998, 8, 0, 0})
	DMember(bool)                                      Is_Moving_Backwards                                         OFFSET(get<bool>, {0x59A0, 1, 0, 0})
	DMember(bool)                                      Is_Boosting                                                 OFFSET(get<bool>, {0x59A1, 1, 0, 0})
	DMember(bool)                                      Can_Transition_Fall_To_Moving                               OFFSET(get<bool>, {0x59A2, 1, 0, 0})
	DMember(bool)                                      Can_Transition_Fall_To_Idle                                 OFFSET(get<bool>, {0x59A3, 1, 0, 0})
	DMember(bool)                                      Can_Transition_Idle_To_Moving                               OFFSET(get<bool>, {0x59A4, 1, 0, 0})
	DMember(bool)                                      Is_Turning_in_Place                                         OFFSET(get<bool>, {0x59A5, 1, 0, 0})
	DMember(double)                                    Turn_in_Place_Angle_Delta                                   OFFSET(get<double>, {0x59A8, 8, 0, 0})
	DMember(bool)                                      Should_Play_Stop_Backwards                                  OFFSET(get<bool>, {0x59B0, 1, 0, 0})
	DMember(bool)                                      Play_Land_Additive                                          OFFSET(get<bool>, {0x59B1, 1, 0, 0})
	DMember(bool)                                      Was_Turning_Right                                           OFFSET(get<bool>, {0x59B2, 1, 0, 0})
	DMember(double)                                    Backwards_Play_Rate                                         OFFSET(get<double>, {0x59B8, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleFinalPoseOverride
	// void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride);                               // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleFullBodyOverride
	// void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride);                              // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleLowerBodyOverride
	// void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleSplitBodyOverride
	// void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1ebf994] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.GetMainAnimBPData_Boar
	// void GetMainAnimBPData_Boar(UObject* AnimInstance);                                                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_3AC2A6BB409F97D93A87FE8016464FEE
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_3AC2A6BB409F97D93A87FE8016464FEE(); // [0x1ebf994] BlueprintEvent       
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.BlueprintCollectRidableAnimBPData
	// void BlueprintCollectRidableAnimBPData(UAnimInstance* RidableAnimInstance);                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Boar/BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.ExecuteUbergraph_BoarRidingPlayerLayerAnimBP
	// void ExecuteUbergraph_BoarRidingPlayerLayerAnimBP(int32_t EntryPoint);                                                   // [0x1ebf994] Final                
};

/// Class /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C
/// Size: 0x4AD8 (0x000AD0 - 0x0055A8)
class UWolfRidingPlayerLayerAnimBP_C : public UFortVehicleLayerAnimInstance_Riding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 21928;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAD0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0xAD8, 168, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0xB80, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xB88, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0xB90, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0xBB0, 176, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0xC60, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone1                                   OFFSET(getStruct<T>, {0xD88, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0xEB0, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0xED0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0xEF0, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 OFFSET(getStruct<T>, {0xF60, 200, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root1                                         OFFSET(getStruct<T>, {0x1028, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose1                              OFFSET(getStruct<T>, {0x1048, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x10F8, 120, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace1                        OFFSET(getStruct<T>, {0x1170, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace1                        OFFSET(getStruct<T>, {0x1190, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0x11B0, 72, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone2                                   OFFSET(getStruct<T>, {0x11F8, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone3                                   OFFSET(getStruct<T>, {0x1320, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone4                                   OFFSET(getStruct<T>, {0x1448, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone5                                   OFFSET(getStruct<T>, {0x1570, 296, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x1698, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0x16C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0x16E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0x1710, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult4                             OFFSET(getStruct<T>, {0x1738, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult5                             OFFSET(getStruct<T>, {0x1760, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult6                             OFFSET(getStruct<T>, {0x1788, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult7                             OFFSET(getStruct<T>, {0x17B0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult8                             OFFSET(getStruct<T>, {0x17D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult9                             OFFSET(getStruct<T>, {0x1800, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult10                            OFFSET(getStruct<T>, {0x1828, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult11                            OFFSET(getStruct<T>, {0x1850, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult12                            OFFSET(getStruct<T>, {0x1878, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult13                            OFFSET(getStruct<T>, {0x18A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult14                            OFFSET(getStruct<T>, {0x18C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult15                            OFFSET(getStruct<T>, {0x18F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult16                            OFFSET(getStruct<T>, {0x1918, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult17                            OFFSET(getStruct<T>, {0x1940, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0x1968, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0x19B0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool1                              OFFSET(getStruct<T>, {0x19F8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0x1A40, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0x1A60, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0x1AA8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool2                              OFFSET(getStruct<T>, {0x1AF0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0x1B38, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer4                               OFFSET(getStruct<T>, {0x1B58, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer5                               OFFSET(getStruct<T>, {0x1BA0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool3                              OFFSET(getStruct<T>, {0x1BE8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer6                               OFFSET(getStruct<T>, {0x1C30, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool4                              OFFSET(getStruct<T>, {0x1C78, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0x1CC0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer7                               OFFSET(getStruct<T>, {0x1CE0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult3                                  OFFSET(getStruct<T>, {0x1D28, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer8                               OFFSET(getStruct<T>, {0x1D48, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0x1D90, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive1                                OFFSET(getStruct<T>, {0x1E00, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool5                              OFFSET(getStruct<T>, {0x1EC8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer9                               OFFSET(getStruct<T>, {0x1F10, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult4                                  OFFSET(getStruct<T>, {0x1F58, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer10                              OFFSET(getStruct<T>, {0x1F78, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult5                                  OFFSET(getStruct<T>, {0x1FC0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult18                            OFFSET(getStruct<T>, {0x1FE0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult19                            OFFSET(getStruct<T>, {0x2008, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult20                            OFFSET(getStruct<T>, {0x2030, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult21                            OFFSET(getStruct<T>, {0x2058, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult22                            OFFSET(getStruct<T>, {0x2080, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult23                            OFFSET(getStruct<T>, {0x20A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult24                            OFFSET(getStruct<T>, {0x20D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult25                            OFFSET(getStruct<T>, {0x20F8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer11                              OFFSET(getStruct<T>, {0x2120, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult6                                  OFFSET(getStruct<T>, {0x2168, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer12                              OFFSET(getStruct<T>, {0x2188, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult7                                  OFFSET(getStruct<T>, {0x21D0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer13                              OFFSET(getStruct<T>, {0x21F0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult8                                  OFFSET(getStruct<T>, {0x2238, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer14                              OFFSET(getStruct<T>, {0x2258, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult9                                  OFFSET(getStruct<T>, {0x22A0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult26                            OFFSET(getStruct<T>, {0x22C0, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0x22E8, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult10                                 OFFSET(getStruct<T>, {0x23B0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer15                              OFFSET(getStruct<T>, {0x23D0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult11                                 OFFSET(getStruct<T>, {0x2418, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer16                              OFFSET(getStruct<T>, {0x2438, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult12                                 OFFSET(getStruct<T>, {0x2480, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer17                              OFFSET(getStruct<T>, {0x24A0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult13                                 OFFSET(getStruct<T>, {0x24E8, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult27                            OFFSET(getStruct<T>, {0x2508, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine1                                 OFFSET(getStruct<T>, {0x2530, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult14                                 OFFSET(getStruct<T>, {0x25F8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer18                              OFFSET(getStruct<T>, {0x2618, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool6                              OFFSET(getStruct<T>, {0x2660, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult28                            OFFSET(getStruct<T>, {0x26A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult29                            OFFSET(getStruct<T>, {0x26D0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer19                              OFFSET(getStruct<T>, {0x26F8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult15                                 OFFSET(getStruct<T>, {0x2740, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  OFFSET(getStruct<T>, {0x2760, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult16                                 OFFSET(getStruct<T>, {0x2770, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine2                                 OFFSET(getStruct<T>, {0x2790, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive2                                OFFSET(getStruct<T>, {0x2858, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer20                              OFFSET(getStruct<T>, {0x2920, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool7                              OFFSET(getStruct<T>, {0x2968, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer2                             OFFSET(getStruct<T>, {0x29B0, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive3                                OFFSET(getStruct<T>, {0x2A20, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer3                             OFFSET(getStruct<T>, {0x2AE8, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult17                                 OFFSET(getStruct<T>, {0x2B58, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer21                              OFFSET(getStruct<T>, {0x2B78, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult18                                 OFFSET(getStruct<T>, {0x2BC0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine3                                 OFFSET(getStruct<T>, {0x2BE0, 200, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              OFFSET(getStruct<T>, {0x2CA8, 240, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x2D98, 40, 0, 0})
	SMember(FAnimNode_Inertialization)                 AnimGraphNode_Inertialization                               OFFSET(getStruct<T>, {0x2DC0, 272, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      OFFSET(getStruct<T>, {0x2ED0, 280, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend1                             OFFSET(getStruct<T>, {0x2FE8, 240, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult30                            OFFSET(getStruct<T>, {0x30D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult31                            OFFSET(getStruct<T>, {0x3100, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult32                            OFFSET(getStruct<T>, {0x3128, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0x3150, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult19                                 OFFSET(getStruct<T>, {0x3178, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer4                             OFFSET(getStruct<T>, {0x3198, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult20                                 OFFSET(getStruct<T>, {0x3208, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose2                                OFFSET(getStruct<T>, {0x3228, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult21                                 OFFSET(getStruct<T>, {0x3250, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine4                                 OFFSET(getStruct<T>, {0x3270, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose1                               OFFSET(getStruct<T>, {0x3338, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose3                                OFFSET(getStruct<T>, {0x33B0, 40, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose2                               OFFSET(getStruct<T>, {0x33D8, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose4                                OFFSET(getStruct<T>, {0x3450, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose5                                OFFSET(getStruct<T>, {0x3478, 40, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive                        OFFSET(getStruct<T>, {0x34A0, 208, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace1                     OFFSET(getStruct<T>, {0x3570, 280, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult33                            OFFSET(getStruct<T>, {0x3688, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult34                            OFFSET(getStruct<T>, {0x36B0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult35                            OFFSET(getStruct<T>, {0x36D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult36                            OFFSET(getStruct<T>, {0x3700, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult37                            OFFSET(getStruct<T>, {0x3728, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult38                            OFFSET(getStruct<T>, {0x3750, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult39                            OFFSET(getStruct<T>, {0x3778, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult40                            OFFSET(getStruct<T>, {0x37A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult41                            OFFSET(getStruct<T>, {0x37C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult42                            OFFSET(getStruct<T>, {0x37F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult43                            OFFSET(getStruct<T>, {0x3818, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult44                            OFFSET(getStruct<T>, {0x3840, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult45                            OFFSET(getStruct<T>, {0x3868, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult46                            OFFSET(getStruct<T>, {0x3890, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult47                            OFFSET(getStruct<T>, {0x38B8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult48                            OFFSET(getStruct<T>, {0x38E0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult49                            OFFSET(getStruct<T>, {0x3908, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult50                            OFFSET(getStruct<T>, {0x3930, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer22                              OFFSET(getStruct<T>, {0x3958, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer23                              OFFSET(getStruct<T>, {0x39A0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool8                              OFFSET(getStruct<T>, {0x39E8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult22                                 OFFSET(getStruct<T>, {0x3A30, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer24                              OFFSET(getStruct<T>, {0x3A50, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer25                              OFFSET(getStruct<T>, {0x3A98, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool9                              OFFSET(getStruct<T>, {0x3AE0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult23                                 OFFSET(getStruct<T>, {0x3B28, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer26                              OFFSET(getStruct<T>, {0x3B48, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult24                                 OFFSET(getStruct<T>, {0x3B90, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer27                              OFFSET(getStruct<T>, {0x3BB0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool10                             OFFSET(getStruct<T>, {0x3BF8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer28                              OFFSET(getStruct<T>, {0x3C40, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult25                                 OFFSET(getStruct<T>, {0x3C88, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult51                            OFFSET(getStruct<T>, {0x3CA8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult52                            OFFSET(getStruct<T>, {0x3CD0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult53                            OFFSET(getStruct<T>, {0x3CF8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult54                            OFFSET(getStruct<T>, {0x3D20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult55                            OFFSET(getStruct<T>, {0x3D48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult56                            OFFSET(getStruct<T>, {0x3D70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult57                            OFFSET(getStruct<T>, {0x3D98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult58                            OFFSET(getStruct<T>, {0x3DC0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer29                              OFFSET(getStruct<T>, {0x3DE8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult26                                 OFFSET(getStruct<T>, {0x3E30, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer30                              OFFSET(getStruct<T>, {0x3E50, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult27                                 OFFSET(getStruct<T>, {0x3E98, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer31                              OFFSET(getStruct<T>, {0x3EB8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult28                                 OFFSET(getStruct<T>, {0x3F00, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer32                              OFFSET(getStruct<T>, {0x3F20, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult29                                 OFFSET(getStruct<T>, {0x3F68, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult59                            OFFSET(getStruct<T>, {0x3F88, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine5                                 OFFSET(getStruct<T>, {0x3FB0, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult30                                 OFFSET(getStruct<T>, {0x4078, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer33                              OFFSET(getStruct<T>, {0x4098, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult31                                 OFFSET(getStruct<T>, {0x40E0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer34                              OFFSET(getStruct<T>, {0x4100, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult32                                 OFFSET(getStruct<T>, {0x4148, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer35                              OFFSET(getStruct<T>, {0x4168, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult33                                 OFFSET(getStruct<T>, {0x41B0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult60                            OFFSET(getStruct<T>, {0x41D0, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine6                                 OFFSET(getStruct<T>, {0x41F8, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult34                                 OFFSET(getStruct<T>, {0x42C0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer36                              OFFSET(getStruct<T>, {0x42E0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult35                                 OFFSET(getStruct<T>, {0x4328, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer37                              OFFSET(getStruct<T>, {0x4348, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer38                              OFFSET(getStruct<T>, {0x4390, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer39                              OFFSET(getStruct<T>, {0x43D8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool11                             OFFSET(getStruct<T>, {0x4420, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool12                             OFFSET(getStruct<T>, {0x4468, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult36                                 OFFSET(getStruct<T>, {0x44B0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer40                              OFFSET(getStruct<T>, {0x44D0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult37                                 OFFSET(getStruct<T>, {0x4518, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer41                              OFFSET(getStruct<T>, {0x4538, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool13                             OFFSET(getStruct<T>, {0x4580, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer42                              OFFSET(getStruct<T>, {0x45C8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool14                             OFFSET(getStruct<T>, {0x4610, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer5                             OFFSET(getStruct<T>, {0x4658, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult38                                 OFFSET(getStruct<T>, {0x46C8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine7                                 OFFSET(getStruct<T>, {0x46E8, 200, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone6                                   OFFSET(getStruct<T>, {0x47B0, 296, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive4                                OFFSET(getStruct<T>, {0x48D8, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer6                             OFFSET(getStruct<T>, {0x49A0, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive5                                OFFSET(getStruct<T>, {0x4A10, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer7                             OFFSET(getStruct<T>, {0x4AD8, 112, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose1                                 OFFSET(getStruct<T>, {0x4B48, 16, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool15                             OFFSET(getStruct<T>, {0x4B58, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool16                             OFFSET(getStruct<T>, {0x4BA0, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer8                             OFFSET(getStruct<T>, {0x4BE8, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer9                             OFFSET(getStruct<T>, {0x4C58, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool17                             OFFSET(getStruct<T>, {0x4CC8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult39                                 OFFSET(getStruct<T>, {0x4D10, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine8                                 OFFSET(getStruct<T>, {0x4D30, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult61                            OFFSET(getStruct<T>, {0x4DF8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult62                            OFFSET(getStruct<T>, {0x4E20, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer43                              OFFSET(getStruct<T>, {0x4E48, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult40                                 OFFSET(getStruct<T>, {0x4E90, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose2                                 OFFSET(getStruct<T>, {0x4EB0, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult41                                 OFFSET(getStruct<T>, {0x4EC0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine9                                 OFFSET(getStruct<T>, {0x4EE0, 200, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive1                       OFFSET(getStruct<T>, {0x4FA8, 208, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace2                     OFFSET(getStruct<T>, {0x5078, 280, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root2                                         OFFSET(getStruct<T>, {0x5190, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose2                              OFFSET(getStruct<T>, {0x51B0, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose3                              OFFSET(getStruct<T>, {0x5260, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root3                                         OFFSET(getStruct<T>, {0x5310, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose4                              OFFSET(getStruct<T>, {0x5330, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose5                              OFFSET(getStruct<T>, {0x53E0, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose6                              OFFSET(getStruct<T>, {0x5490, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root4                                         OFFSET(getStruct<T>, {0x5540, 32, 0, 0})
	DMember(bool)                                      State_Rule_Moving_Idle                                      OFFSET(get<bool>, {0x5560, 1, 0, 0})
	DMember(bool)                                      State_Rule_Idle_Moving                                      OFFSET(get<bool>, {0x5561, 1, 0, 0})
	DMember(bool)                                      Is_Jumping                                                  OFFSET(get<bool>, {0x5562, 1, 0, 0})
	DMember(bool)                                      State_Rule_Fall_Idle                                        OFFSET(get<bool>, {0x5563, 1, 0, 0})
	DMember(bool)                                      Is_Falling                                                  OFFSET(get<bool>, {0x5564, 1, 0, 0})
	DMember(bool)                                      State_Rule_Fall_Moving                                      OFFSET(get<bool>, {0x5565, 1, 0, 0})
	DMember(bool)                                      State_Rule_Jump_Land_Moving                                 OFFSET(get<bool>, {0x5566, 1, 0, 0})
	DMember(bool)                                      Is_Surface_Swimming                                         OFFSET(get<bool>, {0x5567, 1, 0, 0})
	DMember(bool)                                      State_Rule_Swim_Idle_Swim_Loco                              OFFSET(get<bool>, {0x5568, 1, 0, 0})
	DMember(double)                                    BodyRoll                                                    OFFSET(get<double>, {0x5570, 8, 0, 0})
	DMember(double)                                    WolfSpeed2D                                                 OFFSET(get<double>, {0x5578, 8, 0, 0})
	DMember(bool)                                      Is_Boosting                                                 OFFSET(get<bool>, {0x5580, 1, 0, 0})
	DMember(bool)                                      Play_Land_Additive                                          OFFSET(get<bool>, {0x5581, 1, 0, 0})
	DMember(bool)                                      Is_Moving_Backwards                                         OFFSET(get<bool>, {0x5582, 1, 0, 0})
	DMember(bool)                                      Should_Play_Stop_Backwards                                  OFFSET(get<bool>, {0x5583, 1, 0, 0})
	DMember(bool)                                      Is_Turning_in_Place                                         OFFSET(get<bool>, {0x5584, 1, 0, 0})
	DMember(double)                                    Turn_in_Place_Angle_Delta                                   OFFSET(get<double>, {0x5588, 8, 0, 0})
	DMember(bool)                                      Was_Turning_Right                                           OFFSET(get<bool>, {0x5590, 1, 0, 0})
	DMember(double)                                    Turn_in_Place_Rotation_Speed                                OFFSET(get<double>, {0x5598, 8, 0, 0})
	DMember(double)                                    Backwards_Play_Rate                                         OFFSET(get<double>, {0x55A0, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleFinalPoseOverride
	// void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride);                               // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleFullBodyOverride
	// void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride);                              // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleLowerBodyOverride
	// void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleSplitBodyOverride
	// void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1ebf994] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.GetMainAnimBPData_Wolf
	// void GetMainAnimBPData_Wolf(UObject* AnimInstance);                                                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_0A1EFC344EF1A6E586A54FAEC4F5F766
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_0A1EFC344EF1A6E586A54FAEC4F5F766(); // [0x1ebf994] BlueprintEvent       
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_4EDCD4F04E8D5963547EB2BE1F10FA2D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_4EDCD4F04E8D5963547EB2BE1F10FA2D(); // [0x1ebf994] BlueprintEvent       
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D7C43EB141CFE2929E3D23914954FA93
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D7C43EB141CFE2929E3D23914954FA93(); // [0x1ebf994] BlueprintEvent       
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.BlueprintCollectRidableAnimBPData
	// void BlueprintCollectRidableAnimBPData(UAnimInstance* RidableAnimInstance);                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.UpdateBoostPlayRate
	// void UpdateBoostPlayRate();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.PlaceHandIKTargets
	// void PlaceHandIKTargets();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Animation/HardSaddle/Wolf/WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.ExecuteUbergraph_WolfRidingPlayerLayerAnimBP
	// void ExecuteUbergraph_WolfRidingPlayerLayerAnimBP(int32_t EntryPoint);                                                   // [0x1ebf994] Final                
};

/// Class /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C
/// Size: 0x18A9 (0x000870 - 0x002119)
class URidingPlayerLayerAnimBP_C : public UFortValetPassengerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8473;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x870, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0x878, 28, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x898, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x8A0, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x8A8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0x8C8, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x978, 120, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              OFFSET(getStruct<T>, {0x9F0, 240, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0xAE0, 40, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0xB08, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0xC30, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0xC50, 32, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose1                               OFFSET(getStruct<T>, {0xC70, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0xCE8, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0xD10, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose2                                OFFSET(getStruct<T>, {0xD58, 40, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                OFFSET(getStruct<T>, {0xD80, 176, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0xE30, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0xE78, 72, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      OFFSET(getStruct<T>, {0xEC0, 280, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0xFD8, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 OFFSET(getStruct<T>, {0x1048, 200, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone1                                   OFFSET(getStruct<T>, {0x1110, 296, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose1                              OFFSET(getStruct<T>, {0x1238, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root1                                         OFFSET(getStruct<T>, {0x12E8, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot1                                         OFFSET(getStruct<T>, {0x1308, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool1                              OFFSET(getStruct<T>, {0x1350, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0x1398, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool2                              OFFSET(getStruct<T>, {0x13E0, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose2                               OFFSET(getStruct<T>, {0x1428, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose3                                OFFSET(getStruct<T>, {0x14A0, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose4                                OFFSET(getStruct<T>, {0x14C8, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool3                              OFFSET(getStruct<T>, {0x14F0, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0x1538, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool4                              OFFSET(getStruct<T>, {0x15A8, 72, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone1                               OFFSET(getStruct<T>, {0x15F0, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0x16A0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool5                              OFFSET(getStruct<T>, {0x16E8, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose5                                OFFSET(getStruct<T>, {0x1730, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool6                              OFFSET(getStruct<T>, {0x1758, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0x17A0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool7                              OFFSET(getStruct<T>, {0x17E8, 72, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace1                     OFFSET(getStruct<T>, {0x1830, 280, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose6                                OFFSET(getStruct<T>, {0x1948, 40, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone2                                   OFFSET(getStruct<T>, {0x1970, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone3                                   OFFSET(getStruct<T>, {0x1A98, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone4                                   OFFSET(getStruct<T>, {0x1BC0, 296, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root2                                         OFFSET(getStruct<T>, {0x1CE8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose2                              OFFSET(getStruct<T>, {0x1D08, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose3                              OFFSET(getStruct<T>, {0x1DB8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root3                                         OFFSET(getStruct<T>, {0x1E68, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose4                              OFFSET(getStruct<T>, {0x1E88, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose5                              OFFSET(getStruct<T>, {0x1F38, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose6                              OFFSET(getStruct<T>, {0x1FE8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root4                                         OFFSET(getStruct<T>, {0x2098, 32, 0, 0})
	SMember(FRotator)                                  MatchRootYaw                                                OFFSET(getStruct<T>, {0x20B8, 24, 0, 0})
	DMember(bool)                                      Is_Targeting                                                OFFSET(get<bool>, {0x20D0, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          FortPlayer                                                  OFFSET(get<T>, {0x20D8, 8, 0, 0})
	DMember(double)                                    Timer                                                       OFFSET(get<double>, {0x20E0, 8, 0, 0})
	DMember(bool)                                      ShouldTransitionToRiding                                    OFFSET(get<bool>, {0x20E8, 1, 0, 0})
	DMember(double)                                    LowerBodyYaw                                                OFFSET(get<double>, {0x20F0, 8, 0, 0})
	DMember(bool)                                      IsRideMode                                                  OFFSET(get<bool>, {0x20F8, 1, 0, 0})
	DMember(bool)                                      IsSprinting                                                 OFFSET(get<bool>, {0x20F9, 1, 0, 0})
	DMember(bool)                                      IsStandingStill                                             OFFSET(get<bool>, {0x20FA, 1, 0, 0})
	DMember(bool)                                      IsInCombat                                                  OFFSET(get<bool>, {0x20FB, 1, 0, 0})
	CMember(AFortAIPawn*)                              WildlifePawn                                                OFFSET(get<T>, {0x2100, 8, 0, 0})
	DMember(bool)                                      IsSmackie                                                   OFFSET(get<bool>, {0x2108, 1, 0, 0})
	DMember(double)                                    Velocity                                                    OFFSET(get<double>, {0x2110, 8, 0, 0})
	DMember(bool)                                      IsNug                                                       OFFSET(get<bool>, {0x2118, 1, 0, 0})


	/// Functions
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleFinalPoseOverride
	// void VehicleFinalPoseOverride(FPoseLink InFinalPose, FPoseLink& VehicleFinalPoseOverride);                               // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleFullBodyOverride
	// void VehicleFullBodyOverride(FPoseLink InPoseFullBody, FPoseLink& VehicleFullBodyOverride);                              // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleLowerBodyOverride
	// void VehicleLowerBodyOverride(FPoseLink InPoseLowerBodyDefault, FPoseLink InPoseUpperBody, FPoseLink& VehicleLowerBodyOverride); // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.VehicleSplitBodyOverride
	// void VehicleSplitBodyOverride(FPoseLink InPoseSplitBody, FPoseLink InPoseUpperAndLowerBody, FPoseLink InPoseUpperAndLowerBodyRemoveRoot, FPoseLink& VehicleSplitBodyOverride); // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1ebf994] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976(); // [0x1ebf994] BlueprintEvent       
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA(); // [0x1ebf994] BlueprintEvent       
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /RidingContent/Animation/Proto/RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C.ExecuteUbergraph_RidingPlayerLayerAnimBP
	// void ExecuteUbergraph_RidingPlayerLayerAnimBP(int32_t EntryPoint);                                                       // [0x1ebf994] Final|HasDefaults    
};

/// Class /GrindRail/Animation/AnimNotify_GrindRailLand.AnimNotify_GrindRailLand_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_GrindRailLand_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C
/// Size: 0x56D0 (0x000730 - 0x005E00)
class UGrindRail_Player_LayerAnimBP_C : public UFortGrindRailLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 24064;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x730, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0x738, 88, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x790, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x798, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x7A0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0x7C0, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose1                              OFFSET(getStruct<T>, {0x870, 176, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x920, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0x948, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0x970, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0x998, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult4                             OFFSET(getStruct<T>, {0x9C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult5                             OFFSET(getStruct<T>, {0x9E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult6                             OFFSET(getStruct<T>, {0xA10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult7                             OFFSET(getStruct<T>, {0xA38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult8                             OFFSET(getStruct<T>, {0xA60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult9                             OFFSET(getStruct<T>, {0xA88, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult10                            OFFSET(getStruct<T>, {0xAB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult11                            OFFSET(getStruct<T>, {0xAD8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult12                            OFFSET(getStruct<T>, {0xB00, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult13                            OFFSET(getStruct<T>, {0xB28, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult14                            OFFSET(getStruct<T>, {0xB50, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult15                            OFFSET(getStruct<T>, {0xB78, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult16                            OFFSET(getStruct<T>, {0xBA0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult17                            OFFSET(getStruct<T>, {0xBC8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult18                            OFFSET(getStruct<T>, {0xBF0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult19                            OFFSET(getStruct<T>, {0xC18, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult20                            OFFSET(getStruct<T>, {0xC40, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult21                            OFFSET(getStruct<T>, {0xC68, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult22                            OFFSET(getStruct<T>, {0xC90, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult23                            OFFSET(getStruct<T>, {0xCB8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult24                            OFFSET(getStruct<T>, {0xCE0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult25                            OFFSET(getStruct<T>, {0xD08, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult26                            OFFSET(getStruct<T>, {0xD30, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult27                            OFFSET(getStruct<T>, {0xD58, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0xD80, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0xDC8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0xDE8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0xE30, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0xE50, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0xE98, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0xEB8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult3                                  OFFSET(getStruct<T>, {0xF00, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer4                               OFFSET(getStruct<T>, {0xF20, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult4                                  OFFSET(getStruct<T>, {0xF68, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer5                               OFFSET(getStruct<T>, {0xF88, 72, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone                                OFFSET(getStruct<T>, {0xFD0, 176, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone1                               OFFSET(getStruct<T>, {0x1080, 176, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace                      OFFSET(getStruct<T>, {0x1130, 280, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult5                                  OFFSET(getStruct<T>, {0x1248, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer6                               OFFSET(getStruct<T>, {0x1268, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult6                                  OFFSET(getStruct<T>, {0x12B0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer7                               OFFSET(getStruct<T>, {0x12D0, 72, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone2                               OFFSET(getStruct<T>, {0x1318, 176, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone3                               OFFSET(getStruct<T>, {0x13C8, 176, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace1                     OFFSET(getStruct<T>, {0x1478, 280, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult7                                  OFFSET(getStruct<T>, {0x1590, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer8                               OFFSET(getStruct<T>, {0x15B0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult8                                  OFFSET(getStruct<T>, {0x15F8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer9                               OFFSET(getStruct<T>, {0x1618, 72, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone4                               OFFSET(getStruct<T>, {0x1660, 176, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone5                               OFFSET(getStruct<T>, {0x1710, 176, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace2                     OFFSET(getStruct<T>, {0x17C0, 280, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult9                                  OFFSET(getStruct<T>, {0x18D8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer10                              OFFSET(getStruct<T>, {0x18F8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult10                                 OFFSET(getStruct<T>, {0x1940, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer11                              OFFSET(getStruct<T>, {0x1960, 72, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace3                     OFFSET(getStruct<T>, {0x19A8, 280, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult11                                 OFFSET(getStruct<T>, {0x1AC0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0x1AE0, 200, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone6                               OFFSET(getStruct<T>, {0x1BA8, 176, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0x1C58, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root1                                         OFFSET(getStruct<T>, {0x1CA0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose2                              OFFSET(getStruct<T>, {0x1CC0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root2                                         OFFSET(getStruct<T>, {0x1D70, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose3                              OFFSET(getStruct<T>, {0x1D90, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root3                                         OFFSET(getStruct<T>, {0x1E40, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose4                              OFFSET(getStruct<T>, {0x1E60, 176, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x1F10, 120, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult28                            OFFSET(getStruct<T>, {0x1F88, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult29                            OFFSET(getStruct<T>, {0x1FB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult30                            OFFSET(getStruct<T>, {0x1FD8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult31                            OFFSET(getStruct<T>, {0x2000, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult32                            OFFSET(getStruct<T>, {0x2028, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult33                            OFFSET(getStruct<T>, {0x2050, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult34                            OFFSET(getStruct<T>, {0x2078, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult35                            OFFSET(getStruct<T>, {0x20A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult36                            OFFSET(getStruct<T>, {0x20C8, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x20F0, 40, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 OFFSET(getStruct<T>, {0x2118, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer12                              OFFSET(getStruct<T>, {0x21E0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult12                                 OFFSET(getStruct<T>, {0x2228, 32, 0, 0})
	SMember(FAnimNode_ApplyMeshSpaceAdditive)          AnimGraphNode_ApplyMeshSpaceAdditive                        OFFSET(getStruct<T>, {0x2248, 208, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer13                              OFFSET(getStruct<T>, {0x2318, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer14                              OFFSET(getStruct<T>, {0x2360, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool1                              OFFSET(getStruct<T>, {0x23A8, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x23F0, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose                                  OFFSET(getStruct<T>, {0x2410, 16, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              OFFSET(getStruct<T>, {0x2420, 240, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive1                                OFFSET(getStruct<T>, {0x2510, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0x25D8, 112, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0x2648, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x2770, 32, 0, 0})
	SMember(FAnimNode_ResetRoot)                       AnimGraphNode_ResetRoot                                     OFFSET(getStruct<T>, {0x2790, 216, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0x2868, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult37                            OFFSET(getStruct<T>, {0x2890, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult38                            OFFSET(getStruct<T>, {0x28B8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer15                              OFFSET(getStruct<T>, {0x28E0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult13                                 OFFSET(getStruct<T>, {0x2928, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  OFFSET(getStruct<T>, {0x2948, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult14                                 OFFSET(getStruct<T>, {0x2958, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine1                                 OFFSET(getStruct<T>, {0x2978, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive2                                OFFSET(getStruct<T>, {0x2A40, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult15                                 OFFSET(getStruct<T>, {0x2B08, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine2                                 OFFSET(getStruct<T>, {0x2B28, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult16                                 OFFSET(getStruct<T>, {0x2BF0, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose2                                OFFSET(getStruct<T>, {0x2C10, 40, 0, 0})
	SMember(FAnimNode_ModifyCurve)                     AnimGraphNode_ModifyCurve                                   OFFSET(getStruct<T>, {0x2C38, 288, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult17                                 OFFSET(getStruct<T>, {0x2D58, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine3                                 OFFSET(getStruct<T>, {0x2D78, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose1                               OFFSET(getStruct<T>, {0x2E40, 120, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0x2EB8, 112, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose2                               OFFSET(getStruct<T>, {0x2F28, 120, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult39                            OFFSET(getStruct<T>, {0x2FA0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult40                            OFFSET(getStruct<T>, {0x2FC8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult41                            OFFSET(getStruct<T>, {0x2FF0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult42                            OFFSET(getStruct<T>, {0x3018, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult43                            OFFSET(getStruct<T>, {0x3040, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult44                            OFFSET(getStruct<T>, {0x3068, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult45                            OFFSET(getStruct<T>, {0x3090, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult46                            OFFSET(getStruct<T>, {0x30B8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult47                            OFFSET(getStruct<T>, {0x30E0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult48                            OFFSET(getStruct<T>, {0x3108, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult49                            OFFSET(getStruct<T>, {0x3130, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult50                            OFFSET(getStruct<T>, {0x3158, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult51                            OFFSET(getStruct<T>, {0x3180, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult52                            OFFSET(getStruct<T>, {0x31A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult53                            OFFSET(getStruct<T>, {0x31D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult54                            OFFSET(getStruct<T>, {0x31F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult55                            OFFSET(getStruct<T>, {0x3220, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult56                            OFFSET(getStruct<T>, {0x3248, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult57                            OFFSET(getStruct<T>, {0x3270, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult58                            OFFSET(getStruct<T>, {0x3298, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult59                            OFFSET(getStruct<T>, {0x32C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult60                            OFFSET(getStruct<T>, {0x32E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult61                            OFFSET(getStruct<T>, {0x3310, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult62                            OFFSET(getStruct<T>, {0x3338, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult63                            OFFSET(getStruct<T>, {0x3360, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult64                            OFFSET(getStruct<T>, {0x3388, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult65                            OFFSET(getStruct<T>, {0x33B0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer16                              OFFSET(getStruct<T>, {0x33D8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult18                                 OFFSET(getStruct<T>, {0x3420, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer17                              OFFSET(getStruct<T>, {0x3440, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult19                                 OFFSET(getStruct<T>, {0x3488, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult66                            OFFSET(getStruct<T>, {0x34A8, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine4                                 OFFSET(getStruct<T>, {0x34D0, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult20                                 OFFSET(getStruct<T>, {0x3598, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose3                                OFFSET(getStruct<T>, {0x35B8, 40, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive3                                OFFSET(getStruct<T>, {0x35E0, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer18                              OFFSET(getStruct<T>, {0x36A8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult21                                 OFFSET(getStruct<T>, {0x36F0, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose4                                OFFSET(getStruct<T>, {0x3710, 40, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive4                                OFFSET(getStruct<T>, {0x3738, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer19                              OFFSET(getStruct<T>, {0x3800, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult22                                 OFFSET(getStruct<T>, {0x3848, 32, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive5                                OFFSET(getStruct<T>, {0x3868, 200, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose5                                OFFSET(getStruct<T>, {0x3930, 40, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer2                             OFFSET(getStruct<T>, {0x3958, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive6                                OFFSET(getStruct<T>, {0x39C8, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult67                            OFFSET(getStruct<T>, {0x3A90, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer20                              OFFSET(getStruct<T>, {0x3AB8, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive7                                OFFSET(getStruct<T>, {0x3B00, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer21                              OFFSET(getStruct<T>, {0x3BC8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult23                                 OFFSET(getStruct<T>, {0x3C10, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer22                              OFFSET(getStruct<T>, {0x3C30, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult24                                 OFFSET(getStruct<T>, {0x3C78, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine5                                 OFFSET(getStruct<T>, {0x3C98, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult25                                 OFFSET(getStruct<T>, {0x3D60, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult68                            OFFSET(getStruct<T>, {0x3D80, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose6                                OFFSET(getStruct<T>, {0x3DA8, 40, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive8                                OFFSET(getStruct<T>, {0x3DD0, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult69                            OFFSET(getStruct<T>, {0x3E98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult70                            OFFSET(getStruct<T>, {0x3EC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult71                            OFFSET(getStruct<T>, {0x3EE8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer23                              OFFSET(getStruct<T>, {0x3F10, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult26                                 OFFSET(getStruct<T>, {0x3F58, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer24                              OFFSET(getStruct<T>, {0x3F78, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult27                                 OFFSET(getStruct<T>, {0x3FC0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer25                              OFFSET(getStruct<T>, {0x3FE0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult28                                 OFFSET(getStruct<T>, {0x4028, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult72                            OFFSET(getStruct<T>, {0x4048, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine6                                 OFFSET(getStruct<T>, {0x4070, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult29                                 OFFSET(getStruct<T>, {0x4138, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult73                            OFFSET(getStruct<T>, {0x4158, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult74                            OFFSET(getStruct<T>, {0x4180, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult75                            OFFSET(getStruct<T>, {0x41A8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer26                              OFFSET(getStruct<T>, {0x41D0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult30                                 OFFSET(getStruct<T>, {0x4218, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer27                              OFFSET(getStruct<T>, {0x4238, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult31                                 OFFSET(getStruct<T>, {0x4280, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult76                            OFFSET(getStruct<T>, {0x42A0, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine7                                 OFFSET(getStruct<T>, {0x42C8, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult32                                 OFFSET(getStruct<T>, {0x4390, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose7                                OFFSET(getStruct<T>, {0x43B0, 40, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive9                                OFFSET(getStruct<T>, {0x43D8, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult77                            OFFSET(getStruct<T>, {0x44A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult78                            OFFSET(getStruct<T>, {0x44C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult79                            OFFSET(getStruct<T>, {0x44F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult80                            OFFSET(getStruct<T>, {0x4518, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer28                              OFFSET(getStruct<T>, {0x4540, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult33                                 OFFSET(getStruct<T>, {0x4588, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer29                              OFFSET(getStruct<T>, {0x45A8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult34                                 OFFSET(getStruct<T>, {0x45F0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine8                                 OFFSET(getStruct<T>, {0x4610, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult35                                 OFFSET(getStruct<T>, {0x46D8, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose8                                OFFSET(getStruct<T>, {0x46F8, 40, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               OFFSET(getStruct<T>, {0x4720, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult36                                 OFFSET(getStruct<T>, {0x47E8, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose9                                OFFSET(getStruct<T>, {0x4808, 40, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive10                               OFFSET(getStruct<T>, {0x4830, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer30                              OFFSET(getStruct<T>, {0x48F8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult37                                 OFFSET(getStruct<T>, {0x4940, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose10                               OFFSET(getStruct<T>, {0x4960, 40, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive11                               OFFSET(getStruct<T>, {0x4988, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult81                            OFFSET(getStruct<T>, {0x4A50, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer31                              OFFSET(getStruct<T>, {0x4A78, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult38                                 OFFSET(getStruct<T>, {0x4AC0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer32                              OFFSET(getStruct<T>, {0x4AE0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult39                                 OFFSET(getStruct<T>, {0x4B28, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine9                                 OFFSET(getStruct<T>, {0x4B48, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult40                                 OFFSET(getStruct<T>, {0x4C10, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose11                               OFFSET(getStruct<T>, {0x4C30, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult41                                 OFFSET(getStruct<T>, {0x4C58, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine10                                OFFSET(getStruct<T>, {0x4C78, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose3                               OFFSET(getStruct<T>, {0x4D40, 120, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer3                             OFFSET(getStruct<T>, {0x4DB8, 112, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose4                               OFFSET(getStruct<T>, {0x4E28, 120, 0, 0})
	SMember(FFortAnimNode_GrindRailSlopeWarping)       FortAnimGraphNode_GrindRailSlopeWarping                     OFFSET(getStruct<T>, {0x4EA0, 832, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace1                        OFFSET(getStruct<T>, {0x51E0, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace1                        OFFSET(getStruct<T>, {0x5200, 32, 0, 0})
	SMember(FAnimNode_ModifyCurve)                     AnimGraphNode_ModifyCurve1                                  OFFSET(getStruct<T>, {0x5220, 288, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer4                             OFFSET(getStruct<T>, {0x5340, 112, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root4                                         OFFSET(getStruct<T>, {0x53B0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose5                              OFFSET(getStruct<T>, {0x53D0, 176, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK                                         OFFSET(getStruct<T>, {0x5480, 248, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace2                        OFFSET(getStruct<T>, {0x5578, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace2                        OFFSET(getStruct<T>, {0x5598, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root5                                         OFFSET(getStruct<T>, {0x55B8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose6                              OFFSET(getStruct<T>, {0x55D8, 176, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose7                              OFFSET(getStruct<T>, {0x5688, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root6                                         OFFSET(getStruct<T>, {0x5738, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose8                              OFFSET(getStruct<T>, {0x5758, 176, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive12                               OFFSET(getStruct<T>, {0x5808, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer5                             OFFSET(getStruct<T>, {0x58D0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer6                             OFFSET(getStruct<T>, {0x5940, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive13                               OFFSET(getStruct<T>, {0x59B0, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive14                               OFFSET(getStruct<T>, {0x5A78, 200, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace4                     OFFSET(getStruct<T>, {0x5B40, 280, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace5                     OFFSET(getStruct<T>, {0x5C58, 280, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer7                             OFFSET(getStruct<T>, {0x5D70, 112, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root7                                         OFFSET(getStruct<T>, {0x5DE0, 32, 0, 0})


	/// Functions
	// Function /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.MovementMode_LowerBodyOverride
	// void MovementMode_LowerBodyOverride(FPoseLink InLowerBodyPose, FPoseLink InSourcePose, FPoseLink& MovementMode_LowerBodyOverride); // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.MovementMode_LocomotionAdditives
	// void MovementMode_LocomotionAdditives(FPoseLink InLocomotionAdditivesPose, FPoseLink& MovementMode_LocomotionAdditives); // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.MovementMode_SourcePose
	// void MovementMode_SourcePose(FPoseLink InSourcePoseBase, FPoseLink& MovementMode_SourcePose);                            // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.MovementMode_FullBodyOverride
	// void MovementMode_FullBodyOverride(FPoseLink InputPoseFullBody, FPoseLink& MovementMode_FullBodyOverride);               // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.MovementMode_FinalPoseOverride
	// void MovementMode_FinalPoseOverride(FPoseLink InFinalPose, FPoseLink& MovementMode_FinalPoseOverride);                   // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.MovementMode_AimOffset
	// void MovementMode_AimOffset(FPoseLink InAimOffsetsPose, FPoseLink InSourcePosePreAimOffsets, FPoseLink& MovementMode_AimOffset); // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.LocomotionAdditiveGroup
	// void LocomotionAdditiveGroup(FPoseLink InPoseLocomotionAdditive, FPoseLink& LocomotionAdditiveGroup);                    // [0x1ebf994] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1ebf994] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_1A4025C94AC4E34FBC9B23AB49CFD72E
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_1A4025C94AC4E34FBC9B23AB49CFD72E(); // [0x1ebf994] BlueprintEvent       
	// Function /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_CFB7F39F4D881298D08C1D96AD6AA6FA
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_CFB7F39F4D881298D08C1D96AD6AA6FA(); // [0x1ebf994] BlueprintEvent       
	// Function /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_FD09E8AA456E65281CC87F8A6C4113AC
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_FD09E8AA456E65281CC87F8A6C4113AC(); // [0x1ebf994] BlueprintEvent       
	// Function /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_DF95C1FE4A2F5813CB01DE80C013E1C6
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_DF95C1FE4A2F5813CB01DE80C013E1C6(); // [0x1ebf994] BlueprintEvent       
	// Function /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_5697EE674F17ADBB80BF75A833AFA309
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_5697EE674F17ADBB80BF75A833AFA309(); // [0x1ebf994] BlueprintEvent       
	// Function /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_3BE669A04B6B559EC4783B8E897AD836
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_GrindRail_Player_LayerAnimBP_AnimGraphNode_TransitionResult_3BE669A04B6B559EC4783B8E897AD836(); // [0x1ebf994] BlueprintEvent       
	// Function /GrindRail/Animation/GrindRail_Player_LayerAnimBP.GrindRail_Player_LayerAnimBP_C.ExecuteUbergraph_GrindRail_Player_LayerAnimBP
	// void ExecuteUbergraph_GrindRail_Player_LayerAnimBP(int32_t EntryPoint);                                                  // [0x1ebf994] Final                
};

/// Struct /Game/Animation/Libraries/GravityOverrideParamsStruct.GravityOverrideParamsStruct
/// Size: 0x07B8 (0x000000 - 0x0007B8)
class FGravityOverrideParamsStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1976;

public:
	SMember(FGravityOverrideSettingStruct)             Skydive_GoingUp_28_C026BDA74BFBABA6672DFE8FFDAAFC1B         OFFSET(getStruct<T>, {0x0, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Skydive_FloatingDown_29_2CBF3D3F421785F8994502931454A81F    OFFSET(getStruct<T>, {0x68, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Skydive_DivingDown_30_EC7BEC4D406A8A98E60D7B9374C5E457      OFFSET(getStruct<T>, {0xD0, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Skydive_Parachuting_31_A88C4A0A407F497561D31287CB20250F     OFFSET(getStruct<T>, {0x138, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             OnGround_Standing_32_267DB1464D0D3A29D99E94ADFCB4AFEC       OFFSET(getStruct<T>, {0x1A0, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             OnGround_Moving_33_807A66B64D7B3B2FCF080B833B8A6254         OFFSET(getStruct<T>, {0x208, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             EmoteOrMelee_34_CFCF66B5492987CBD638EC98EB34D572            OFFSET(getStruct<T>, {0x270, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Swimming_35_33CE87CE4D4F712B1384E29115845962                OFFSET(getStruct<T>, {0x2D8, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Front_End_36_C7A4562A48E9BC9B4CD34D963CFC6490               OFFSET(getStruct<T>, {0x340, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             DBNO_40_83703B55467F014D644D02B56709A2E6                    OFFSET(getStruct<T>, {0x3A8, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             DBNO_Carried_41_2C3D52AF4B7EB85DBA7C108948E58B3A            OFFSET(getStruct<T>, {0x410, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             OnGround_Falling_45_DC16623B41084152717ACBAF5DCE8A91        OFFSET(getStruct<T>, {0x478, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Ziplining_46_0F05199D45821770F22E0B957551FEB7               OFFSET(getStruct<T>, {0x4E0, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Skydive_Surfing_49_5869AA5846BEE7C351769C951D56A34F         OFFSET(getStruct<T>, {0x548, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Riding_Standing_54_C62E341C48CF5BA85ACB799EE3C7653E         OFFSET(getStruct<T>, {0x5B0, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Riding_Moving_55_86CD46C94E5B465A175A6B939DB193BD           OFFSET(getStruct<T>, {0x618, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Riding_Moving_Targeting_58_38650D3547535FB293E61CBCF1B753BF OFFSET(getStruct<T>, {0x680, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Tactical_Sprint_57_7B4700A94AF4B34179554C8EC4EB52E0         OFFSET(getStruct<T>, {0x6E8, 104, 0, 0})
	SMember(FGravityOverrideSettingStruct)             Rail_Grinding_61_97CB95534C5559BAF29FE49C016359FA           OFFSET(getStruct<T>, {0x750, 104, 0, 0})
};

/// Struct /Game/Animation/Libraries/GravityOverrideSettingStruct.GravityOverrideSettingStruct
/// Size: 0x0064 (0x000000 - 0x000064)
class FGravityOverrideSettingStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 100;

public:
	SMember(FVector)                                   WindFrequency_28_9CBE863E417FC965C07809A2FE55ADFD           OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   WindAmplitude_31_6A3DFE4A481AD4D7CB18D79F95CC88E8           OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   WindOffset_32_C5F4D16F48D0BEDC3F0FA38B2648511B              OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   GravityOverride_15_9C3CF2B14934A1AC917C4C99F03AFC6E         OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FName)                                     JointName_27_C74F3B2245EA319DE82A629FF3C17CCA               OFFSET(getStruct<T>, {0x60, 4, 0, 0})
};

/// Struct /Game/Animation/Libraries/WindGustSettingStruct.WindGustSettingStruct
/// Size: 0x0078 (0x000000 - 0x000078)
class FWindGustSettingStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     MinTimeBetweenGusts_25_6CD0864B4078D8378C061197E9B1B094     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxTimeBetweenGusts_28_0D981B4E4039D5A0C6A4C78D6F09D510     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinGustStrength_26_A5C4B017498D3154D76CECAB9AE7BDF2         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxGustStrength_29_DACF320B4C03C6BD248A8E9B7B867FC7         OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MinGustDuration_27_E5761CE84E8E52EEBD663B9DC3A0906F         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxGustDuration_30_98974B1C4B5ABE4EA1CFF7A791319392         OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     WindTurbulenceScalarA_48_A343D5A54D704F5B249C8E907DA80101   OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     WindTurbulenceScalarB_47_E54C28B348B4C35A1D0817AFA9FF0423   OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinUpInterpSpeed_36_8E04A8E94B2040C7DBF93194733AC36A        OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaxUpInterpSpeed_37_5108D5FA40140A1AAD38459100B14261        OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     MinDownInterpSpeed_40_C3AD555846C2AEB9625C4E93B6758BB8      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MaxDownInterpSpeed_41_394B2B66448D9D21249A288C7DEC98F1      OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FVector)                                   WindFrequency_51_9F209DFA4F7AB96CE220578516F0B4CF           OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   WindAmplitude_54_E174BDEC415CE55F6A1475B799695475           OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   WindOffset_55_91DD775940222EE47FDA3BA8695E8FE9              OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};

/// Struct /Game/Animation/Libraries/ClothCoreSettingStruct.ClothCoreSettingStruct
/// Size: 0x0080 (0x000000 - 0x000080)
class FClothCoreSettingStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector2D)                                 EdgeStiffness_28_9A24DA0842E21D5736699499F1DE1171           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector2D)                                 BendingStiffness_29_6CD0864B4078D8378C061197E9B1B094        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector2D)                                 AreaStiffness_30_0D981B4E4039D5A0C6A4C78D6F09D510           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FVector2D)                                 TetherStiffness_24_A5C4B017498D3154D76CECAB9AE7BDF2         OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(float)                                     CollisionThickness_14_DACF320B4C03C6BD248A8E9B7B867FC7      OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     FrictionCoefficient_15_E5761CE84E8E52EEBD663B9DC3A0906F     OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     SelfCollisionThickness_16_98974B1C4B5ABE4EA1CFF7A791319392  OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     DampingCoefficient_17_A343D5A54D704F5B249C8E907DA80101      OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     LocalDampingCoefficient_33_993AFAEA430EEBF424A7D0B8BB57CFB5 OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FVector2D)                                 AnimDriveStiffness_27_E54C28B348B4C35A1D0817AFA9FF0423      OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FVector2D)                                 AnimDriveDamping_26_F9EDBF5240E75A4905AFA1A8240922C8        OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	DMember(int32_t)                                   NumberIterations_21_8E04A8E94B2040C7DBF93194733AC36A        OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   NumberSubsteps_23_5108D5FA40140A1AAD38459100B14261          OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
};

/// Struct /Game/Animation/Libraries/WindGustLocalSettingStruct.WindGustLocalSettingStruct
/// Size: 0x0014 (0x000000 - 0x000014)
class FWindGustLocalSettingStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     ElapsedTime_48_9A24DA0842E21D5736699499F1DE1171             OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TimeBetweenGusts_54_E1D59EA94088FB83508636942434066D        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     GustStrength_55_7788D1D04920E9BC2F96FCBDDCA7C33A            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     GustDuration_56_E42A0C8341E10ACAC2016FA7F726B406            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     FinalGustStrengthLocal_57_BD76FBFF47687A7C38D40EAD653D5618  OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Game/Animation/Libraries/ClothSettingStruct.ClothSettingStruct
/// Size: 0x005C (0x000000 - 0x00005C)
class FClothSettingStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 92;

public:
	SMember(FVector)                                   LinearVelocityScale_7_9CBE863E417FC965C07809A2FE55ADFD      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8     OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B  OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FVector)                                   GravityOverride_15_9C3CF2B14934A1AC917C4C99F03AFC6E         OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector2D)                                 DragCoefficient_23_FE68F666411FF9F29BA84CB4BE726A52         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FVector2D)                                 LiftCoefficient_24_BB285D994A5B3AFF167F4793D7ECA837         OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FName)                                     JointName_27_C74F3B2245EA319DE82A629FF3C17CCA               OFFSET(getStruct<T>, {0x58, 4, 0, 0})
};

/// Struct /Game/Animation/Libraries/RBANSettingStruct.RBANSettingStruct
/// Size: 0x0090 (0x000000 - 0x000090)
class FRBANSettingStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FVector)                                   ComponentLinearAccScale_28_9CBE863E417FC965C07809A2FE55ADFD OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   ComponentLinearVelScale_31_6A3DFE4A481AD4D7CB18D79F95CC88E8 OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FSimSpaceSettings)                         SimSpaceSettings_34_FE68F666411FF9F29BA84CB4BE726A52        OFFSET(getStruct<T>, {0x30, 96, 0, 0})
};

/// Struct /Game/Animation/Libraries/ClothParamsStruct.ClothParamsStruct
/// Size: 0x0780 (0x000000 - 0x000780)
class FClothParamsStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	SMember(FClothSettingStruct)                       Skydive_GoingUp_12_C026BDA74BFBABA6672DFE8FFDAAFC1B         OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FClothSettingStruct)                       Skydive_FloatingDown_10_2CBF3D3F421785F8994502931454A81F    OFFSET(getStruct<T>, {0x60, 96, 0, 0})
	SMember(FClothSettingStruct)                       Skydive_DivingDown_11_EC7BEC4D406A8A98E60D7B9374C5E457      OFFSET(getStruct<T>, {0xC0, 96, 0, 0})
	SMember(FClothSettingStruct)                       Skydive_Parachuting_13_A88C4A0A407F497561D31287CB20250F     OFFSET(getStruct<T>, {0x120, 96, 0, 0})
	SMember(FClothSettingStruct)                       OnGround_Standing_15_267DB1464D0D3A29D99E94ADFCB4AFEC       OFFSET(getStruct<T>, {0x180, 96, 0, 0})
	SMember(FClothSettingStruct)                       OnGround_Moving_16_807A66B64D7B3B2FCF080B833B8A6254         OFFSET(getStruct<T>, {0x1E0, 96, 0, 0})
	SMember(FClothSettingStruct)                       OnGround_Crouch_Moving_27_CE0B8BFB4E3417C0F790F7AE38DD7735  OFFSET(getStruct<T>, {0x240, 96, 0, 0})
	SMember(FClothSettingStruct)                       EmoteOrMelee_25_CFCF66B5492987CBD638EC98EB34D572            OFFSET(getStruct<T>, {0x2A0, 96, 0, 0})
	SMember(FClothSettingStruct)                       Swimming_3_33CE87CE4D4F712B1384E29115845962                 OFFSET(getStruct<T>, {0x300, 96, 0, 0})
	SMember(FClothSettingStruct)                       Front_End_20_C7A4562A48E9BC9B4CD34D963CFC6490               OFFSET(getStruct<T>, {0x360, 96, 0, 0})
	SMember(FClothSettingStruct)                       DBNO_30_2D70D4004D0E9B117F6CE9A09C362B74                    OFFSET(getStruct<T>, {0x3C0, 96, 0, 0})
	SMember(FClothSettingStruct)                       DBNO_Carried_32_99829B99495FCFE3488A9A86B549ECE5            OFFSET(getStruct<T>, {0x420, 96, 0, 0})
	SMember(FClothSettingStruct)                       OnGround_Falling_36_CDAA0F4D476157E4137548BDCE8776F2        OFFSET(getStruct<T>, {0x480, 96, 0, 0})
	SMember(FClothSettingStruct)                       Ziplining_39_BCCDB7E1431A4C174F1040ABC81FD8A8               OFFSET(getStruct<T>, {0x4E0, 96, 0, 0})
	SMember(FClothSettingStruct)                       Skydive_Surfing_42_408E65FF484AA54111E1ED8A69D8240D         OFFSET(getStruct<T>, {0x540, 96, 0, 0})
	SMember(FClothSettingStruct)                       Riding_Standing_46_952A2A43408C37C44E4CBFAE3F3001B0         OFFSET(getStruct<T>, {0x5A0, 96, 0, 0})
	SMember(FClothSettingStruct)                       Riding_Moving_47_EE7A01794460B9753E5076A5A3B3080A           OFFSET(getStruct<T>, {0x600, 96, 0, 0})
	SMember(FClothSettingStruct)                       Riding_Moving_Targeting_52_2F57FD9E477C515D70B3DA9D75453357 OFFSET(getStruct<T>, {0x660, 96, 0, 0})
	SMember(FClothSettingStruct)                       Tactical_Sprint_51_5B2273A1499D34BDEC52E6A8E3F274D4         OFFSET(getStruct<T>, {0x6C0, 96, 0, 0})
	SMember(FClothSettingStruct)                       Rail_Grinding_55_DEEB00A04DB992DF5EEB40BD6518EA4E           OFFSET(getStruct<T>, {0x720, 96, 0, 0})
};

/// Struct /Game/Animation/Libraries/WindGustParamsStruct.WindGustParamsStruct
/// Size: 0x0960 (0x000000 - 0x000960)
class FWindGustParamsStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2400;

public:
	SMember(FWindGustSettingStruct)                    Skydive_GoingUp_28_C026BDA74BFBABA6672DFE8FFDAAFC1B         OFFSET(getStruct<T>, {0x0, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Skydive_FloatingDown_29_2CBF3D3F421785F8994502931454A81F    OFFSET(getStruct<T>, {0x78, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Skydive_DivingDown_30_EC7BEC4D406A8A98E60D7B9374C5E457      OFFSET(getStruct<T>, {0xF0, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Skydive_Parachuting_31_A88C4A0A407F497561D31287CB20250F     OFFSET(getStruct<T>, {0x168, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    OnGround_Standing_32_267DB1464D0D3A29D99E94ADFCB4AFEC       OFFSET(getStruct<T>, {0x1E0, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    OnGround_Moving_33_807A66B64D7B3B2FCF080B833B8A6254         OFFSET(getStruct<T>, {0x258, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    OnGround_Crouch_Moving_34_CE0B8BFB4E3417C0F790F7AE38DD7735  OFFSET(getStruct<T>, {0x2D0, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    EmoteOrMelee_35_CFCF66B5492987CBD638EC98EB34D572            OFFSET(getStruct<T>, {0x348, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Swimming_36_33CE87CE4D4F712B1384E29115845962                OFFSET(getStruct<T>, {0x3C0, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Front_End_37_C7A4562A48E9BC9B4CD34D963CFC6490               OFFSET(getStruct<T>, {0x438, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    DBNO_41_0C046BF1406AB4B752DB3A99949FE3A3                    OFFSET(getStruct<T>, {0x4B0, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    DBNO_Carried_42_3E9FADC247359FEE88C7B4A3453449E6            OFFSET(getStruct<T>, {0x528, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    OnGround_Falling_46_2CC5CD2149D12B7C53D91E8D6AA90C03        OFFSET(getStruct<T>, {0x5A0, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Ziplining_47_B8BBEA804F8C515EA80FE7897BB99CF6               OFFSET(getStruct<T>, {0x618, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Skydive_Surfing_50_2B64886E4E6F0E8CFC180E81FDF37F62         OFFSET(getStruct<T>, {0x690, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Riding_Standing_55_206A781845EAC0A66D2BBC8981041DBD         OFFSET(getStruct<T>, {0x708, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Riding_Moving_56_963FD3424B0D070C81120599A5AED02A           OFFSET(getStruct<T>, {0x780, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Riding_Moving_Targeting_59_93868B48485365007E3BD8BD8A527B39 OFFSET(getStruct<T>, {0x7F8, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Tactical_Sprint_58_7E4BD4244308EE1199AA48ACF8871E68         OFFSET(getStruct<T>, {0x870, 120, 0, 0})
	SMember(FWindGustSettingStruct)                    Rail_Grinding_62_FF88FD5F4A9AB308E2F095B9F0657D82           OFFSET(getStruct<T>, {0x8E8, 120, 0, 0})
};

/// Struct /Game/Animation/Libraries/RBANParamsStruct.RBANParamsStruct
/// Size: 0x0B40 (0x000000 - 0x000B40)
class FRBANParamsStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2880;

public:
	SMember(FRBANSettingStruct)                        Skydive_GoingUp_56_C026BDA74BFBABA6672DFE8FFDAAFC1B         OFFSET(getStruct<T>, {0x0, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Skydive_FloatingDown_57_2CBF3D3F421785F8994502931454A81F    OFFSET(getStruct<T>, {0x90, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Skydive_DivingDown_58_EC7BEC4D406A8A98E60D7B9374C5E457      OFFSET(getStruct<T>, {0x120, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Skydive_Parachuting_60_A88C4A0A407F497561D31287CB20250F     OFFSET(getStruct<T>, {0x1B0, 144, 0, 0})
	SMember(FRBANSettingStruct)                        OnGround_Standing_59_267DB1464D0D3A29D99E94ADFCB4AFEC       OFFSET(getStruct<T>, {0x240, 144, 0, 0})
	SMember(FRBANSettingStruct)                        OnGround_Moving_65_807A66B64D7B3B2FCF080B833B8A6254         OFFSET(getStruct<T>, {0x2D0, 144, 0, 0})
	SMember(FRBANSettingStruct)                        OnGround_Crouch_Moving_61_CE0B8BFB4E3417C0F790F7AE38DD7735  OFFSET(getStruct<T>, {0x360, 144, 0, 0})
	SMember(FRBANSettingStruct)                        EmoteOrMelee_62_CFCF66B5492987CBD638EC98EB34D572            OFFSET(getStruct<T>, {0x3F0, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Swimming_64_33CE87CE4D4F712B1384E29115845962                OFFSET(getStruct<T>, {0x480, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Front_End_63_C7A4562A48E9BC9B4CD34D963CFC6490               OFFSET(getStruct<T>, {0x510, 144, 0, 0})
	SMember(FRBANSettingStruct)                        DBNO_68_2D70D4004D0E9B117F6CE9A09C362B74                    OFFSET(getStruct<T>, {0x5A0, 144, 0, 0})
	SMember(FRBANSettingStruct)                        DBNO_Carried_67_99829B99495FCFE3488A9A86B549ECE5            OFFSET(getStruct<T>, {0x630, 144, 0, 0})
	SMember(FRBANSettingStruct)                        OnGround_Falling_66_CDAA0F4D476157E4137548BDCE8776F2        OFFSET(getStruct<T>, {0x6C0, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Ziplining_75_BCCDB7E1431A4C174F1040ABC81FD8A8               OFFSET(getStruct<T>, {0x750, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Skydive_Surfing_74_408E65FF484AA54111E1ED8A69D8240D         OFFSET(getStruct<T>, {0x7E0, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Riding_Standing_69_952A2A43408C37C44E4CBFAE3F3001B0         OFFSET(getStruct<T>, {0x870, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Riding_Moving_72_EE7A01794460B9753E5076A5A3B3080A           OFFSET(getStruct<T>, {0x900, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Riding_Moving_Targeting_73_2F57FD9E477C515D70B3DA9D75453357 OFFSET(getStruct<T>, {0x990, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Tactical_Sprint_70_5B2273A1499D34BDEC52E6A8E3F274D4         OFFSET(getStruct<T>, {0xA20, 144, 0, 0})
	SMember(FRBANSettingStruct)                        Rail_Grinding_71_DEEB00A04DB992DF5EEB40BD6518EA4E           OFFSET(getStruct<T>, {0xAB0, 144, 0, 0})
};

