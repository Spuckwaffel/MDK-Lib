
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_HideBodyOnDeath.AnimNotify_HideBodyOnDeath_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_HideBodyOnDeath_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_HideBodyOnDeath.AnimNotify_HideBodyOnDeath_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FlingerDeathMaterials_Off.AnimNotify_FlingerDeathMaterials_Off_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_FlingerDeathMaterials_Off_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FlingerDeathMaterials_Off.AnimNotify_FlingerDeathMaterials_Off_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FlingerDeathFX_On.AnimNotify_FlingerDeathFX_On_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_FlingerDeathFX_On_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FlingerDeathFX_On.AnimNotify_FlingerDeathFX_On_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FlingerDeathFX_Off.AnimNotify_FlingerDeathFX_Off_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_FlingerDeathFX_Off_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FlingerDeathFX_Off.AnimNotify_FlingerDeathFX_Off_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C
/// Size: 0x22E8 (0x000410 - 0x0026F8)
class USmasherVimBlueprint_C : public UFortAIAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 9976;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x410, 8, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_FBAC1AEB479405046F3E4AB17CDECB34 OFFSET(getStruct<T>, {0x420, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_36707A12499C230B89B08282F69A2E71 OFFSET(getStruct<T>, {0x4A0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_D06D743D425B7D3C8406EFBD08A68E63 OFFSET(getStruct<T>, {0x520, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_57C1753D42DBAD4187C85AAE4603F95B OFFSET(getStruct<T>, {0x5A0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_2C0EA83E4DB1BC60C7AC4B90DFE6D5B6 OFFSET(getStruct<T>, {0x620, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_854F7DBB41A386B898E3D9B5031F823F OFFSET(getStruct<T>, {0x6A0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_9CEC73804ACDA2E1261690879C9C187C OFFSET(getStruct<T>, {0x720, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_6FC4F6E34980671B8CA4B4B2CD6FD910 OFFSET(getStruct<T>, {0x7A0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_B689746C43A09BADCA561E824233D6DB OFFSET(getStruct<T>, {0x820, 128, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_564BC95D4976A04334CA6396B63076C9 OFFSET(getStruct<T>, {0x8A0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_43B115994B9593AA0CA46F8CE8D234A4  OFFSET(getStruct<T>, {0x950, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_888AB38A4E443EF568F16BBB7062FC5A OFFSET(getStruct<T>, {0x998, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_39EEE9BB454180F0E2D6C3B5CD1E70F1  OFFSET(getStruct<T>, {0xA48, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_2F62B99A4BAA1EF83667A18D506D29F8  OFFSET(getStruct<T>, {0xA90, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_FCE49AD64EB4DF949728BFA35B4E5EE3 OFFSET(getStruct<T>, {0xAD8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_52BFE79F437D30059F178C9E15A5C4CC  OFFSET(getStruct<T>, {0xB88, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_99C31F56427E8F457E63C2AF44A426B1  OFFSET(getStruct<T>, {0xBD0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_FE4195FC43F5F9BCAAF69885D08B8652 OFFSET(getStruct<T>, {0xC18, 176, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine_745C2C5440AF055F81539AB5B7188E58 OFFSET(getStruct<T>, {0xCC8, 224, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_55B330D54A9EB1F611FA37934D427BCA OFFSET(getStruct<T>, {0xDA8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_13FCB8264963D347E5912E86DC90A470  OFFSET(getStruct<T>, {0xE58, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer_7A978E3A445354F73A1E51A3CCB88471 OFFSET(getStruct<T>, {0xEA0, 296, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_C87CEEF34F96245643EBF2BE420575E1  OFFSET(getStruct<T>, {0xFC8, 72, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine_FE11925047A7523852B87280347D5FD0 OFFSET(getStruct<T>, {0x1010, 224, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_9587DA7E45E2B3F31B460E8B58F6B403         OFFSET(getStruct<T>, {0x10F0, 112, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_D2C6F6F94C255FCE32E7B0861950FE5F         OFFSET(getStruct<T>, {0x1160, 72, 0, 0})
	SMember(FAnimNode_TwoBoneIK)                       AnimGraphNode_TwoBoneIK_48047F004CB41222F5B4388F9DCC593F    OFFSET(getStruct<T>, {0x11B0, 624, 0, 0})
	SMember(FAnimNode_TwoBoneIK)                       AnimGraphNode_TwoBoneIK_B813041441B0CFB17DFBB4A757025061    OFFSET(getStruct<T>, {0x1420, 624, 0, 0})
	SMember(FAnimNode_TwoBoneIK)                       AnimGraphNode_TwoBoneIK_C820F2EB423F7CC747F140B43E22DD3E    OFFSET(getStruct<T>, {0x1690, 624, 0, 0})
	SMember(FAnimNode_TwoBoneIK)                       AnimGraphNode_TwoBoneIK_2CDDA8BE415F026814E029BBE0EF5B83    OFFSET(getStruct<T>, {0x1900, 624, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace_C1D86F134D5174CDF7CFE281E4BE1882 OFFSET(getStruct<T>, {0x1B70, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_4355AED64A7A2B7EDEDCFA9763CB0B7B OFFSET(getStruct<T>, {0x1BB8, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_811A1186477A26E7364FC39749563CCF         OFFSET(getStruct<T>, {0x1C00, 112, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose_6541859B4F3F177972FEC79707830329 OFFSET(getStruct<T>, {0x1C70, 224, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose_24F4699C428EF73E5EB86584CBF00FC3 OFFSET(getStruct<T>, {0x1D50, 80, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend_314C61944499EBE5A40767A25D1A0DC3  OFFSET(getStruct<T>, {0x1DA0, 288, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose_FD1871E2448FCC5998774E8206444D18 OFFSET(getStruct<T>, {0x1EC0, 80, 0, 0})
	SMember(FAnimNode_SubInstance)                     AnimGraphNode_SubInstance_A10779BC4890311C376A58878C655281  OFFSET(getStruct<T>, {0x1F10, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose_F61AFB1741EEE8E404EFB7A121F8D2E7 OFFSET(getStruct<T>, {0x1FD8, 224, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend_44CA33F44D1BFA86AD3745BC5E17198B OFFSET(getStruct<T>, {0x20B8, 224, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose_61AB20214AFA59094F1ECBBC9788DE75 OFFSET(getStruct<T>, {0x2198, 80, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_659DB89649A23682279A8999ACF6EA45         OFFSET(getStruct<T>, {0x21E8, 112, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose_2DCFF1834E04B60148E4A2BC78812DFE OFFSET(getStruct<T>, {0x2258, 80, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace_ABD899E4436A06324E298FBF07E6E243 OFFSET(getStruct<T>, {0x22A8, 512, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose_87421D7242560831341F28888ADD8173 OFFSET(getStruct<T>, {0x24A8, 224, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose_5E472A5745CC8120724032898728ACA4 OFFSET(getStruct<T>, {0x2588, 80, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose_2FF18F9B4CC62155607B06805B323120 OFFSET(getStruct<T>, {0x25D8, 80, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool_94E77D9E46EF25EEFD76A89B797C291C OFFSET(getStruct<T>, {0x2628, 208, 0, 0})


	/// Functions
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_D06D743D425B7D3C8406EFBD08A68E63
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_D06D743D425B7D3C8406EFBD08A68E63(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_57C1753D42DBAD4187C85AAE4603F95B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_57C1753D42DBAD4187C85AAE4603F95B(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_36707A12499C230B89B08282F69A2E71
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_36707A12499C230B89B08282F69A2E71(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_2C0EA83E4DB1BC60C7AC4B90DFE6D5B6
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_2C0EA83E4DB1BC60C7AC4B90DFE6D5B6(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_854F7DBB41A386B898E3D9B5031F823F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_854F7DBB41A386B898E3D9B5031F823F(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_9CEC73804ACDA2E1261690879C9C187C
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_9CEC73804ACDA2E1261690879C9C187C(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_6FC4F6E34980671B8CA4B4B2CD6FD910
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_6FC4F6E34980671B8CA4B4B2CD6FD910(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_B689746C43A09BADCA561E824233D6DB
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_B689746C43A09BADCA561E824233D6DB(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_FBAC1AEB479405046F3E4AB17CDECB34
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_FBAC1AEB479405046F3E4AB17CDECB34(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_SequencePlayer_55B330D54A9EB1F611FA37934D427BCA
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_SequencePlayer_55B330D54A9EB1F611FA37934D427BCA(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_BlendSpacePlayer_7A978E3A445354F73A1E51A3CCB88471
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_BlendSpacePlayer_7A978E3A445354F73A1E51A3CCB88471(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_LayeredBoneBlend_44CA33F44D1BFA86AD3745BC5E17198B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_LayeredBoneBlend_44CA33F44D1BFA86AD3745BC5E17198B(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_ABD899E4436A06324E298FBF07E6E243
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_ABD899E4436A06324E298FBF07E6E243(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_BlendListByBool_94E77D9E46EF25EEFD76A89B797C291C
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_BlendListByBool_94E77D9E46EF25EEFD76A89B797C291C(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.AnimNotify_SleepingFullyBlended
	// void AnimNotify_SleepingFullyBlended();                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Game/Enemies/Smasher/SmasherVimBlueprint.SmasherVimBlueprint_C.ExecuteUbergraph_SmasherVimBlueprint
	// void ExecuteUbergraph_SmasherVimBlueprint(int32_t EntryPoint);                                                           // [0x154a140] None                 
};

/// Class /Game/Animation/Game/BP_AnimNotifyState_CameraAnim.BP_AnimNotifyState_CameraAnim_C
/// Size: 0x0020 (0x000030 - 0x000050)
class UBP_AnimNotifyState_CameraAnim_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     BlendInTime                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x3C, 1, 0, 0})
	CMember(TEnumAsByte<ECameraAnimPlaySpace>)         Shake_Space                                                 OFFSET(get<T>, {0x3D, 1, 0, 0})
	DMember(float)                                     Shake_Scale                                                 OFFSET(get<float>, {0x40, 4, 0, 0})
	CMember(UCameraAnim*)                              CameraAnim                                                  OFFSET(get<T>, {0x48, 8, 0, 0})


	/// Functions
	// Function /Game/Animation/Game/BP_AnimNotifyState_CameraAnim.BP_AnimNotifyState_CameraAnim_C.Received_NotifyEnd
	// bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                 // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/Game/BP_AnimNotifyState_CameraAnim.BP_AnimNotifyState_CameraAnim_C.Received_NotifyBegin
	// bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);          // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_ForceHuskMontageFullBody.AnimNotifyState_ForceHuskMontageFullBody_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_ForceHuskMontageFullBody_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_ForceHuskMontageFullBody.AnimNotifyState_ForceHuskMontageFullBody_C.Received_NotifyEnd
	// bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                 // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_ForceHuskMontageFullBody.AnimNotifyState_ForceHuskMontageFullBody_C.Received_NotifyBegin
	// bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);          // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_MimicTrailOn.AnimNotify_MimicTrailOn_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_MimicTrailOn_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_MimicTrailOn.AnimNotify_MimicTrailOn_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_MimicTrailOff.AnimNotify_MimicTrailOff_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_MimicTrailOff_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_MimicTrailOff.AnimNotify_MimicTrailOff_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_AllowKnockback.AnimNotify_AllowKnockback_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_AllowKnockback_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_AllowKnockback.AnimNotify_AllowKnockback_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_EnemyDeathFX_On.AnimNotify_EnemyDeathFX_On_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_EnemyDeathFX_On_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_EnemyDeathFX_On.AnimNotify_EnemyDeathFX_On_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_EnemyDeathFX_Off.AnimNotify_EnemyDeathFX_Off_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_EnemyDeathFX_Off_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_EnemyDeathFX_Off.AnimNotify_EnemyDeathFX_Off_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C
/// Size: 0x2C61 (0x000450 - 0x0030B1)
class UHusk_V2_Skeleton_AnimBP_C : public UFortHuskAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 12465;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x450, 8, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose_CE090E354EB61760D79F62953755D48B OFFSET(getStruct<T>, {0x458, 80, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_4262A82C494C864EB2783181565B1F95         OFFSET(getStruct<T>, {0x4A8, 112, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose_201546E14BB12870CD46DEB250F8B5F5 OFFSET(getStruct<T>, {0x518, 80, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose_8CF796A84E97B8DF6CF0FA9BEC0A8FEA OFFSET(getStruct<T>, {0x568, 224, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend_CC90BF5D4485EFDC63F006AB266EF7B1 OFFSET(getStruct<T>, {0x648, 224, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_9C10D5024694DE038D18DF9A1E2ED16C OFFSET(getStruct<T>, {0x730, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_0761E3E2446FBE8BA8C70182C4A35DC4 OFFSET(getStruct<T>, {0x7B0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_9EA1B562402B71A1A343FC9CBE33E524 OFFSET(getStruct<T>, {0x830, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_68E2A6A24AF42DF156FC058BEDF08205 OFFSET(getStruct<T>, {0x8B0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_3519F49C4E381BBD00035481AA888E01 OFFSET(getStruct<T>, {0x930, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_FE855055439F65E90F5DBC83DF9B5FAE OFFSET(getStruct<T>, {0x9B0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_46B780A24C65642605CE6C90EC7E5FBD OFFSET(getStruct<T>, {0xA30, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_B8D4B871406AB17AE19CD6A71858050D OFFSET(getStruct<T>, {0xAB0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_04AE961145429F2A6516B5AFED7A1199 OFFSET(getStruct<T>, {0xB30, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_18F96FA14A02CD829B1BD2BB319893A3 OFFSET(getStruct<T>, {0xBB0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_92D1462E43608D5A772EE8977188B28C OFFSET(getStruct<T>, {0xC30, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_B3B42E5F483C92E55E5B5AB2EEF928CB OFFSET(getStruct<T>, {0xCB0, 128, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_07853C194127B6B9ABA25EB0CE8FC913 OFFSET(getStruct<T>, {0xD30, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_2B5D61D94A998DAF661E3AA5F111D3DF  OFFSET(getStruct<T>, {0xDE0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_F2466C2945F75171ADD34DBC8512C178 OFFSET(getStruct<T>, {0xE28, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_52441323478ECFAD9002D3981B66DB69  OFFSET(getStruct<T>, {0xED8, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer_CEBDB7714BDD47EE51EC628B95F88CC6 OFFSET(getStruct<T>, {0xF20, 296, 0, 0})
	SMember(FAnimNode_BlendListByInt)                  AnimGraphNode_BlendListByInt_AA78A5724647E4158FF5F4BB3DAE6AE9 OFFSET(getStruct<T>, {0x1048, 208, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool_34B158C94B4C0A758A1ECB9543B1E89D OFFSET(getStruct<T>, {0x1118, 208, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpace_61D09BDE4910BB779CE507B34C77D77F   OFFSET(getStruct<T>, {0x11E8, 296, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpace_D51EEE3C40EF00C40880ED99E7B4CB82   OFFSET(getStruct<T>, {0x1310, 296, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpace_3B21D0F74A571B7E44D77182E3664CD6   OFFSET(getStruct<T>, {0x1438, 296, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpace_EB9668CE4E63A6AEAC0D118192166A87   OFFSET(getStruct<T>, {0x1560, 296, 0, 0})
	SMember(FAnimNode_BlendListByInt)                  AnimGraphNode_BlendListByInt_4D3EF8E6479C8F9899D8B0A0E462CD2D OFFSET(getStruct<T>, {0x1688, 208, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool_475422DD46F8DF502DF471AE74362963 OFFSET(getStruct<T>, {0x1758, 208, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer_1572F9DA490001FD6004CDB0DF3D781A OFFSET(getStruct<T>, {0x1828, 296, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer_AF887C0F4724BAE182A49FB7D4A582E4 OFFSET(getStruct<T>, {0x1950, 296, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer_D80717DD435257C906A758BA71A50B59 OFFSET(getStruct<T>, {0x1A78, 296, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer_59353A2F4400DE28791A0A81BB3EE600 OFFSET(getStruct<T>, {0x1BA0, 296, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer_9F755C6847C47BF3424FFC93A343B970 OFFSET(getStruct<T>, {0x1CC8, 296, 0, 0})
	SMember(FAnimNode_BlendListByInt)                  AnimGraphNode_BlendListByInt_3A6B017A48D75B51843A31903180A183 OFFSET(getStruct<T>, {0x1DF0, 208, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer_200821C74709E63BAF313582BF695B3B OFFSET(getStruct<T>, {0x1EC0, 296, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer_7E75A143410F22AF256540B459D2B601 OFFSET(getStruct<T>, {0x1FE8, 296, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_F0E099ED4017D74017D962B11C61B5E7  OFFSET(getStruct<T>, {0x2110, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_DD1C02754A07A803179F1786A417BC73  OFFSET(getStruct<T>, {0x2158, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_122B753F43EC33EA4C995CABEA83C870 OFFSET(getStruct<T>, {0x21A0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_11E2EC1247C028C995A4A9BE1A3AA225  OFFSET(getStruct<T>, {0x2250, 72, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator_39F837DF4559E7B78618509212FA101A OFFSET(getStruct<T>, {0x2298, 112, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_E0AAFD514546039873FDE1B2BC5973A4  OFFSET(getStruct<T>, {0x2308, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_6A66E89B412EC4DCEA3B28BE0FB8CB21 OFFSET(getStruct<T>, {0x2350, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_8AC800314C69C5BD9936DDBEF6F3969C OFFSET(getStruct<T>, {0x2400, 176, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool_5556979540657B0296A90EA8BAD15B6F OFFSET(getStruct<T>, {0x24B0, 208, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_DE200ADD4A630F30F23969BE517276BD  OFFSET(getStruct<T>, {0x2580, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_1E2D082A46CD2A209782FEA2AD93AF35 OFFSET(getStruct<T>, {0x25C8, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_13C28DE240F88A86CE0491B6966B00AB OFFSET(getStruct<T>, {0x2678, 176, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool_3DA2FC3048234652B4FAFDBE463B38CE OFFSET(getStruct<T>, {0x2728, 208, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_02564C8C4230BED3F452CABC83461CB9 OFFSET(getStruct<T>, {0x27F8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_9E52933D47EAE3A3023E249E12656754  OFFSET(getStruct<T>, {0x28A8, 72, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine_76F42A8841D435051B3D67AF7338EAB8 OFFSET(getStruct<T>, {0x28F0, 224, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_48C2482447E3BB71BB32CC9176C9C127         OFFSET(getStruct<T>, {0x29D0, 112, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_2056727A4CA6CAC00898479B970FEF11         OFFSET(getStruct<T>, {0x2A40, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_E0569F414F3F089D3F91ED8FA17208DF         OFFSET(getStruct<T>, {0x2A88, 112, 0, 0})
	SMember(FFortAnimNode_ScaleHuskBones)              FortAnimGraphNode_ScaleHuskBones_C98C005645E0445DEC600E8072A81B12 OFFSET(getStruct<T>, {0x2AF8, 480, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK_D6D702774E1F4455BAF2A7A5B736D129        OFFSET(getStruct<T>, {0x2CD8, 328, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace_8736A3B946229ADBF7304781565DC4EA OFFSET(getStruct<T>, {0x2E20, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_01EB402E47EB33C78EF0E185C084E959 OFFSET(getStruct<T>, {0x2E68, 72, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace_61C61714470FAED4B69625AF00614E3B OFFSET(getStruct<T>, {0x2EB0, 512, 0, 0})
	DMember(bool)                                      ShouldDisableWalking                                        OFFSET(get<bool>, {0x30B0, 1, 0, 0})


	/// Functions
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByInt_AA78A5724647E4158FF5F4BB3DAE6AE9
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByInt_AA78A5724647E4158FF5F4BB3DAE6AE9(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_34B158C94B4C0A758A1ECB9543B1E89D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_34B158C94B4C0A758A1ECB9543B1E89D(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_61D09BDE4910BB779CE507B34C77D77F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_61D09BDE4910BB779CE507B34C77D77F(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_D51EEE3C40EF00C40880ED99E7B4CB82
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_D51EEE3C40EF00C40880ED99E7B4CB82(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_3B21D0F74A571B7E44D77182E3664CD6
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_3B21D0F74A571B7E44D77182E3664CD6(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_EB9668CE4E63A6AEAC0D118192166A87
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_EB9668CE4E63A6AEAC0D118192166A87(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByInt_4D3EF8E6479C8F9899D8B0A0E462CD2D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByInt_4D3EF8E6479C8F9899D8B0A0E462CD2D(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_475422DD46F8DF502DF471AE74362963
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_475422DD46F8DF502DF471AE74362963(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_1572F9DA490001FD6004CDB0DF3D781A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_1572F9DA490001FD6004CDB0DF3D781A(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_AF887C0F4724BAE182A49FB7D4A582E4
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_AF887C0F4724BAE182A49FB7D4A582E4(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_D80717DD435257C906A758BA71A50B59
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_D80717DD435257C906A758BA71A50B59(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_59353A2F4400DE28791A0A81BB3EE600
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_59353A2F4400DE28791A0A81BB3EE600(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_9F755C6847C47BF3424FFC93A343B970
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_9F755C6847C47BF3424FFC93A343B970(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByInt_3A6B017A48D75B51843A31903180A183
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByInt_3A6B017A48D75B51843A31903180A183(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_200821C74709E63BAF313582BF695B3B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_200821C74709E63BAF313582BF695B3B(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_7E75A143410F22AF256540B459D2B601
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_7E75A143410F22AF256540B459D2B601(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_B3B42E5F483C92E55E5B5AB2EEF928CB
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_B3B42E5F483C92E55E5B5AB2EEF928CB(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_92D1462E43608D5A772EE8977188B28C
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_92D1462E43608D5A772EE8977188B28C(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_CEBDB7714BDD47EE51EC628B95F88CC6
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_CEBDB7714BDD47EE51EC628B95F88CC6(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_18F96FA14A02CD829B1BD2BB319893A3
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_18F96FA14A02CD829B1BD2BB319893A3(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_04AE961145429F2A6516B5AFED7A1199
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_04AE961145429F2A6516B5AFED7A1199(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_B8D4B871406AB17AE19CD6A71858050D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_B8D4B871406AB17AE19CD6A71858050D(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_46B780A24C65642605CE6C90EC7E5FBD
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_46B780A24C65642605CE6C90EC7E5FBD(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_FE855055439F65E90F5DBC83DF9B5FAE
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_FE855055439F65E90F5DBC83DF9B5FAE(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_3519F49C4E381BBD00035481AA888E01
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_3519F49C4E381BBD00035481AA888E01(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_5556979540657B0296A90EA8BAD15B6F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_5556979540657B0296A90EA8BAD15B6F(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_68E2A6A24AF42DF156FC058BEDF08205
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_68E2A6A24AF42DF156FC058BEDF08205(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_3DA2FC3048234652B4FAFDBE463B38CE
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_3DA2FC3048234652B4FAFDBE463B38CE(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_9EA1B562402B71A1A343FC9CBE33E524
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_9EA1B562402B71A1A343FC9CBE33E524(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_61C61714470FAED4B69625AF00614E3B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_61C61714470FAED4B69625AF00614E3B(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_0761E3E2446FBE8BA8C70182C4A35DC4
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_0761E3E2446FBE8BA8C70182C4A35DC4(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_9C10D5024694DE038D18DF9A1E2ED16C
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_9C10D5024694DE038D18DF9A1E2ED16C(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_LayeredBoneBlend_CC90BF5D4485EFDC63F006AB266EF7B1
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_LayeredBoneBlend_CC90BF5D4485EFDC63F006AB266EF7B1(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/HuskV2/Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C.ExecuteUbergraph_Husk_V2_Skeleton_AnimBP
	// void ExecuteUbergraph_Husk_V2_Skeleton_AnimBP(int32_t EntryPoint);                                                       // [0x154a140] None                 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_TakerDeathMaterials_Off.AnimNotify_TakerDeathMaterials_Off_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_TakerDeathMaterials_Off_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_TakerDeathMaterials_Off.AnimNotify_TakerDeathMaterials_Off_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_TakerDeathFX_On.AnimNotify_TakerDeathFX_On_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_TakerDeathFX_On_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_TakerDeathFX_On.AnimNotify_TakerDeathFX_On_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_TakerDeathFX_Off.AnimNotify_TakerDeathFX_Off_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_TakerDeathFX_Off_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_TakerDeathFX_Off.AnimNotify_TakerDeathFX_Off_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C
/// Size: 0x1BE0 (0x000410 - 0x001FF0)
class UTaker_AnimBP_C : public UFortAIAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8176;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x410, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_082798314030DE3ADC83F8BFBDF82566         OFFSET(getStruct<T>, {0x418, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_AB1968FA485DED492784FBAA44D0A1E2 OFFSET(getStruct<T>, {0x460, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_1C22CB6042C4ACE738B397BF0A769E69 OFFSET(getStruct<T>, {0x4E0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_E8E5FB4F42C60B65BE04B4ADB41DDCC0 OFFSET(getStruct<T>, {0x560, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_83B2C1F64258D21959A8A7AB6E6D2EE3 OFFSET(getStruct<T>, {0x5E0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_37AD8F234C1F6676446A4B87E5A69EDC OFFSET(getStruct<T>, {0x660, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_3F394D2148E0AA26A12918A2BF8D3A6C OFFSET(getStruct<T>, {0x6E0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_7534B51C474595A7E43B13ABBFD64C92 OFFSET(getStruct<T>, {0x760, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_62138F6D41FD47E4B091A987F65B9FFF OFFSET(getStruct<T>, {0x7E0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_CA5FAB9A443DFAA3403AC5A4DC6E9AF5 OFFSET(getStruct<T>, {0x860, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_84F4C05B4EB44B368F15C2A7CB263C01 OFFSET(getStruct<T>, {0x8E0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_C24F0C5C45985D1DE37BD987E65DB2FB OFFSET(getStruct<T>, {0x960, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_71F1304C4202A3C228F7C5ACF578B960 OFFSET(getStruct<T>, {0x9E0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_9DA1AC5749F1BCF282CFF09CF9C15E1E OFFSET(getStruct<T>, {0xA60, 128, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_B1307EAF4B36A5ECA8F203A314EBA756 OFFSET(getStruct<T>, {0xAE0, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_E8835F914BDA37D92D2C2A9BD0CC7E51  OFFSET(getStruct<T>, {0xB90, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_526956A3469075583B291ABCDCFD61B7 OFFSET(getStruct<T>, {0xBD8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_BD8B6C7C4A7A1F57D0CF2A83E4E52094  OFFSET(getStruct<T>, {0xC88, 72, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine_5DD183DA454A3FA648D37583DB2732C2 OFFSET(getStruct<T>, {0xCD0, 224, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_8BFDA56D4310FC7E7ADAB7A1195A5CF1  OFFSET(getStruct<T>, {0xDB0, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_7CE326E146B92C62F0FFBB9C65813961 OFFSET(getStruct<T>, {0xE00, 128, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_3F6C1EB740A658BB0382CC8C4D532AD1 OFFSET(getStruct<T>, {0xE80, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_DC0DC0FE4E16B286590B3E9DA9EDE26E  OFFSET(getStruct<T>, {0xF30, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer_0401C841468F6FA1CDD2EBB5211879F4 OFFSET(getStruct<T>, {0xF78, 296, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_F1834F2345A439F8DDA126ABA8E0E159  OFFSET(getStruct<T>, {0x10A0, 72, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine_3097796A41537D2807A93B81C8DB4147 OFFSET(getStruct<T>, {0x10E8, 224, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_B5D00C784578EBBBAB905989F4A3D341  OFFSET(getStruct<T>, {0x11C8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_20D5258546E9A712D1D173ABFE336D7F OFFSET(getStruct<T>, {0x1210, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_666A8E33485554E59E5684BF79196F43  OFFSET(getStruct<T>, {0x12C0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_0ED6257F493C4D50F519E6BB08CA6207 OFFSET(getStruct<T>, {0x1308, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_D45ACEF64909D7A0E0CE649049D74A9A  OFFSET(getStruct<T>, {0x13B8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_A3DE956D488498157ECE789164689FF6 OFFSET(getStruct<T>, {0x1400, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_4EC4851747233F066D31B0A1318773CF  OFFSET(getStruct<T>, {0x14B0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_B77264B64435B158CF01B5BAB9B72A42 OFFSET(getStruct<T>, {0x14F8, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_48BB50D44D4EB95F9C86D38AD61C2E06  OFFSET(getStruct<T>, {0x15A8, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_76EB73E24CF8B38E78B3ED83A37BA680 OFFSET(getStruct<T>, {0x15F0, 128, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_ACB6E68E4CD8809D8DFB92994CC36196 OFFSET(getStruct<T>, {0x1670, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_5BE1FFE44FBAB0545D733694570344B5  OFFSET(getStruct<T>, {0x1720, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_26E7129B45354DD811C95CAE5A809F1F OFFSET(getStruct<T>, {0x1768, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_A7AEE29E449BCCB9E25CABB38BE7762D  OFFSET(getStruct<T>, {0x1818, 72, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine_50BA35874D153B66A2EC479ABE631B0D OFFSET(getStruct<T>, {0x1860, 224, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_05CE871642AE940A56A25A83CA243DAB  OFFSET(getStruct<T>, {0x1940, 72, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine_642E163D4DB3B3CFEAEF7AA4C89D7816 OFFSET(getStruct<T>, {0x1988, 224, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_5F3E6AB94EDE21007A90139A6BABE189         OFFSET(getStruct<T>, {0x1A68, 112, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose_0A672CDA44838D47B63F9783E1696F29 OFFSET(getStruct<T>, {0x1AD8, 224, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose_4B1A1B9245586915A0D0179B03D0B0B1 OFFSET(getStruct<T>, {0x1BB8, 80, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend_8BE7B37A49E801AE1CE909B6D4C11439  OFFSET(getStruct<T>, {0x1C08, 288, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose_50D8A462467A44F737828F81AC7D8A60 OFFSET(getStruct<T>, {0x1D28, 80, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_836E043E49B8521592D08DAFE14101DB         OFFSET(getStruct<T>, {0x1D78, 112, 0, 0})
	SMember(FAnimNode_RotationOffsetBlendSpace)        AnimGraphNode_RotationOffsetBlendSpace_313C0D2048DAF29EED46DFA9B7939785 OFFSET(getStruct<T>, {0x1DE8, 512, 0, 0})
	DMember(float)                                     LookAtAlpha                                                 OFFSET(get<float>, {0x1FE8, 4, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x1FEC, 4, 0, 0})


	/// Functions
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.IsRunningFunc
	// void IsRunningFunc(bool& IsRunning);                                                                                     // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.IsSprintingFunc
	// void IsSprintingFunc(bool& IsSprinting);                                                                                 // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_E8E5FB4F42C60B65BE04B4ADB41DDCC0
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_E8E5FB4F42C60B65BE04B4ADB41DDCC0(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_83B2C1F64258D21959A8A7AB6E6D2EE3
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_83B2C1F64258D21959A8A7AB6E6D2EE3(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_37AD8F234C1F6676446A4B87E5A69EDC
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_37AD8F234C1F6676446A4B87E5A69EDC(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_3F394D2148E0AA26A12918A2BF8D3A6C
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_3F394D2148E0AA26A12918A2BF8D3A6C(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_7534B51C474595A7E43B13ABBFD64C92
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_7534B51C474595A7E43B13ABBFD64C92(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_62138F6D41FD47E4B091A987F65B9FFF
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_62138F6D41FD47E4B091A987F65B9FFF(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_CA5FAB9A443DFAA3403AC5A4DC6E9AF5
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_CA5FAB9A443DFAA3403AC5A4DC6E9AF5(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_AB1968FA485DED492784FBAA44D0A1E2
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_AB1968FA485DED492784FBAA44D0A1E2(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_84F4C05B4EB44B368F15C2A7CB263C01
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_84F4C05B4EB44B368F15C2A7CB263C01(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_C24F0C5C45985D1DE37BD987E65DB2FB
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_C24F0C5C45985D1DE37BD987E65DB2FB(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_71F1304C4202A3C228F7C5ACF578B960
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_71F1304C4202A3C228F7C5ACF578B960(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_9DA1AC5749F1BCF282CFF09CF9C15E1E
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_9DA1AC5749F1BCF282CFF09CF9C15E1E(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_7CE326E146B92C62F0FFBB9C65813961
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_7CE326E146B92C62F0FFBB9C65813961(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_1C22CB6042C4ACE738B397BF0A769E69
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_1C22CB6042C4ACE738B397BF0A769E69(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_BlendSpacePlayer_0401C841468F6FA1CDD2EBB5211879F4
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_BlendSpacePlayer_0401C841468F6FA1CDD2EBB5211879F4(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_76EB73E24CF8B38E78B3ED83A37BA680
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_TransitionResult_76EB73E24CF8B38E78B3ED83A37BA680(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_313C0D2048DAF29EED46DFA9B7939785
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Taker_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_313C0D2048DAF29EED46DFA9B7939785(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.AnimNotify_SleepingFullyBlended
	// void AnimNotify_SleepingFullyBlended();                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/Game/Enemies/TakerV2/Taker_AnimBP.Taker_AnimBP_C.ExecuteUbergraph_Taker_AnimBP
	// void ExecuteUbergraph_Taker_AnimBP(int32_t EntryPoint);                                                                  // [0x154a140] None                 
};

/// Class /Game/Animation/Game/MainPlayer/Locomotion/ExtraLarge/Male/Jump/NoWeapon/Jim_Land_CamShake.Jim_Land_CamShake_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UJim_Land_CamShake_C : public UCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Game/Animation/Game/MainPlayer/Locomotion/ExtraLarge/Male/Sprint/Jim_Sprint_BP.Jim_Sprint_BP_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UJim_Sprint_BP_C : public UCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Game/Animation/Game/MainPlayer/Locomotion/ExtraLarge/Male/Jog/CamAnimation/BP_XL_Jog_N_Shake.BP_XL_Jog_N_Shake_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UBP_XL_Jog_N_Shake_C : public UCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Game/Animation/Game/MainPlayer/Locomotion/Medium/Male/Jog/HeavyWeapon/BP_GCSteps.BP_GCSteps_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UBP_GCSteps_C : public UCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Game/Animation/Game/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C
/// Size: 0x000D (0x000038 - 0x000045)
class UBP_AnimNotify_CameraShake_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 69;

public:
	CMember(UClass*)                                   Shake_BP                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(float)                                     Shake_Scale                                                 OFFSET(get<float>, {0x40, 4, 0, 0})
	CMember(TEnumAsByte<ECameraAnimPlaySpace>)         Shake_Space                                                 OFFSET(get<T>, {0x44, 1, 0, 0})


	/// Functions
	// Function /Game/Animation/Game/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep.AnimNotify_FootStep_C
/// Size: 0x0004 (0x000038 - 0x00003C)
class UAnimNotify_FootStep_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	DMember(int32_t)                                   FootIndex                                                   OFFSET(get<int32_t>, {0x38, 4, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep.AnimNotify_FootStep_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Right.AnimNotify_FootStep_Right_C
/// Size: 0x0000 (0x00003C - 0x00003C)
class UAnimNotify_FootStep_Right_C : public UAnimNotify_FootStep_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_FootStep_Left.AnimNotify_FootStep_Left_C
/// Size: 0x0000 (0x00003C - 0x00003C)
class UAnimNotify_FootStep_Left_C : public UAnimNotify_FootStep_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_DisableSteering.AnimNotifyState_DisableSteering_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_DisableSteering_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_DisableSteering.AnimNotifyState_DisableSteering_C.Received_NotifyEnd
	// bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                 // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_DisableSteering.AnimNotifyState_DisableSteering_C.Received_NotifyBegin
	// bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);          // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C
/// Size: 0x001C (0x000038 - 0x000054)
class UAnimNotify_PlayForceFeedback_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 84;

public:
	CMember(UForceFeedbackEffect*)                     ForceFeedbackTemplate                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     ForceFeedbackFarTemplate                                    OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bPlayAtWorldLocation                                        OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(float)                                     InnerRadius                                                 OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     OuterRadius                                                 OFFSET(get<float>, {0x50, 4, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_TeleportFinished_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C.Received_NotifyEnd
	// bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                 // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C.Received_NotifyBegin
	// bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);          // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_DisablePawnRotation_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C.Received_NotifyEnd
	// bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                 // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C.Received_NotifyBegin
	// bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);          // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C
/// Size: 0x0001 (0x000030 - 0x000031)
class UAnimNotifyState_HolsterWeapon_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 49;

public:
	DMember(bool)                                      PlayEquipAnim                                               OFFSET(get<bool>, {0x30, 1, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.Received_NotifyEnd
	// bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                 // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.Received_NotifyBegin
	// bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);          // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C
/// Size: 0x0040 (0x000030 - 0x000070)
class UAnimNotifyState_AttachAsset_C : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FAssetAttachment)                          Attachment                                                  OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	CMember(UAnimSequence*)                            Animation                                                   OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      Looping                                                     OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x6C, 4, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyEnd
	// bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                 // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyBegin
	// bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);          // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Animation/Game/MainPlayer/Combat/Gadgets/Medium/BP_Soldier_Minigun.BP_Soldier_Minigun_C
/// Size: 0x0408 (0x000360 - 0x000768)
class UBP_Soldier_Minigun_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1896;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_5BEDD1AF46E640F37CCC9FAA8DF7F6DC         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_15839C374918416DF8289BAE7466DE11         OFFSET(getStruct<T>, {0x3B0, 112, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7   OFFSET(getStruct<T>, {0x420, 352, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace_2E6915294401BD03648F4689C8817592 OFFSET(getStruct<T>, {0x580, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_580B6AC241C93B1B43A2A4ACEF5528AD OFFSET(getStruct<T>, {0x5C8, 72, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator_43BD42EB42C5FE9A4147628D6467C8A7 OFFSET(getStruct<T>, {0x610, 112, 0, 0})
	SMember(FAnimNode_RotateRootBone)                  AnimGraphNode_RotateRootBone_23F81C024704537420FC1492A49C0F7B OFFSET(getStruct<T>, {0x680, 224, 0, 0})
	DMember(float)                                     MinigunRotation                                             OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     MaxMinigunRotSpeed                                          OFFSET(get<float>, {0x764, 4, 0, 0})


	/// Functions
	// Function /Game/Animation/Game/MainPlayer/Combat/Gadgets/Medium/BP_Soldier_Minigun.BP_Soldier_Minigun_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Soldier_Minigun_AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Soldier_Minigun_AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7(); // [0x154a140] BlueprintEvent       
	// Function /Game/Animation/Game/MainPlayer/Combat/Gadgets/Medium/BP_Soldier_Minigun.BP_Soldier_Minigun_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Animation/Game/MainPlayer/Combat/Gadgets/Medium/BP_Soldier_Minigun.BP_Soldier_Minigun_C.ExecuteUbergraph_BP_Soldier_Minigun
	// void ExecuteUbergraph_BP_Soldier_Minigun(int32_t EntryPoint);                                                            // [0x154a140] HasDefaults          
};

/// Class /Game/Animation/Game/MainPlayer/Gadgets/ThrowDownCamera_BP.ThrowDownCamera_BP_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UThrowDownCamera_BP_C : public UCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_ShellsOnPumpFX.AnimNotify_ShellsOnPumpFX_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_ShellsOnPumpFX_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_ShellsOnPumpFX.AnimNotify_ShellsOnPumpFX_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayReloadFX.AnimNotify_PlayReloadFX_C
/// Size: 0x0001 (0x000038 - 0x000039)
class UAnimNotify_PlayReloadFX_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 57;

public:
	CMember(TEnumAsByte<EFortReloadFXState>)           ReloadStage                                                 OFFSET(get<T>, {0x38, 1, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayReloadFX.AnimNotify_PlayReloadFX_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Animation/Game/MainPlayer/Combat/Guns/LMG/LMG_Anim_BP.LMG_Anim_BP_C
/// Size: 0x01C0 (0x000360 - 0x000520)
class ULMG_Anim_BP_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_BB04A6824ABBAEED5901A6947B88E4BF         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_9A4A91854D66514A7B527393E20AA106         OFFSET(getStruct<T>, {0x3B0, 112, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose_7CA80C604BB336829EC42F95092AE7CA OFFSET(getStruct<T>, {0x420, 56, 0, 0})
	SMember(FAnimNode_SubInstance)                     AnimGraphNode_SubInstance_5BE6D33E46B42B5E2CFBC697BBEE2195  OFFSET(getStruct<T>, {0x458, 200, 0, 0})


	/// Functions
	// Function /Game/Animation/Game/MainPlayer/Combat/Guns/LMG/LMG_Anim_BP.LMG_Anim_BP_C.ExecuteUbergraph_LMG_Anim_BP
	// void ExecuteUbergraph_LMG_Anim_BP(int32_t EntryPoint);                                                                   // [0x154a140] None                 
};

/// Class /Game/Animation/Game/MainPlayer/Combat/Guns/GuidedMissile/RCControl_AnimBlueprint.RCControl_AnimBlueprint_C
/// Size: 0x0170 (0x000360 - 0x0004D0)
class URCControl_AnimBlueprint_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_4BFB0E834E31FC0B04D397BB0A2CC05F         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_7A5C24A747EADBE3AD2AB3A97C48278F         OFFSET(getStruct<T>, {0x3B0, 112, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_C507D3604F783A593D65ED90D3094EA6 OFFSET(getStruct<T>, {0x420, 176, 0, 0})


	/// Functions
	// Function /Game/Animation/Game/MainPlayer/Combat/Guns/GuidedMissile/RCControl_AnimBlueprint.RCControl_AnimBlueprint_C.ExecuteUbergraph_RCControl_AnimBlueprint
	// void ExecuteUbergraph_RCControl_AnimBlueprint(int32_t EntryPoint);                                                       // [0x154a140] None                 
};

/// Class /Game/Animation/Game/MainPlayer/Combat/Guns/GuidedMissile/RC_Rocket_BP.RC_Rocket_BP_C
/// Size: 0x0170 (0x000360 - 0x0004D0)
class URC_Rocket_BP_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_08FAFFB0444865FC64D0C0BFEBA059B9         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_956D7C7B47E114589BA5ADB878BAB261 OFFSET(getStruct<T>, {0x3B0, 176, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_02FBD1D3400F785868D3B9AD8C664EA4         OFFSET(getStruct<T>, {0x460, 112, 0, 0})


	/// Functions
	// Function /Game/Animation/Game/MainPlayer/Combat/Guns/GuidedMissile/RC_Rocket_BP.RC_Rocket_BP_C.ExecuteUbergraph_RC_Rocket_BP
	// void ExecuteUbergraph_RC_Rocket_BP(int32_t EntryPoint);                                                                  // [0x154a140] None                 
};

/// Class /Game/Animation/Game/MainPlayer/Combat/Guns/Crossbow/Crossbow_BP.Crossbow_BP_C
/// Size: 0x0170 (0x000360 - 0x0004D0)
class UCrossbow_BP_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_C2CE56F348B7595774725785CADC3973         OFFSET(getStruct<T>, {0x368, 112, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_F1B1D70144C41EE177919293C033515D         OFFSET(getStruct<T>, {0x3D8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_DB6FD6CD480FD66D7D67B3BB318137F7 OFFSET(getStruct<T>, {0x420, 176, 0, 0})


	/// Functions
	// Function /Game/Animation/Game/MainPlayer/Combat/Guns/Crossbow/Crossbow_BP.Crossbow_BP_C.ExecuteUbergraph_Crossbow_BP
	// void ExecuteUbergraph_Crossbow_BP(int32_t EntryPoint);                                                                   // [0x154a140] None                 
};

/// Class /Game/Animation/Game/MainPlayer/Combat/Guns/BoltActionSniperRifle/BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C
/// Size: 0x0170 (0x000360 - 0x0004D0)
class UBP_BoltActionSniperRifleNoScope_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_80F88762449D5790C18126A73190A30A         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_3F9AE2D64A1081980E00CE94E79DD708         OFFSET(getStruct<T>, {0x3B0, 112, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_F813E2B842B7262277782F9EC5A3917A OFFSET(getStruct<T>, {0x420, 176, 0, 0})


	/// Functions
	// Function /Game/Animation/Game/MainPlayer/Combat/Guns/BoltActionSniperRifle/BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C.ExecuteUbergraph_BP_BoltActionSniperRifleNoScope
	// void ExecuteUbergraph_BP_BoltActionSniperRifleNoScope(int32_t EntryPoint);                                               // [0x154a140] None                 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayFireFX.AnimNotify_PlayFireFX_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_PlayFireFX_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayFireFX.AnimNotify_PlayFireFX_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayFX_WeapType.AnimNotify_PlayFX_WeapType_C
/// Size: 0x002C (0x000038 - 0x000064)
class UAnimNotify_PlayFX_WeapType_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 100;

public:
	SMember(FString)                                   Socket                                                      OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      attach                                                      OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x58, 12, 0, 0})


	/// Functions
	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayFX_WeapType.AnimNotify_PlayFX_WeapType_C.Received_Notify
	// bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                    // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

