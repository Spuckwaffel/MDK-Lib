
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

/// Class /Game/AI/NavAreas/FortNavArea_JumpDownSmashable3.FortNavArea_JumpDownSmashable3_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UFortNavArea_JumpDownSmashable3_C : public UFortNavArea_SmashableJump
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

/// Class /Game/AI/NavAreas/FortNavArea_JumpDownSmashable2.FortNavArea_JumpDownSmashable2_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UFortNavArea_JumpDownSmashable2_C : public UFortNavArea_SmashableJump
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
/// Size: 0x3E08 (0x000780 - 0x004588)
class UBurt_AnimBP_C : public UFortAIFaunaAnimInstance_Burt
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 17800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x780, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0x788, 104, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x7F0, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x7F8, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x800, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0x820, 176, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0x8D0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0x918, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0x960, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root1                                         OFFSET(getStruct<T>, {0x9A8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose1                              OFFSET(getStruct<T>, {0x9C8, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0xA78, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root2                                         OFFSET(getStruct<T>, {0xAC0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0xAE0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0xB08, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0xB30, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0xB58, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult4                             OFFSET(getStruct<T>, {0xB80, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult5                             OFFSET(getStruct<T>, {0xBA8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult6                             OFFSET(getStruct<T>, {0xBD0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult7                             OFFSET(getStruct<T>, {0xBF8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult8                             OFFSET(getStruct<T>, {0xC20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult9                             OFFSET(getStruct<T>, {0xC48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult10                            OFFSET(getStruct<T>, {0xC70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult11                            OFFSET(getStruct<T>, {0xC98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult12                            OFFSET(getStruct<T>, {0xCC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult13                            OFFSET(getStruct<T>, {0xCE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult14                            OFFSET(getStruct<T>, {0xD10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult15                            OFFSET(getStruct<T>, {0xD38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult16                            OFFSET(getStruct<T>, {0xD60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult17                            OFFSET(getStruct<T>, {0xD88, 40, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0xDB0, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 OFFSET(getStruct<T>, {0xE20, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0xEE8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer4                               OFFSET(getStruct<T>, {0xF30, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool1                              OFFSET(getStruct<T>, {0xF78, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0xFC0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer5                               OFFSET(getStruct<T>, {0xFE0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0x1028, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer6                               OFFSET(getStruct<T>, {0x1048, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0x1090, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer7                               OFFSET(getStruct<T>, {0x10B0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult3                                  OFFSET(getStruct<T>, {0x10F8, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult18                            OFFSET(getStruct<T>, {0x1118, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult19                            OFFSET(getStruct<T>, {0x1140, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer8                               OFFSET(getStruct<T>, {0x1168, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult4                                  OFFSET(getStruct<T>, {0x11B0, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  OFFSET(getStruct<T>, {0x11D0, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult5                                  OFFSET(getStruct<T>, {0x11E0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0x1200, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive1                                OFFSET(getStruct<T>, {0x12C8, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive2                                OFFSET(getStruct<T>, {0x1390, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0x1458, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer2                             OFFSET(getStruct<T>, {0x14C8, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult6                                  OFFSET(getStruct<T>, {0x1538, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x1558, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool2                              OFFSET(getStruct<T>, {0x1580, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              OFFSET(getStruct<T>, {0x15C8, 240, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool3                              OFFSET(getStruct<T>, {0x16B8, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0x1700, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer9                               OFFSET(getStruct<T>, {0x1728, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer10                              OFFSET(getStruct<T>, {0x1770, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive3                                OFFSET(getStruct<T>, {0x17B8, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer3                             OFFSET(getStruct<T>, {0x1880, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult7                                  OFFSET(getStruct<T>, {0x18F0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine1                                 OFFSET(getStruct<T>, {0x1910, 200, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0x19D8, 72, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x1A20, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x1A40, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot1                                         OFFSET(getStruct<T>, {0x1A60, 72, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK                                         OFFSET(getStruct<T>, {0x1AA8, 248, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive4                                OFFSET(getStruct<T>, {0x1BA0, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult20                            OFFSET(getStruct<T>, {0x1C68, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult21                            OFFSET(getStruct<T>, {0x1C90, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer11                              OFFSET(getStruct<T>, {0x1CB8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult8                                  OFFSET(getStruct<T>, {0x1D00, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose1                                 OFFSET(getStruct<T>, {0x1D20, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult9                                  OFFSET(getStruct<T>, {0x1D30, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine2                                 OFFSET(getStruct<T>, {0x1D50, 200, 0, 0})
	SMember(FFortAnimNode_QuadrupedSlopeWarping)       FortAnimGraphNode_QuadrupedSlopeWarping                     OFFSET(getStruct<T>, {0x1E18, 1480, 0, 0})
	SMember(FFortAnimNode_WeightedLookAt)              FortAnimGraphNode_WeightedLookAt                            OFFSET(getStruct<T>, {0x23E0, 592, 0, 0})
	SMember(FAnimNode_Inertialization)                 AnimGraphNode_Inertialization                               OFFSET(getStruct<T>, {0x2630, 272, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               OFFSET(getStruct<T>, {0x2740, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x2808, 120, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool4                              OFFSET(getStruct<T>, {0x2880, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer12                              OFFSET(getStruct<T>, {0x28C8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool5                              OFFSET(getStruct<T>, {0x2910, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult22                            OFFSET(getStruct<T>, {0x2958, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult23                            OFFSET(getStruct<T>, {0x2980, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult24                            OFFSET(getStruct<T>, {0x29A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult25                            OFFSET(getStruct<T>, {0x29D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult26                            OFFSET(getStruct<T>, {0x29F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult27                            OFFSET(getStruct<T>, {0x2A20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult28                            OFFSET(getStruct<T>, {0x2A48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult29                            OFFSET(getStruct<T>, {0x2A70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult30                            OFFSET(getStruct<T>, {0x2A98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult31                            OFFSET(getStruct<T>, {0x2AC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult32                            OFFSET(getStruct<T>, {0x2AE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult33                            OFFSET(getStruct<T>, {0x2B10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult34                            OFFSET(getStruct<T>, {0x2B38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult35                            OFFSET(getStruct<T>, {0x2B60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult36                            OFFSET(getStruct<T>, {0x2B88, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult37                            OFFSET(getStruct<T>, {0x2BB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult38                            OFFSET(getStruct<T>, {0x2BD8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult39                            OFFSET(getStruct<T>, {0x2C00, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool6                              OFFSET(getStruct<T>, {0x2C28, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer13                              OFFSET(getStruct<T>, {0x2C70, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer14                              OFFSET(getStruct<T>, {0x2CB8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult10                                 OFFSET(getStruct<T>, {0x2D00, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult40                            OFFSET(getStruct<T>, {0x2D20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult41                            OFFSET(getStruct<T>, {0x2D48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult42                            OFFSET(getStruct<T>, {0x2D70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult43                            OFFSET(getStruct<T>, {0x2D98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult44                            OFFSET(getStruct<T>, {0x2DC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult45                            OFFSET(getStruct<T>, {0x2DE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult46                            OFFSET(getStruct<T>, {0x2E10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult47                            OFFSET(getStruct<T>, {0x2E38, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer15                              OFFSET(getStruct<T>, {0x2E60, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult11                                 OFFSET(getStruct<T>, {0x2EA8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer16                              OFFSET(getStruct<T>, {0x2EC8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult12                                 OFFSET(getStruct<T>, {0x2F10, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer17                              OFFSET(getStruct<T>, {0x2F30, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult13                                 OFFSET(getStruct<T>, {0x2F78, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer18                              OFFSET(getStruct<T>, {0x2F98, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult14                                 OFFSET(getStruct<T>, {0x2FE0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult48                            OFFSET(getStruct<T>, {0x3000, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine3                                 OFFSET(getStruct<T>, {0x3028, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult15                                 OFFSET(getStruct<T>, {0x30F0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer19                              OFFSET(getStruct<T>, {0x3110, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult16                                 OFFSET(getStruct<T>, {0x3158, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer20                              OFFSET(getStruct<T>, {0x3178, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult17                                 OFFSET(getStruct<T>, {0x31C0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer21                              OFFSET(getStruct<T>, {0x31E0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult18                                 OFFSET(getStruct<T>, {0x3228, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult49                            OFFSET(getStruct<T>, {0x3248, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine4                                 OFFSET(getStruct<T>, {0x3270, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult19                                 OFFSET(getStruct<T>, {0x3338, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer22                              OFFSET(getStruct<T>, {0x3358, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer23                              OFFSET(getStruct<T>, {0x33A0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool7                              OFFSET(getStruct<T>, {0x33E8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult20                                 OFFSET(getStruct<T>, {0x3430, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool8                              OFFSET(getStruct<T>, {0x3450, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer24                              OFFSET(getStruct<T>, {0x3498, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer4                             OFFSET(getStruct<T>, {0x34E0, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive5                                OFFSET(getStruct<T>, {0x3550, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer25                              OFFSET(getStruct<T>, {0x3618, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer26                              OFFSET(getStruct<T>, {0x3660, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool9                              OFFSET(getStruct<T>, {0x36A8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult21                                 OFFSET(getStruct<T>, {0x36F0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer27                              OFFSET(getStruct<T>, {0x3710, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer5                             OFFSET(getStruct<T>, {0x3758, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive6                                OFFSET(getStruct<T>, {0x37C8, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool10                             OFFSET(getStruct<T>, {0x3890, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer28                              OFFSET(getStruct<T>, {0x38D8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult22                                 OFFSET(getStruct<T>, {0x3920, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer29                              OFFSET(getStruct<T>, {0x3940, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult23                                 OFFSET(getStruct<T>, {0x3988, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer30                              OFFSET(getStruct<T>, {0x39A8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult24                                 OFFSET(getStruct<T>, {0x39F0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer6                             OFFSET(getStruct<T>, {0x3A10, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive7                                OFFSET(getStruct<T>, {0x3A80, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer31                              OFFSET(getStruct<T>, {0x3B48, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool11                             OFFSET(getStruct<T>, {0x3B90, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer7                             OFFSET(getStruct<T>, {0x3BD8, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive8                                OFFSET(getStruct<T>, {0x3C48, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer32                              OFFSET(getStruct<T>, {0x3D10, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool12                             OFFSET(getStruct<T>, {0x3D58, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult50                            OFFSET(getStruct<T>, {0x3DA0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult51                            OFFSET(getStruct<T>, {0x3DC8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer33                              OFFSET(getStruct<T>, {0x3DF0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult25                                 OFFSET(getStruct<T>, {0x3E38, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose2                                 OFFSET(getStruct<T>, {0x3E58, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult26                                 OFFSET(getStruct<T>, {0x3E68, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine5                                 OFFSET(getStruct<T>, {0x3E88, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive9                                OFFSET(getStruct<T>, {0x3F50, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive10                               OFFSET(getStruct<T>, {0x4018, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer8                             OFFSET(getStruct<T>, {0x40E0, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer9                             OFFSET(getStruct<T>, {0x4150, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult27                                 OFFSET(getStruct<T>, {0x41C0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer34                              OFFSET(getStruct<T>, {0x41E0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult28                                 OFFSET(getStruct<T>, {0x4228, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine6                                 OFFSET(getStruct<T>, {0x4248, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive11                               OFFSET(getStruct<T>, {0x4310, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult52                            OFFSET(getStruct<T>, {0x43D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult53                            OFFSET(getStruct<T>, {0x4400, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer35                              OFFSET(getStruct<T>, {0x4428, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult29                                 OFFSET(getStruct<T>, {0x4470, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose3                                 OFFSET(getStruct<T>, {0x4490, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult30                                 OFFSET(getStruct<T>, {0x44A0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine7                                 OFFSET(getStruct<T>, {0x44C0, 200, 0, 0})


	/// Functions
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.Fauna IdleTurn
	// void Fauna IdleTurn(FPoseLink InPose IdleTurn, FPoseLink& Fauna IdleTurn);                                               // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.Fauna Idle
	// void Fauna Idle(FPoseLink InPose Idle, FPoseLink& Fauna Idle);                                                           // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1ebf994] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3(); // [0x1ebf994] BlueprintEvent       
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.AnimNotify_FallExit
	// void AnimNotify_FallExit();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.AnimNotify_LandAddExit
	// void AnimNotify_LandAddExit();                                                                                           // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.AnimNotify_LandEnter
	// void AnimNotify_LandEnter();                                                                                             // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.ExecuteUbergraph_Burt_AnimBP
	// void ExecuteUbergraph_Burt_AnimBP(int32_t EntryPoint);                                                                   // [0x1ebf994] Final                
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
/// Size: 0x4658 (0x0007A0 - 0x004DF8)
class UGrandma_AnimBP_C : public UFortAIFaunaAnimInstance_Grandma
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 19960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x7A0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0x7A8, 116, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x820, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x828, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x830, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x850, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0x878, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0x8A0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0x8C8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult4                             OFFSET(getStruct<T>, {0x8F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult5                             OFFSET(getStruct<T>, {0x918, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult6                             OFFSET(getStruct<T>, {0x940, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0x968, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0x9B0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0x9D0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0xA18, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0xA38, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0xA80, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0xAA0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult3                                  OFFSET(getStruct<T>, {0xAE8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0xB08, 200, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root1                                         OFFSET(getStruct<T>, {0xBD0, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0xBF0, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer4                               OFFSET(getStruct<T>, {0xCA0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer5                               OFFSET(getStruct<T>, {0xCE8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0xD30, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root2                                         OFFSET(getStruct<T>, {0xD78, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose1                              OFFSET(getStruct<T>, {0xD98, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer6                               OFFSET(getStruct<T>, {0xE48, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root3                                         OFFSET(getStruct<T>, {0xE90, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult7                             OFFSET(getStruct<T>, {0xEB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult8                             OFFSET(getStruct<T>, {0xED8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult9                             OFFSET(getStruct<T>, {0xF00, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult10                            OFFSET(getStruct<T>, {0xF28, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult11                            OFFSET(getStruct<T>, {0xF50, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult12                            OFFSET(getStruct<T>, {0xF78, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult13                            OFFSET(getStruct<T>, {0xFA0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult14                            OFFSET(getStruct<T>, {0xFC8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult15                            OFFSET(getStruct<T>, {0xFF0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult16                            OFFSET(getStruct<T>, {0x1018, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult17                            OFFSET(getStruct<T>, {0x1040, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult18                            OFFSET(getStruct<T>, {0x1068, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult19                            OFFSET(getStruct<T>, {0x1090, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult20                            OFFSET(getStruct<T>, {0x10B8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult21                            OFFSET(getStruct<T>, {0x10E0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult22                            OFFSET(getStruct<T>, {0x1108, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer7                               OFFSET(getStruct<T>, {0x1130, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult4                                  OFFSET(getStruct<T>, {0x1178, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer8                               OFFSET(getStruct<T>, {0x1198, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult5                                  OFFSET(getStruct<T>, {0x11E0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer9                               OFFSET(getStruct<T>, {0x1200, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult6                                  OFFSET(getStruct<T>, {0x1248, 32, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 OFFSET(getStruct<T>, {0x1268, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0x1330, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool1                              OFFSET(getStruct<T>, {0x13A0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer10                              OFFSET(getStruct<T>, {0x13E8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer11                              OFFSET(getStruct<T>, {0x1430, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult7                                  OFFSET(getStruct<T>, {0x1478, 32, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive1                                OFFSET(getStruct<T>, {0x1498, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0x1560, 112, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult23                            OFFSET(getStruct<T>, {0x15D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult24                            OFFSET(getStruct<T>, {0x15F8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer12                              OFFSET(getStruct<T>, {0x1620, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult8                                  OFFSET(getStruct<T>, {0x1668, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  OFFSET(getStruct<T>, {0x1688, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult9                                  OFFSET(getStruct<T>, {0x1698, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine1                                 OFFSET(getStruct<T>, {0x16B8, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive2                                OFFSET(getStruct<T>, {0x1780, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer2                             OFFSET(getStruct<T>, {0x1848, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult10                                 OFFSET(getStruct<T>, {0x18B8, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer3                             OFFSET(getStruct<T>, {0x18D8, 112, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer13                              OFFSET(getStruct<T>, {0x1948, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer14                              OFFSET(getStruct<T>, {0x1990, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x19D8, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool2                              OFFSET(getStruct<T>, {0x1A00, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              OFFSET(getStruct<T>, {0x1A48, 240, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive3                                OFFSET(getStruct<T>, {0x1B38, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool3                              OFFSET(getStruct<T>, {0x1C00, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0x1C48, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult11                                 OFFSET(getStruct<T>, {0x1C70, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine2                                 OFFSET(getStruct<T>, {0x1C90, 200, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0x1D58, 72, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x1DA0, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x1DC0, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot1                                         OFFSET(getStruct<T>, {0x1DE0, 72, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK                                         OFFSET(getStruct<T>, {0x1E28, 248, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot2                                         OFFSET(getStruct<T>, {0x1F20, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot3                                         OFFSET(getStruct<T>, {0x1F68, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x1FB0, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose2                                OFFSET(getStruct<T>, {0x2028, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose3                                OFFSET(getStruct<T>, {0x2050, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool4                              OFFSET(getStruct<T>, {0x2078, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend1                             OFFSET(getStruct<T>, {0x20C0, 240, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose4                                OFFSET(getStruct<T>, {0x21B0, 40, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot4                                         OFFSET(getStruct<T>, {0x21D8, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive4                                OFFSET(getStruct<T>, {0x2220, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult25                            OFFSET(getStruct<T>, {0x22E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult26                            OFFSET(getStruct<T>, {0x2310, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult27                            OFFSET(getStruct<T>, {0x2338, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult28                            OFFSET(getStruct<T>, {0x2360, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer15                              OFFSET(getStruct<T>, {0x2388, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult12                                 OFFSET(getStruct<T>, {0x23D0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer16                              OFFSET(getStruct<T>, {0x23F0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult13                                 OFFSET(getStruct<T>, {0x2438, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose1                                 OFFSET(getStruct<T>, {0x2458, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult14                                 OFFSET(getStruct<T>, {0x2468, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine3                                 OFFSET(getStruct<T>, {0x2488, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer17                              OFFSET(getStruct<T>, {0x2550, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend2                             OFFSET(getStruct<T>, {0x2598, 240, 0, 0})
	SMember(FFortAnimNode_QuadrupedSlopeWarping)       FortAnimGraphNode_QuadrupedSlopeWarping                     OFFSET(getStruct<T>, {0x2688, 1480, 0, 0})
	SMember(FFortAnimNode_WeightedLookAt)              FortAnimGraphNode_WeightedLookAt                            OFFSET(getStruct<T>, {0x2C50, 592, 0, 0})
	SMember(FAnimNode_Inertialization)                 AnimGraphNode_Inertialization                               OFFSET(getStruct<T>, {0x2EA0, 272, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               OFFSET(getStruct<T>, {0x2FB0, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose1                               OFFSET(getStruct<T>, {0x3078, 120, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer18                              OFFSET(getStruct<T>, {0x30F0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool5                              OFFSET(getStruct<T>, {0x3138, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult29                            OFFSET(getStruct<T>, {0x3180, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult30                            OFFSET(getStruct<T>, {0x31A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult31                            OFFSET(getStruct<T>, {0x31D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult32                            OFFSET(getStruct<T>, {0x31F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult33                            OFFSET(getStruct<T>, {0x3220, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult34                            OFFSET(getStruct<T>, {0x3248, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult35                            OFFSET(getStruct<T>, {0x3270, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult36                            OFFSET(getStruct<T>, {0x3298, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult37                            OFFSET(getStruct<T>, {0x32C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult38                            OFFSET(getStruct<T>, {0x32E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult39                            OFFSET(getStruct<T>, {0x3310, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult40                            OFFSET(getStruct<T>, {0x3338, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult41                            OFFSET(getStruct<T>, {0x3360, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult42                            OFFSET(getStruct<T>, {0x3388, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult43                            OFFSET(getStruct<T>, {0x33B0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult44                            OFFSET(getStruct<T>, {0x33D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult45                            OFFSET(getStruct<T>, {0x3400, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult46                            OFFSET(getStruct<T>, {0x3428, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer19                              OFFSET(getStruct<T>, {0x3450, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer20                              OFFSET(getStruct<T>, {0x3498, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool6                              OFFSET(getStruct<T>, {0x34E0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult15                                 OFFSET(getStruct<T>, {0x3528, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer21                              OFFSET(getStruct<T>, {0x3548, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer22                              OFFSET(getStruct<T>, {0x3590, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool7                              OFFSET(getStruct<T>, {0x35D8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult16                                 OFFSET(getStruct<T>, {0x3620, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult47                            OFFSET(getStruct<T>, {0x3640, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult48                            OFFSET(getStruct<T>, {0x3668, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult49                            OFFSET(getStruct<T>, {0x3690, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult50                            OFFSET(getStruct<T>, {0x36B8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult51                            OFFSET(getStruct<T>, {0x36E0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult52                            OFFSET(getStruct<T>, {0x3708, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult53                            OFFSET(getStruct<T>, {0x3730, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult54                            OFFSET(getStruct<T>, {0x3758, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer23                              OFFSET(getStruct<T>, {0x3780, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult17                                 OFFSET(getStruct<T>, {0x37C8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer24                              OFFSET(getStruct<T>, {0x37E8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult18                                 OFFSET(getStruct<T>, {0x3830, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer25                              OFFSET(getStruct<T>, {0x3850, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult19                                 OFFSET(getStruct<T>, {0x3898, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer26                              OFFSET(getStruct<T>, {0x38B8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult20                                 OFFSET(getStruct<T>, {0x3900, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult55                            OFFSET(getStruct<T>, {0x3920, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine4                                 OFFSET(getStruct<T>, {0x3948, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult21                                 OFFSET(getStruct<T>, {0x3A10, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer27                              OFFSET(getStruct<T>, {0x3A30, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult22                                 OFFSET(getStruct<T>, {0x3A78, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer28                              OFFSET(getStruct<T>, {0x3A98, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult23                                 OFFSET(getStruct<T>, {0x3AE0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer29                              OFFSET(getStruct<T>, {0x3B00, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult24                                 OFFSET(getStruct<T>, {0x3B48, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult56                            OFFSET(getStruct<T>, {0x3B68, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine5                                 OFFSET(getStruct<T>, {0x3B90, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult25                                 OFFSET(getStruct<T>, {0x3C58, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer30                              OFFSET(getStruct<T>, {0x3C78, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult26                                 OFFSET(getStruct<T>, {0x3CC0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer31                              OFFSET(getStruct<T>, {0x3CE0, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive5                                OFFSET(getStruct<T>, {0x3D28, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer4                             OFFSET(getStruct<T>, {0x3DF0, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool8                              OFFSET(getStruct<T>, {0x3E60, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer32                              OFFSET(getStruct<T>, {0x3EA8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult27                                 OFFSET(getStruct<T>, {0x3EF0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer33                              OFFSET(getStruct<T>, {0x3F10, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult28                                 OFFSET(getStruct<T>, {0x3F58, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer34                              OFFSET(getStruct<T>, {0x3F78, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool9                              OFFSET(getStruct<T>, {0x3FC0, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive6                                OFFSET(getStruct<T>, {0x4008, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer5                             OFFSET(getStruct<T>, {0x40D0, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool10                             OFFSET(getStruct<T>, {0x4140, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer35                              OFFSET(getStruct<T>, {0x4188, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer36                              OFFSET(getStruct<T>, {0x41D0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult29                                 OFFSET(getStruct<T>, {0x4218, 32, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive7                                OFFSET(getStruct<T>, {0x4238, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer6                             OFFSET(getStruct<T>, {0x4300, 112, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer37                              OFFSET(getStruct<T>, {0x4370, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool11                             OFFSET(getStruct<T>, {0x43B8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer38                              OFFSET(getStruct<T>, {0x4400, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool12                             OFFSET(getStruct<T>, {0x4448, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive8                                OFFSET(getStruct<T>, {0x4490, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer7                             OFFSET(getStruct<T>, {0x4558, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive9                                OFFSET(getStruct<T>, {0x45C8, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer8                             OFFSET(getStruct<T>, {0x4690, 112, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult57                            OFFSET(getStruct<T>, {0x4700, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult58                            OFFSET(getStruct<T>, {0x4728, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer39                              OFFSET(getStruct<T>, {0x4750, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult30                                 OFFSET(getStruct<T>, {0x4798, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose2                                 OFFSET(getStruct<T>, {0x47B8, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult31                                 OFFSET(getStruct<T>, {0x47C8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine6                                 OFFSET(getStruct<T>, {0x47E8, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive10                               OFFSET(getStruct<T>, {0x48B0, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer9                             OFFSET(getStruct<T>, {0x4978, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult32                                 OFFSET(getStruct<T>, {0x49E8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer40                              OFFSET(getStruct<T>, {0x4A08, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult33                                 OFFSET(getStruct<T>, {0x4A50, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine7                                 OFFSET(getStruct<T>, {0x4A70, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool13                             OFFSET(getStruct<T>, {0x4B38, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive11                               OFFSET(getStruct<T>, {0x4B80, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult59                            OFFSET(getStruct<T>, {0x4C48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult60                            OFFSET(getStruct<T>, {0x4C70, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer41                              OFFSET(getStruct<T>, {0x4C98, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult34                                 OFFSET(getStruct<T>, {0x4CE0, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose3                                 OFFSET(getStruct<T>, {0x4D00, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult35                                 OFFSET(getStruct<T>, {0x4D10, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine8                                 OFFSET(getStruct<T>, {0x4D30, 200, 0, 0})


	/// Functions
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.Fauna Jump
	// void Fauna Jump(FPoseLink& Fauna Jump);                                                                                  // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.Fauna IdleTurn
	// void Fauna IdleTurn(FPoseLink InPose IdleTurn, FPoseLink& Fauna IdleTurn);                                               // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.Fauna Idle
	// void Fauna Idle(FPoseLink InPose Idle, FPoseLink& Fauna Idle);                                                           // [0x1ebf994] HasOutParms|BlueprintCallable 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1ebf994] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.AnimNotify_FallExit
	// void AnimNotify_FallExit();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.AnimNotify_LandAddExit
	// void AnimNotify_LandAddExit();                                                                                           // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.AnimNotify_LandEnter
	// void AnimNotify_LandEnter();                                                                                             // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.ExecuteUbergraph_Grandma_AnimBP
	// void ExecuteUbergraph_Grandma_AnimBP(int32_t EntryPoint);                                                                // [0x1ebf994] Final                
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

