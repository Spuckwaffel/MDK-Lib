
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayEffectTemplates
/// dependency: IrwinRuntime
/// dependency: NavigationSystem

/// Class /Game/AI/NavAreas/FortNavArea_JumpDownSmashable2.FortNavArea_JumpDownSmashable2_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UFortNavArea_JumpDownSmashable2_C : public UFortNavArea_SmashableJump
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/AI/NavAreas/FortNavArea_JumpDownSmashable.FortNavArea_JumpDownSmashable_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UFortNavArea_JumpDownSmashable_C : public UFortNavArea_SmashableJump
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/AI/AIBlueprintInterface/BPI_HuskDance.BPI_HuskDance_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBPI_HuskDance_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/AI/NavAreas/FortNavArea_JumpDownSmashable3.FortNavArea_JumpDownSmashable3_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UFortNavArea_JumpDownSmashable3_C : public UFortNavArea_SmashableJump
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/AI/NavAreas/FortNavArea_JumpDown.FortNavArea_JumpDown_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_JumpDown_C : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Irwin/AI/Interfaces/Fauna_Idle_AnimInterface.Fauna_Idle_AnimInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UFauna_Idle_AnimInterface_C : public UAnimLayerInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C
/// Size: 0x3FE8 (0x0007A0 - 0x004788)
class UBurt_AnimBP_C : public UFortAIFaunaAnimInstance_Burt
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 18312;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x7A0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0x7A8, 104, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x810, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x818, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x820, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0x840, 176, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0x8F0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0x938, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0x980, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root1                                         OFFSET(getStruct<T>, {0x9C8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose1                              OFFSET(getStruct<T>, {0x9E8, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0xA98, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root2                                         OFFSET(getStruct<T>, {0xAE0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0xB00, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0xB28, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0xB50, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0xB78, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult4                             OFFSET(getStruct<T>, {0xBA0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult5                             OFFSET(getStruct<T>, {0xBC8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult6                             OFFSET(getStruct<T>, {0xBF0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult7                             OFFSET(getStruct<T>, {0xC18, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult8                             OFFSET(getStruct<T>, {0xC40, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult9                             OFFSET(getStruct<T>, {0xC68, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult10                            OFFSET(getStruct<T>, {0xC90, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult11                            OFFSET(getStruct<T>, {0xCB8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult12                            OFFSET(getStruct<T>, {0xCE0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult13                            OFFSET(getStruct<T>, {0xD08, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult14                            OFFSET(getStruct<T>, {0xD30, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult15                            OFFSET(getStruct<T>, {0xD58, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult16                            OFFSET(getStruct<T>, {0xD80, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult17                            OFFSET(getStruct<T>, {0xDA8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult18                            OFFSET(getStruct<T>, {0xDD0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult19                            OFFSET(getStruct<T>, {0xDF8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult20                            OFFSET(getStruct<T>, {0xE20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult21                            OFFSET(getStruct<T>, {0xE48, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0xE70, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0xEB8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer4                               OFFSET(getStruct<T>, {0xED8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0xF20, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer5                               OFFSET(getStruct<T>, {0xF40, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0xF88, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0xFA8, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 OFFSET(getStruct<T>, {0x1018, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer6                               OFFSET(getStruct<T>, {0x10E0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer7                               OFFSET(getStruct<T>, {0x1128, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool1                              OFFSET(getStruct<T>, {0x1170, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult3                                  OFFSET(getStruct<T>, {0x11B8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer8                               OFFSET(getStruct<T>, {0x11D8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult4                                  OFFSET(getStruct<T>, {0x1220, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer9                               OFFSET(getStruct<T>, {0x1240, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult5                                  OFFSET(getStruct<T>, {0x1288, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer10                              OFFSET(getStruct<T>, {0x12A8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult6                                  OFFSET(getStruct<T>, {0x12F0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult22                            OFFSET(getStruct<T>, {0x1310, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult23                            OFFSET(getStruct<T>, {0x1338, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer11                              OFFSET(getStruct<T>, {0x1360, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult7                                  OFFSET(getStruct<T>, {0x13A8, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  OFFSET(getStruct<T>, {0x13C8, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult8                                  OFFSET(getStruct<T>, {0x13D8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0x13F8, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive1                                OFFSET(getStruct<T>, {0x14C0, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive2                                OFFSET(getStruct<T>, {0x1588, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0x1650, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer2                             OFFSET(getStruct<T>, {0x16C0, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult9                                  OFFSET(getStruct<T>, {0x1730, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x1750, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool2                              OFFSET(getStruct<T>, {0x1778, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              OFFSET(getStruct<T>, {0x17C0, 240, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool3                              OFFSET(getStruct<T>, {0x18B0, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0x18F8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer12                              OFFSET(getStruct<T>, {0x1920, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer13                              OFFSET(getStruct<T>, {0x1968, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive3                                OFFSET(getStruct<T>, {0x19B0, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer3                             OFFSET(getStruct<T>, {0x1A78, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult10                                 OFFSET(getStruct<T>, {0x1AE8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine1                                 OFFSET(getStruct<T>, {0x1B08, 200, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0x1BD0, 72, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x1C18, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x1C38, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot1                                         OFFSET(getStruct<T>, {0x1C58, 72, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK                                         OFFSET(getStruct<T>, {0x1CA0, 248, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive4                                OFFSET(getStruct<T>, {0x1D98, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult24                            OFFSET(getStruct<T>, {0x1E60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult25                            OFFSET(getStruct<T>, {0x1E88, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer14                              OFFSET(getStruct<T>, {0x1EB0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult11                                 OFFSET(getStruct<T>, {0x1EF8, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose1                                 OFFSET(getStruct<T>, {0x1F18, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult12                                 OFFSET(getStruct<T>, {0x1F28, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine2                                 OFFSET(getStruct<T>, {0x1F48, 200, 0, 0})
	SMember(FFortAnimNode_QuadrupedSlopeWarping)       FortAnimGraphNode_QuadrupedSlopeWarping                     OFFSET(getStruct<T>, {0x2010, 1480, 0, 0})
	SMember(FFortAnimNode_WeightedLookAt)              FortAnimGraphNode_WeightedLookAt                            OFFSET(getStruct<T>, {0x25E0, 592, 0, 0})
	SMember(FAnimNode_Inertialization)                 AnimGraphNode_Inertialization                               OFFSET(getStruct<T>, {0x2830, 272, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               OFFSET(getStruct<T>, {0x2940, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x2A08, 120, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool4                              OFFSET(getStruct<T>, {0x2A80, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer15                              OFFSET(getStruct<T>, {0x2AC8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool5                              OFFSET(getStruct<T>, {0x2B10, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult26                            OFFSET(getStruct<T>, {0x2B58, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult27                            OFFSET(getStruct<T>, {0x2B80, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult28                            OFFSET(getStruct<T>, {0x2BA8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult29                            OFFSET(getStruct<T>, {0x2BD0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult30                            OFFSET(getStruct<T>, {0x2BF8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult31                            OFFSET(getStruct<T>, {0x2C20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult32                            OFFSET(getStruct<T>, {0x2C48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult33                            OFFSET(getStruct<T>, {0x2C70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult34                            OFFSET(getStruct<T>, {0x2C98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult35                            OFFSET(getStruct<T>, {0x2CC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult36                            OFFSET(getStruct<T>, {0x2CE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult37                            OFFSET(getStruct<T>, {0x2D10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult38                            OFFSET(getStruct<T>, {0x2D38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult39                            OFFSET(getStruct<T>, {0x2D60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult40                            OFFSET(getStruct<T>, {0x2D88, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult41                            OFFSET(getStruct<T>, {0x2DB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult42                            OFFSET(getStruct<T>, {0x2DD8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult43                            OFFSET(getStruct<T>, {0x2E00, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool6                              OFFSET(getStruct<T>, {0x2E28, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer16                              OFFSET(getStruct<T>, {0x2E70, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer17                              OFFSET(getStruct<T>, {0x2EB8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult13                                 OFFSET(getStruct<T>, {0x2F00, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult44                            OFFSET(getStruct<T>, {0x2F20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult45                            OFFSET(getStruct<T>, {0x2F48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult46                            OFFSET(getStruct<T>, {0x2F70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult47                            OFFSET(getStruct<T>, {0x2F98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult48                            OFFSET(getStruct<T>, {0x2FC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult49                            OFFSET(getStruct<T>, {0x2FE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult50                            OFFSET(getStruct<T>, {0x3010, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult51                            OFFSET(getStruct<T>, {0x3038, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer18                              OFFSET(getStruct<T>, {0x3060, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult14                                 OFFSET(getStruct<T>, {0x30A8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer19                              OFFSET(getStruct<T>, {0x30C8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult15                                 OFFSET(getStruct<T>, {0x3110, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer20                              OFFSET(getStruct<T>, {0x3130, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult16                                 OFFSET(getStruct<T>, {0x3178, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer21                              OFFSET(getStruct<T>, {0x3198, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult17                                 OFFSET(getStruct<T>, {0x31E0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult52                            OFFSET(getStruct<T>, {0x3200, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine3                                 OFFSET(getStruct<T>, {0x3228, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult18                                 OFFSET(getStruct<T>, {0x32F0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer22                              OFFSET(getStruct<T>, {0x3310, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult19                                 OFFSET(getStruct<T>, {0x3358, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer23                              OFFSET(getStruct<T>, {0x3378, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult20                                 OFFSET(getStruct<T>, {0x33C0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer24                              OFFSET(getStruct<T>, {0x33E0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult21                                 OFFSET(getStruct<T>, {0x3428, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult53                            OFFSET(getStruct<T>, {0x3448, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine4                                 OFFSET(getStruct<T>, {0x3470, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult22                                 OFFSET(getStruct<T>, {0x3538, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer25                              OFFSET(getStruct<T>, {0x3558, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer26                              OFFSET(getStruct<T>, {0x35A0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool7                              OFFSET(getStruct<T>, {0x35E8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult23                                 OFFSET(getStruct<T>, {0x3630, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool8                              OFFSET(getStruct<T>, {0x3650, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer27                              OFFSET(getStruct<T>, {0x3698, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer4                             OFFSET(getStruct<T>, {0x36E0, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive5                                OFFSET(getStruct<T>, {0x3750, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer28                              OFFSET(getStruct<T>, {0x3818, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer29                              OFFSET(getStruct<T>, {0x3860, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool9                              OFFSET(getStruct<T>, {0x38A8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult24                                 OFFSET(getStruct<T>, {0x38F0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer30                              OFFSET(getStruct<T>, {0x3910, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer5                             OFFSET(getStruct<T>, {0x3958, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive6                                OFFSET(getStruct<T>, {0x39C8, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool10                             OFFSET(getStruct<T>, {0x3A90, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer31                              OFFSET(getStruct<T>, {0x3AD8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult25                                 OFFSET(getStruct<T>, {0x3B20, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer32                              OFFSET(getStruct<T>, {0x3B40, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult26                                 OFFSET(getStruct<T>, {0x3B88, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer33                              OFFSET(getStruct<T>, {0x3BA8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult27                                 OFFSET(getStruct<T>, {0x3BF0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer6                             OFFSET(getStruct<T>, {0x3C10, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive7                                OFFSET(getStruct<T>, {0x3C80, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer34                              OFFSET(getStruct<T>, {0x3D48, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool11                             OFFSET(getStruct<T>, {0x3D90, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer7                             OFFSET(getStruct<T>, {0x3DD8, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive8                                OFFSET(getStruct<T>, {0x3E48, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer35                              OFFSET(getStruct<T>, {0x3F10, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool12                             OFFSET(getStruct<T>, {0x3F58, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult54                            OFFSET(getStruct<T>, {0x3FA0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult55                            OFFSET(getStruct<T>, {0x3FC8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer36                              OFFSET(getStruct<T>, {0x3FF0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult28                                 OFFSET(getStruct<T>, {0x4038, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose2                                 OFFSET(getStruct<T>, {0x4058, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult29                                 OFFSET(getStruct<T>, {0x4068, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine5                                 OFFSET(getStruct<T>, {0x4088, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive9                                OFFSET(getStruct<T>, {0x4150, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive10                               OFFSET(getStruct<T>, {0x4218, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer8                             OFFSET(getStruct<T>, {0x42E0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer9                             OFFSET(getStruct<T>, {0x4350, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult30                                 OFFSET(getStruct<T>, {0x43C0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer37                              OFFSET(getStruct<T>, {0x43E0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult31                                 OFFSET(getStruct<T>, {0x4428, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine6                                 OFFSET(getStruct<T>, {0x4448, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive11                               OFFSET(getStruct<T>, {0x4510, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult56                            OFFSET(getStruct<T>, {0x45D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult57                            OFFSET(getStruct<T>, {0x4600, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer38                              OFFSET(getStruct<T>, {0x4628, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult32                                 OFFSET(getStruct<T>, {0x4670, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose3                                 OFFSET(getStruct<T>, {0x4690, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult33                                 OFFSET(getStruct<T>, {0x46A0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine7                                 OFFSET(getStruct<T>, {0x46C0, 200, 0, 0})


	/// Functions
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.Fauna IdleTurn
	// void Fauna IdleTurn(FPoseLink InPose IdleTurn, FPoseLink& Fauna IdleTurn);                                               // [0x1d9241c] HasOutParms|BlueprintCallable 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.Fauna Idle
	// void Fauna Idle(FPoseLink InPose Idle, FPoseLink& Fauna Idle);                                                           // [0x1d9241c] HasOutParms|BlueprintCallable 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1d9241c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3(); // [0x1d9241c] BlueprintEvent       
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.AnimNotify_FallExit
	// void AnimNotify_FallExit();                                                                                              // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.AnimNotify_LandAddExit
	// void AnimNotify_LandAddExit();                                                                                           // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.AnimNotify_LandEnter
	// void AnimNotify_LandEnter();                                                                                             // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.ExecuteUbergraph_Burt_AnimBP
	// void ExecuteUbergraph_Burt_AnimBP(int32_t EntryPoint);                                                                   // [0x1d9241c] Final                
};

/// Class /Irwin/AI/Interfaces/Fauna_Jump_AnimInterface.Fauna_Jump_AnimInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UFauna_Jump_AnimInterface_C : public UAnimLayerInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C
/// Size: 0x4838 (0x0007B0 - 0x004FE8)
class UGrandma_AnimBP_C : public UFortAIFaunaAnimInstance_Grandma
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 20456;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x7B0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0x7B8, 116, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x830, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x838, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x840, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x860, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0x888, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0x8B0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0x8D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult4                             OFFSET(getStruct<T>, {0x900, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult5                             OFFSET(getStruct<T>, {0x928, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult6                             OFFSET(getStruct<T>, {0x950, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0x978, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0x9C0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0x9E0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0xA28, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0xA48, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0xA90, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0xAB0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult3                                  OFFSET(getStruct<T>, {0xAF8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0xB18, 200, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root1                                         OFFSET(getStruct<T>, {0xBE0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0xC00, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer4                               OFFSET(getStruct<T>, {0xCB0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer5                               OFFSET(getStruct<T>, {0xCF8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0xD40, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root2                                         OFFSET(getStruct<T>, {0xD88, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose1                              OFFSET(getStruct<T>, {0xDA8, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer6                               OFFSET(getStruct<T>, {0xE58, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root3                                         OFFSET(getStruct<T>, {0xEA0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult7                             OFFSET(getStruct<T>, {0xEC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult8                             OFFSET(getStruct<T>, {0xEE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult9                             OFFSET(getStruct<T>, {0xF10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult10                            OFFSET(getStruct<T>, {0xF38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult11                            OFFSET(getStruct<T>, {0xF60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult12                            OFFSET(getStruct<T>, {0xF88, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult13                            OFFSET(getStruct<T>, {0xFB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult14                            OFFSET(getStruct<T>, {0xFD8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult15                            OFFSET(getStruct<T>, {0x1000, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult16                            OFFSET(getStruct<T>, {0x1028, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult17                            OFFSET(getStruct<T>, {0x1050, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult18                            OFFSET(getStruct<T>, {0x1078, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult19                            OFFSET(getStruct<T>, {0x10A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult20                            OFFSET(getStruct<T>, {0x10C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult21                            OFFSET(getStruct<T>, {0x10F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult22                            OFFSET(getStruct<T>, {0x1118, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult23                            OFFSET(getStruct<T>, {0x1140, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult24                            OFFSET(getStruct<T>, {0x1168, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult25                            OFFSET(getStruct<T>, {0x1190, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult26                            OFFSET(getStruct<T>, {0x11B8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer7                               OFFSET(getStruct<T>, {0x11E0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult4                                  OFFSET(getStruct<T>, {0x1228, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer8                               OFFSET(getStruct<T>, {0x1248, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult5                                  OFFSET(getStruct<T>, {0x1290, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer9                               OFFSET(getStruct<T>, {0x12B0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult6                                  OFFSET(getStruct<T>, {0x12F8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer10                              OFFSET(getStruct<T>, {0x1318, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult7                                  OFFSET(getStruct<T>, {0x1360, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer11                              OFFSET(getStruct<T>, {0x1380, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult8                                  OFFSET(getStruct<T>, {0x13C8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer12                              OFFSET(getStruct<T>, {0x13E8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult9                                  OFFSET(getStruct<T>, {0x1430, 32, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 OFFSET(getStruct<T>, {0x1450, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0x1518, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool1                              OFFSET(getStruct<T>, {0x1588, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer13                              OFFSET(getStruct<T>, {0x15D0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer14                              OFFSET(getStruct<T>, {0x1618, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult10                                 OFFSET(getStruct<T>, {0x1660, 32, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive1                                OFFSET(getStruct<T>, {0x1680, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0x1748, 112, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult27                            OFFSET(getStruct<T>, {0x17B8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult28                            OFFSET(getStruct<T>, {0x17E0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer15                              OFFSET(getStruct<T>, {0x1808, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult11                                 OFFSET(getStruct<T>, {0x1850, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  OFFSET(getStruct<T>, {0x1870, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult12                                 OFFSET(getStruct<T>, {0x1880, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine1                                 OFFSET(getStruct<T>, {0x18A0, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive2                                OFFSET(getStruct<T>, {0x1968, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer2                             OFFSET(getStruct<T>, {0x1A30, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult13                                 OFFSET(getStruct<T>, {0x1AA0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer3                             OFFSET(getStruct<T>, {0x1AC0, 112, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer16                              OFFSET(getStruct<T>, {0x1B30, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer17                              OFFSET(getStruct<T>, {0x1B78, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x1BC0, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool2                              OFFSET(getStruct<T>, {0x1BE8, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              OFFSET(getStruct<T>, {0x1C30, 240, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive3                                OFFSET(getStruct<T>, {0x1D20, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool3                              OFFSET(getStruct<T>, {0x1DE8, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0x1E30, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult14                                 OFFSET(getStruct<T>, {0x1E58, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine2                                 OFFSET(getStruct<T>, {0x1E78, 200, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0x1F40, 72, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x1F88, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x1FA8, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot1                                         OFFSET(getStruct<T>, {0x1FC8, 72, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK                                         OFFSET(getStruct<T>, {0x2010, 248, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot2                                         OFFSET(getStruct<T>, {0x2108, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot3                                         OFFSET(getStruct<T>, {0x2150, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x2198, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose2                                OFFSET(getStruct<T>, {0x2210, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose3                                OFFSET(getStruct<T>, {0x2238, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool4                              OFFSET(getStruct<T>, {0x2260, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend1                             OFFSET(getStruct<T>, {0x22A8, 240, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose4                                OFFSET(getStruct<T>, {0x2398, 40, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot4                                         OFFSET(getStruct<T>, {0x23C0, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive4                                OFFSET(getStruct<T>, {0x2408, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult29                            OFFSET(getStruct<T>, {0x24D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult30                            OFFSET(getStruct<T>, {0x24F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult31                            OFFSET(getStruct<T>, {0x2520, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult32                            OFFSET(getStruct<T>, {0x2548, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer18                              OFFSET(getStruct<T>, {0x2570, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult15                                 OFFSET(getStruct<T>, {0x25B8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer19                              OFFSET(getStruct<T>, {0x25D8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult16                                 OFFSET(getStruct<T>, {0x2620, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose1                                 OFFSET(getStruct<T>, {0x2640, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult17                                 OFFSET(getStruct<T>, {0x2650, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine3                                 OFFSET(getStruct<T>, {0x2670, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer20                              OFFSET(getStruct<T>, {0x2738, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend2                             OFFSET(getStruct<T>, {0x2780, 240, 0, 0})
	SMember(FFortAnimNode_QuadrupedSlopeWarping)       FortAnimGraphNode_QuadrupedSlopeWarping                     OFFSET(getStruct<T>, {0x2870, 1480, 0, 0})
	SMember(FFortAnimNode_WeightedLookAt)              FortAnimGraphNode_WeightedLookAt                            OFFSET(getStruct<T>, {0x2E40, 592, 0, 0})
	SMember(FAnimNode_Inertialization)                 AnimGraphNode_Inertialization                               OFFSET(getStruct<T>, {0x3090, 272, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               OFFSET(getStruct<T>, {0x31A0, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose1                               OFFSET(getStruct<T>, {0x3268, 120, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer21                              OFFSET(getStruct<T>, {0x32E0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool5                              OFFSET(getStruct<T>, {0x3328, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult33                            OFFSET(getStruct<T>, {0x3370, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult34                            OFFSET(getStruct<T>, {0x3398, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult35                            OFFSET(getStruct<T>, {0x33C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult36                            OFFSET(getStruct<T>, {0x33E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult37                            OFFSET(getStruct<T>, {0x3410, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult38                            OFFSET(getStruct<T>, {0x3438, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult39                            OFFSET(getStruct<T>, {0x3460, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult40                            OFFSET(getStruct<T>, {0x3488, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult41                            OFFSET(getStruct<T>, {0x34B0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult42                            OFFSET(getStruct<T>, {0x34D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult43                            OFFSET(getStruct<T>, {0x3500, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult44                            OFFSET(getStruct<T>, {0x3528, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult45                            OFFSET(getStruct<T>, {0x3550, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult46                            OFFSET(getStruct<T>, {0x3578, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult47                            OFFSET(getStruct<T>, {0x35A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult48                            OFFSET(getStruct<T>, {0x35C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult49                            OFFSET(getStruct<T>, {0x35F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult50                            OFFSET(getStruct<T>, {0x3618, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer22                              OFFSET(getStruct<T>, {0x3640, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer23                              OFFSET(getStruct<T>, {0x3688, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool6                              OFFSET(getStruct<T>, {0x36D0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult18                                 OFFSET(getStruct<T>, {0x3718, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer24                              OFFSET(getStruct<T>, {0x3738, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer25                              OFFSET(getStruct<T>, {0x3780, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool7                              OFFSET(getStruct<T>, {0x37C8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult19                                 OFFSET(getStruct<T>, {0x3810, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult51                            OFFSET(getStruct<T>, {0x3830, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult52                            OFFSET(getStruct<T>, {0x3858, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult53                            OFFSET(getStruct<T>, {0x3880, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult54                            OFFSET(getStruct<T>, {0x38A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult55                            OFFSET(getStruct<T>, {0x38D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult56                            OFFSET(getStruct<T>, {0x38F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult57                            OFFSET(getStruct<T>, {0x3920, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult58                            OFFSET(getStruct<T>, {0x3948, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer26                              OFFSET(getStruct<T>, {0x3970, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult20                                 OFFSET(getStruct<T>, {0x39B8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer27                              OFFSET(getStruct<T>, {0x39D8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult21                                 OFFSET(getStruct<T>, {0x3A20, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer28                              OFFSET(getStruct<T>, {0x3A40, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult22                                 OFFSET(getStruct<T>, {0x3A88, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer29                              OFFSET(getStruct<T>, {0x3AA8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult23                                 OFFSET(getStruct<T>, {0x3AF0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult59                            OFFSET(getStruct<T>, {0x3B10, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine4                                 OFFSET(getStruct<T>, {0x3B38, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult24                                 OFFSET(getStruct<T>, {0x3C00, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer30                              OFFSET(getStruct<T>, {0x3C20, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult25                                 OFFSET(getStruct<T>, {0x3C68, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer31                              OFFSET(getStruct<T>, {0x3C88, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult26                                 OFFSET(getStruct<T>, {0x3CD0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer32                              OFFSET(getStruct<T>, {0x3CF0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult27                                 OFFSET(getStruct<T>, {0x3D38, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult60                            OFFSET(getStruct<T>, {0x3D58, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine5                                 OFFSET(getStruct<T>, {0x3D80, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult28                                 OFFSET(getStruct<T>, {0x3E48, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer33                              OFFSET(getStruct<T>, {0x3E68, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult29                                 OFFSET(getStruct<T>, {0x3EB0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer34                              OFFSET(getStruct<T>, {0x3ED0, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive5                                OFFSET(getStruct<T>, {0x3F18, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer4                             OFFSET(getStruct<T>, {0x3FE0, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool8                              OFFSET(getStruct<T>, {0x4050, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer35                              OFFSET(getStruct<T>, {0x4098, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult30                                 OFFSET(getStruct<T>, {0x40E0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer36                              OFFSET(getStruct<T>, {0x4100, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult31                                 OFFSET(getStruct<T>, {0x4148, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer37                              OFFSET(getStruct<T>, {0x4168, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool9                              OFFSET(getStruct<T>, {0x41B0, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive6                                OFFSET(getStruct<T>, {0x41F8, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer5                             OFFSET(getStruct<T>, {0x42C0, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool10                             OFFSET(getStruct<T>, {0x4330, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer38                              OFFSET(getStruct<T>, {0x4378, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer39                              OFFSET(getStruct<T>, {0x43C0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult32                                 OFFSET(getStruct<T>, {0x4408, 32, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive7                                OFFSET(getStruct<T>, {0x4428, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer6                             OFFSET(getStruct<T>, {0x44F0, 112, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer40                              OFFSET(getStruct<T>, {0x4560, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool11                             OFFSET(getStruct<T>, {0x45A8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer41                              OFFSET(getStruct<T>, {0x45F0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool12                             OFFSET(getStruct<T>, {0x4638, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive8                                OFFSET(getStruct<T>, {0x4680, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer7                             OFFSET(getStruct<T>, {0x4748, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive9                                OFFSET(getStruct<T>, {0x47B8, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer8                             OFFSET(getStruct<T>, {0x4880, 112, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult61                            OFFSET(getStruct<T>, {0x48F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult62                            OFFSET(getStruct<T>, {0x4918, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer42                              OFFSET(getStruct<T>, {0x4940, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult33                                 OFFSET(getStruct<T>, {0x4988, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose2                                 OFFSET(getStruct<T>, {0x49A8, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult34                                 OFFSET(getStruct<T>, {0x49B8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine6                                 OFFSET(getStruct<T>, {0x49D8, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive10                               OFFSET(getStruct<T>, {0x4AA0, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer9                             OFFSET(getStruct<T>, {0x4B68, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult35                                 OFFSET(getStruct<T>, {0x4BD8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer43                              OFFSET(getStruct<T>, {0x4BF8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult36                                 OFFSET(getStruct<T>, {0x4C40, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine7                                 OFFSET(getStruct<T>, {0x4C60, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool13                             OFFSET(getStruct<T>, {0x4D28, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive11                               OFFSET(getStruct<T>, {0x4D70, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult63                            OFFSET(getStruct<T>, {0x4E38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult64                            OFFSET(getStruct<T>, {0x4E60, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer44                              OFFSET(getStruct<T>, {0x4E88, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult37                                 OFFSET(getStruct<T>, {0x4ED0, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose3                                 OFFSET(getStruct<T>, {0x4EF0, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult38                                 OFFSET(getStruct<T>, {0x4F00, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine8                                 OFFSET(getStruct<T>, {0x4F20, 200, 0, 0})


	/// Functions
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.Fauna Jump
	// void Fauna Jump(FPoseLink& Fauna Jump);                                                                                  // [0x1d9241c] HasOutParms|BlueprintCallable 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.Fauna IdleTurn
	// void Fauna IdleTurn(FPoseLink InPose IdleTurn, FPoseLink& Fauna IdleTurn);                                               // [0x1d9241c] HasOutParms|BlueprintCallable 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.Fauna Idle
	// void Fauna Idle(FPoseLink InPose Idle, FPoseLink& Fauna Idle);                                                           // [0x1d9241c] HasOutParms|BlueprintCallable 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1d9241c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.AnimNotify_FallExit
	// void AnimNotify_FallExit();                                                                                              // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.AnimNotify_LandAddExit
	// void AnimNotify_LandAddExit();                                                                                           // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.AnimNotify_LandEnter
	// void AnimNotify_LandEnter();                                                                                             // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.ExecuteUbergraph_Grandma_AnimBP
	// void ExecuteUbergraph_Grandma_AnimBP(int32_t EntryPoint);                                                                // [0x1d9241c] Final                
};

/// Class /Irwin/AI/Prey/Burt/Abilities/GE_RidingSprint_PawnDmg.GE_RidingSprint_PawnDmg_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_RidingSprint_PawnDmg_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Irwin/AI/Prey/Burt/Abilities/GE_RidingSprint_VehicleDmg.GE_RidingSprint_VehicleDmg_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_RidingSprint_VehicleDmg_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Irwin/AI/Prey/Burt/Abilities/GE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown.GE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

