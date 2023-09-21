
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: Abilities
/// dependency: Building
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C
/// Size: 0x001B (0x000B35 - 0x000B50)
class UGAT_Creative_TriggeredAbility_C : public UGAT_TriggeredAbility_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2896;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	CMember(TArray<FName>)                             OverriddenPropertyNames                                     ___ OFFSET(get<T>, {0xB40, 16, 0, 0})
};

/// Class /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C
/// Size: 0x0010 (0x000B50 - 0x000B60)
class UGAT_Creative_TriggeredAbility_Pawn_C : public UGAT_Creative_TriggeredAbility_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2912;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB50, 8, 0, 0})
	CMember(AFortPawn*)                                AbilityOwner                                                ___ OFFSET(get<T>, {0xB58, 8, 0, 0})
};

/// Class /Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C
/// Size: 0x0044 (0x000B60 - 0x000BA4)
class UGA_Creative_OnKillSiphon_C : public UGAT_Creative_TriggeredAbility_Pawn_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2980;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB60, 8, 0, 0})
	CMember(AFortGameStateAthena*)                     GameState                                                   ___ OFFSET(get<T>, {0xB68, 8, 0, 0})
	DMember(bool)                                      IsCreativeOrPlayground                                      ___ OFFSET(get<bool>, {0xB70, 1, 0, 0})
	CMember(UClass*)                                   GE_HealPlayer                                               ___ OFFSET(get<T>, {0xB78, 8, 0, 0})
	DMember(bool)                                      bShouldConvertExcessHealthToShields                         ___ OFFSET(get<bool>, {0xB80, 1, 0, 0})
	CMember(UClass*)                                   ShieldGE                                                    ___ OFFSET(get<T>, {0xB88, 8, 0, 0})
	SMember(FGameplayTag)                              ConsumedCue                                                 ___ OFFSET(get<T>, {0xB90, 4, 0, 0})
	DMember(bool)                                      bDebugBypasLocalMapEnable                                   ___ OFFSET(get<bool>, {0xB94, 1, 0, 0})
	DMember(bool)                                      bAttemptHealthRestore                                       ___ OFFSET(get<bool>, {0xB95, 1, 0, 0})
	DMember(bool)                                      bAttemptMatsRestore                                         ___ OFFSET(get<bool>, {0xB96, 1, 0, 0})
	SMember(FName)                                     NameGrantWood                                               ___ OFFSET(get<T>, {0xB98, 4, 0, 0})
	SMember(FName)                                     NameGrantStone                                              ___ OFFSET(get<T>, {0xB9C, 4, 0, 0})
	SMember(FName)                                     NameGrantMetal                                              ___ OFFSET(get<T>, {0xBA0, 4, 0, 0})
};

/// Class /Game/Creative/BuildingActors/GameplayActors/GE_LaunchedByVent.GE_LaunchedByVent_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_LaunchedByVent_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Creative/Sets/MilitaryBase/Props/CreativeTeamColors.CreativeTeamColors_C
/// Size: 0x0030 (0x0002A0 - 0x0002D0)
class UCreativeTeamColors_C : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(TArray<FLinearColor>)                      TeamLightColors                                             ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      TeamSelectorColors                                          ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      TeamBoldColors                                              ___ OFFSET(get<T>, {0x2C0, 16, 0, 0})
};

/// Class /Game/Creative/Devices/Common/Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreative_CommonDeviceFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Creative/Sets/MilitaryBase/BuildingPieces/MilitaryBase_Door_01.MilitaryBase_Door_01_C
/// Size: 0x0090 (0x000D30 - 0x000DC0)
class AMilitaryBase_Door_01_C : public AParent_BuildingWall_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3520;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xD30, 8, 0, 0})
	CMember(UBoxComponent*)                            DoorSlideOverlapVolume                                      ___ OFFSET(get<T>, {0xD38, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     DoorStaticMesh1                                             ___ OFFSET(get<T>, {0xD40, 8, 0, 0})
	DMember(float)                                     Timeline_0_EmissiveColorLerp_75727DFA4F9CA24A009D23ADC967876F ___ OFFSET(get<float>, {0xD48, 4, 0, 0})
	DMember(float)                                     Timeline_0_SlideAnimation_75727DFA4F9CA24A009D23ADC967876F  ___ OFFSET(get<float>, {0xD4C, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_75727DFA4F9CA24A009D23ADC967876F      ___ OFFSET(get<T>, {0xD50, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline                                                    ___ OFFSET(get<T>, {0xD58, 8, 0, 0})
	DMember(int32_t)                                   NumberOfPawnsWithinVolume                                   ___ OFFSET(get<int32_t>, {0xD60, 4, 0, 0})
	DMember(bool)                                      DoorOpen                                                    ___ OFFSET(get<bool>, {0xD64, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 DoorMID                                                     ___ OFFSET(get<T>, {0xD68, 8, 0, 0})
	SMember(FLinearColor)                              DefaultDoorEmissiveValue                                    ___ OFFSET(get<T>, {0xD70, 16, 0, 0})
	SMember(FLinearColor)                              ActiveDoorEmissiveValue                                     ___ OFFSET(get<T>, {0xD80, 16, 0, 0})
	CMember(UMaterialInterface*)                       DoorBaseMaterial                                            ___ OFFSET(get<T>, {0xD90, 8, 0, 0})
	CMember(UMaterialInterface*)                       Door_Source_Materials                                       ___ OFFSET(get<T>, {0xD98, 8, 0, 0})
	CMember(USoundBase*)                               SlidingDoorClose_Sound                                      ___ OFFSET(get<T>, {0xDA0, 8, 0, 0})
	CMember(USoundBase*)                               SlidingDoorOpen_Sound                                       ___ OFFSET(get<T>, {0xDA8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDoorOpened                                                ___ OFFSET(get<T>, {0xDB0, 16, 0, 0})
};

/// Struct /Game/Creative/Devices/Common/PawnHighlight.PawnHighlight
/// Size: 0x0030 (0x000000 - 0x000030)
class FPawnHighlight : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     Priority_28_E2E1B5344846E187B9C11B863A7F0698                ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FLinearColor)                              Inner_21_4CC2801147EA190DE16F59B34F36853E                   ___ OFFSET(get<T>, {0x4, 16, 0, 0})
	SMember(FLinearColor)                              Outer_22_5A1D7D0543D303E8B54B66A7F7BD2E2E                   ___ OFFSET(get<T>, {0x14, 16, 0, 0})
	DMember(float)                                     FresnelBrightness_23_52B0F96447FF640F47DF2895B0602E92       ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     FresnelExponent_24_B427CF0C441AA37ED49833BF7579DE6D         ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     UsesPulse_25_E29229F64E540F0617E4C4987AD77605               ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Enum /Game/Creative/Devices/Common/Enums/ECreativeColorSetType.ECreativeColorSetType
/// Size: 0x05
enum ECreativeColorSetType : uint8_t
{
	ECreativeColorSetType__NewEnumerator00                                           = 0,
	ECreativeColorSetType__NewEnumerator11                                           = 1,
	ECreativeColorSetType__NewEnumerator22                                           = 2,
	ECreativeColorSetType__NewEnumerator33                                           = 3,
	ECreativeColorSetType__ECreativeColorSetType_MAX4                                = 4
};

/// Enum /Game/Creative/Devices/Common/Enums/EAwardScoreType.EAwardScoreType
/// Size: 0x05
enum EAwardScoreType : uint8_t
{
	EAwardScoreType__NewEnumerator00                                                 = 0,
	EAwardScoreType__NewEnumerator11                                                 = 1,
	EAwardScoreType__NewEnumerator22                                                 = 2,
	EAwardScoreType__NewEnumerator33                                                 = 3,
	EAwardScoreType__EAwardScoreType_MAX4                                            = 4
};

/// Enum /Game/Creative/Devices/Common/Enums/ECreativeTeamColor.ECreativeTeamColor
/// Size: 0x19
enum ECreativeTeamColor : uint8_t
{
	ECreativeTeamColor__NewEnumerator00                                              = 0,
	ECreativeTeamColor__NewEnumerator11                                              = 1,
	ECreativeTeamColor__NewEnumerator22                                              = 2,
	ECreativeTeamColor__NewEnumerator33                                              = 3,
	ECreativeTeamColor__NewEnumerator44                                              = 4,
	ECreativeTeamColor__NewEnumerator55                                              = 5,
	ECreativeTeamColor__NewEnumerator66                                              = 6,
	ECreativeTeamColor__NewEnumerator77                                              = 7,
	ECreativeTeamColor__NewEnumerator88                                              = 8,
	ECreativeTeamColor__NewEnumerator99                                              = 9,
	ECreativeTeamColor__NewEnumerator1010                                            = 10,
	ECreativeTeamColor__NewEnumerator1111                                            = 11,
	ECreativeTeamColor__NewEnumerator1212                                            = 12,
	ECreativeTeamColor__NewEnumerator1313                                            = 13,
	ECreativeTeamColor__NewEnumerator1414                                            = 14,
	ECreativeTeamColor__NewEnumerator1515                                            = 15,
	ECreativeTeamColor__NewEnumerator1716                                            = 16,
	ECreativeTeamColor__NewEnumerator1817                                            = 17,
	ECreativeTeamColor__ECreativeTeamColor_MAX18                                     = 18
};

/// Enum /Game/Creative/Devices/Common/EBoolWithUnset.EBoolWithUnset
/// Size: 0x04
enum EBoolWithUnset : uint8_t
{
	EBoolWithUnset__NewEnumerator00                                                  = 0,
	EBoolWithUnset__NewEnumerator11                                                  = 1,
	EBoolWithUnset__NewEnumerator22                                                  = 2,
	EBoolWithUnset__EBoolWithUnset_MAX3                                              = 3
};

