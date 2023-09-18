/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Blueprints.

/// Struct /GrindRail/Blueprints/GrindRail_TipOptions.GrindRail_TipOptions
/// Size: 0x0002 (0x000000 - 0x000002)
class FGrindRail_TipOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      CapStartTip_14_BE02D3114E8D77DE637964B9E3B9BF78             ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      CapEndTip_15_1938E7644D71206872041C932B0DF129               ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /GrindRail/Blueprints/GrindRail_Booster_Directional.GrindRail_Booster_Directional
/// Size: 0x0013 (0x000000 - 0x000013)
class FGrindRail_Booster_Directional : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 19;

public:
	DMember(double)                                    LocationOnRailinTiles_21_4C298D7E43D6D531E9294D9EBF6D35AF   ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    LengthinTiles_22_72B92E3B4647946BC77E16B7C38E3157           ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(bool)                                      FlipLocation_24_A14D038B4CE3B99F148CE080581B9B64            ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(TEnumAsByte<GleefulRake_BoosterMode>)      PositiveMode_18_F5DE4E09428A0EE407A054BBEDC68176            ___ OFFSET(get<T>, {0x11, 1, 0, 0})
	CMember(TEnumAsByte<GleefulRake_BoosterMode>)      NegativeMode_20_6D6ECC5845390875BEC167B11090B704            ___ OFFSET(get<T>, {0x12, 1, 0, 0})
};

/// Class /Game/Blueprints/Camera/Original/PlayerTakeDamage_CameraShake.PlayerTakeDamage_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UPlayerTakeDamage_CameraShake_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraFocalPoint.Athena_PlayerCameraFocalPoint_C
/// Size: 0x0000 (0x001B60 - 0x001B60)
class UAthena_PlayerCameraFocalPoint_C : public UFortCameraMode_FocalPoint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7008;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeBase.v2_PlayerCameraModeBase_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv2_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeMelee.v2_PlayerCameraModeMelee_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv2_PlayerCameraModeMelee_C : public Uv2_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Original/Ranged3PCamera.Ranged3PCamera_C
/// Size: 0x0000 (0x0001E8 - 0x0001E8)
class URanged3PCamera_C : public UFort3PCam_Default
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeRanged.v2_PlayerCameraModeRanged_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv2_PlayerCameraModeRanged_C : public Uv2_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingVeryShortRange.v2_PlayerCameraModeTargetingVeryShortRange_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv2_PlayerCameraModeTargetingVeryShortRange_C : public Uv2_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeBase.v3_PlayerCameraModeBase_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv3_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeRanged.v3_PlayerCameraModeRanged_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv3_PlayerCameraModeRanged_C : public Uv3_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingVeryShortRange.v3_PlayerCameraModeTargetingVeryShortRange_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv3_PlayerCameraModeTargetingVeryShortRange_C : public Uv3_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeBase.v1_PlayerCameraModeBase_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv1_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingVeryShortRange.v1_PlayerCameraModeTargetingVeryShortRange_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv1_PlayerCameraModeTargetingVeryShortRange_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeMelee.v1_PlayerCameraModeMelee_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv1_PlayerCameraModeMelee_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Original/HoverboardCameraMode.HoverboardCameraMode_C
/// Size: 0x0000 (0x001B60 - 0x001B60)
class UHoverboardCameraMode_C : public UFortHoverboardCameraMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7008;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_RespawnedAir.Athena_PlayerCameraMode_RespawnedAir_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraMode_RespawnedAir_C : public UFortCameraMode_RespawnedAir
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingPistol.v1_PlayerCameraModeTargetingPistol_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv1_PlayerCameraModeTargetingPistol_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeMelee.v3_PlayerCameraModeMelee_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv3_PlayerCameraModeMelee_C : public Uv3_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_LongRange.Targeting3PCamera_LongRange_C
/// Size: 0x0000 (0x0001E8 - 0x0001E8)
class UTargeting3PCamera_LongRange_C : public UFort3PCam_Targeting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingPistol.v2_PlayerCameraModeTargetingPistol_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv2_PlayerCameraModeTargetingPistol_C : public Uv2_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/PlayerCameraMode_DBNO.PlayerCameraMode_DBNO_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UPlayerCameraMode_DBNO_C : public Uv3_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingScope.v1_PlayerCameraModeTargetingScope_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv1_PlayerCameraModeTargetingScope_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingRifle.v1_PlayerCameraModeTargetingRifle_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv1_PlayerCameraModeTargetingRifle_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_VeryShortRange.Targeting3PCamera_VeryShortRange_C
/// Size: 0x0000 (0x0001E8 - 0x0001E8)
class UTargeting3PCamera_VeryShortRange_C : public UFort3PCam_Targeting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingScope.v2_PlayerCameraModeTargetingScope_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv2_PlayerCameraModeTargetingScope_C : public Uv2_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingScope.v3_PlayerCameraModeTargetingScope_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv3_PlayerCameraModeTargetingScope_C : public Uv3_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Original/Default3PCamera.Default3PCamera_C
/// Size: 0x0000 (0x0001E8 - 0x0001E8)
class UDefault3PCamera_C : public UFort3PCam_Default
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
};

/// Class /Game/Blueprints/Camera/Original/CinematicCamera_MatineeTransition.CinematicCamera_MatineeTransition_C
/// Size: 0x0000 (0x000068 - 0x000068)
class UCinematicCamera_MatineeTransition_C : public UFortCinematicCamera
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Game/Blueprints/Camera/Original/Targeting3PCamera.Targeting3PCamera_C
/// Size: 0x0000 (0x0001E8 - 0x0001E8)
class UTargeting3PCamera_C : public UFort3PCam_Targeting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingAssault.v3_PlayerCameraModeTargetingAssault_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv3_PlayerCameraModeTargetingAssault_C : public Uv3_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingRifle.v2_PlayerCameraModeTargetingRifle_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv2_PlayerCameraModeTargetingRifle_C : public Uv2_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_MidRange.Targeting3PCamera_MidRange_C
/// Size: 0x0000 (0x0001E8 - 0x0001E8)
class UTargeting3PCamera_MidRange_C : public UFort3PCam_Targeting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
};

/// Class /Game/Blueprints/Camera/Original/Sniper3PCamera.Sniper3PCamera_C
/// Size: 0x0000 (0x0001E8 - 0x0001E8)
class USniper3PCamera_C : public UFort3PCam_Default
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeRanged.v1_PlayerCameraModeRanged_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv1_PlayerCameraModeRanged_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingRifle.v3_PlayerCameraModeTargetingRifle_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv3_PlayerCameraModeTargetingRifle_C : public Uv3_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingPistol.v3_PlayerCameraModeTargetingPistol_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class Uv3_PlayerCameraModeTargetingPistol_C : public Uv3_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_Scope.Targeting3PCamera_Scope_C
/// Size: 0x0000 (0x0001E8 - 0x0001E8)
class UTargeting3PCamera_Scope_C : public UFort3PCam_Targeting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
};

/// Class /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterfacePlayerPawn_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeBase.Athena_PlayerCameraModeBase_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRanged.Athena_PlayerCameraModeRanged_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraModeRanged_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeRanged.STW_PlayerCameraModeRanged_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class USTW_PlayerCameraModeRanged_C : public UAthena_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRangedTargeting.Athena_PlayerCameraModeRangedTargeting_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraModeRangedTargeting_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeMelee.Athena_PlayerCameraModeMelee_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraModeMelee_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeRangedTargeting.STW_PlayerCameraModeRangedTargeting_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class USTW_PlayerCameraModeRangedTargeting_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCamera_DBNO.Athena_PlayerCamera_DBNO_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCamera_DBNO_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_WaterSprintBoost.Athena_PlayerCameraMode_WaterSprintBoost_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraMode_WaterSprintBoost_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeMelee.STW_PlayerCameraModeMelee_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class USTW_PlayerCameraModeMelee_C : public UAthena_PlayerCameraModeMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/StW/STW_PlayerCameraModeBase.STW_PlayerCameraModeBase_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class USTW_PlayerCameraModeBase_C : public USTW_PlayerCameraModeMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveDive.Athena_PlayerCameraModeSkydiveDive_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraModeSkydiveDive_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraHoisted.Athena_PlayerCameraHoisted_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraHoisted_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveGlide.Athena_PlayerCameraModeSkydiveGlide_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraModeSkydiveGlide_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveParachute.Athena_PlayerCameraModeSkydiveParachute_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraModeSkydiveParachute_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingTethered.Athena_PlayerCameraModeTargetingTethered_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraModeTargetingTethered_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Original/MainPlayerCamera.MainPlayerCamera_C
/// Size: 0x0000 (0x002D00 - 0x002D00)
class AMainPlayerCamera_C : public AFortPlayerCameraZone
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 11520;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_1P.Athena_PlayerCameraMode_1P_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraMode_1P_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Harveting_stock_1P.Athena_PlayerCameraMode_Harveting_stock_1P_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraMode_Harveting_stock_1P_C : public UAthena_PlayerCameraMode_1P_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/FirstPerson/PlayerCameraMode1P.PlayerCameraMode1P_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UPlayerCameraMode1P_C : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/FirstPerson/PlayerCameraMode1P_Targeting.PlayerCameraMode1P_Targeting_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UPlayerCameraMode1P_Targeting_C : public UPlayerCameraMode1P_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_HidingProp.Athena_PlayerCameraMode_HidingProp_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraMode_HidingProp_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_HidingProp_Teleport.Athena_PlayerCameraMode_HidingProp_Teleport_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraMode_HidingProp_Teleport_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C
/// Size: 0x0048 (0x000318 - 0x000360)
class ABP_TeleportationDrone_C : public APawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(USkeletalMeshComponentBudgeted*)           SkeletalMeshComponentBudgeted                               ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(USceneComponent*)                          Scene                                                       ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	DMember(double)                                    AnimPlayRate                                                ___ OFFSET(get<double>, {0x330, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 StaticMeshMID                                               ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	DMember(bool)                                      TeleportIn                                                  ___ OFFSET(get<bool>, {0x340, 1, 0, 0})
	CMember(UParticleSystemComponent*)                 CharacterAttached                                           ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	DMember(bool)                                      InLobby                                                     ___ OFFSET(get<bool>, {0x350, 1, 0, 0})
	CMember(USkeletalMeshComponent*)                   Mesh_for_Attachment                                         ___ OFFSET(get<T>, {0x358, 8, 0, 0})
};

/// Class /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C
/// Size: 0x0070 (0x000318 - 0x000388)
class ABP_VictoryDrone_C : public APawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(USkeletalMeshComponentBudgeted*)           SkeletalMeshComponentBudgeted                               ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(USceneComponent*)                          Scene                                                       ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  SpawnOutAnimEndedDispatcher                                 ___ OFFSET(get<T>, {0x330, 16, 0, 0})
	DMember(double)                                    AnimPlayRate                                                ___ OFFSET(get<double>, {0x340, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 StaticMeshMID                                               ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	DMember(bool)                                      TeleportIn                                                  ___ OFFSET(get<bool>, {0x350, 1, 0, 0})
	DMember(bool)                                      IsAthena                                                    ___ OFFSET(get<bool>, {0x351, 1, 0, 0})
	CMember(AFortPawn*)                                TargetPlayer                                                ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 CharacterAttached                                           ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(bool)                                      InLobby                                                     ___ OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(bool)                                      isNPC                                                       ___ OFFSET(get<bool>, {0x369, 1, 0, 0})
	SMember(FName)                                     AttachPoint                                                 ___ OFFSET(get<T>, {0x36C, 4, 0, 0})
	DMember(bool)                                      isDecoy                                                     ___ OFFSET(get<bool>, {0x370, 1, 0, 0})
	CMember(USkeletalMeshComponent*)                   Mesh_for_Attachment                                         ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(USoundBase*)                               SoundOnNPCDeath                                             ___ OFFSET(get<T>, {0x380, 8, 0, 0})
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Harveting_1blade_1P.Athena_PlayerCameraMode_Harveting_1blade_1P_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraMode_Harveting_1blade_1P_C : public UAthena_PlayerCameraMode_1P_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Blueprints/Components/GSC_MiniMapDataOverride.GSC_MiniMapDataOverride_C
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UGSC_MiniMapDataOverride_C : public UFortGameStateComponent_MiniMapDataOverride
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /GrindRail/Blueprints/GE_DisableAirControl_GrindRail.GE_DisableAirControl_GrindRail_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_DisableAirControl_GrindRail_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /GrindRail/Blueprints/GE_LowGrav_GrindRail.GE_LowGrav_GrindRail_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_LowGrav_GrindRail_C : public UGE_Athena_TillLandFallDamageImmunity_Grant_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /GrindRail/Blueprints/GE_GrindRail_DeviceDamage.GE_GrindRail_DeviceDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_GrindRail_DeviceDamage_C : public UGet_DirectDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /GrindRail/Blueprints/GE_GrindingIncludingInAir.GE_GrindingIncludingInAir_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_GrindingIncludingInAir_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /GrindRail/Blueprints/GA_GrindRail_KeybindDisplay.GA_GrindRail_KeybindDisplay_C
/// Size: 0x0008 (0x000B48 - 0x000B50)
class UGA_GrindRail_KeybindDisplay_C : public UFortGameplayAbility_KeybindDisplay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2896;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB48, 8, 0, 0})
};

/// Class /GrindRail/Blueprints/GE_GrindRail_VehicleDamage.GE_GrindRail_VehicleDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_GrindRail_VehicleDamage_C : public UGet_DirectDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /GrindRail/Blueprints/GrindRail_TipComponent.GrindRail_TipComponent_C
/// Size: 0x0000 (0x000620 - 0x000620)
class UGrindRail_TipComponent_C : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
};

/// Class /FortWater/Blueprints/LandscapeWaterInfo.LandscapeWaterInfo_C
/// Size: 0x00A8 (0x000290 - 0x000338)
class ALandscapeWaterInfo_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(double)                                    Flood_Water_Level                                           ___ OFFSET(get<double>, {0x2A0, 8, 0, 0})
	CMember(UTexture2D*)                               Game_Texture__Water_Velocity_and_Height                     ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	SMember(FTransform)                                LS_Transform                                                ___ OFFSET(get<T>, {0x2B0, 96, 0, 0})
	SMember(FIntPoint)                                 LS_RT_Res                                                   ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	SMember(FVector2D)                                 Quad_Size                                                   ___ OFFSET(get<T>, {0x318, 16, 0, 0})
	DMember(bool)                                      Use_Terrain_Velocity_and_Height_Texture                     ___ OFFSET(get<bool>, {0x328, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 External_Water_MID_To_Update                                ___ OFFSET(get<T>, {0x330, 8, 0, 0})
};

/// Class /GrindRail/Blueprints/BGA_GrindRail.BGA_GrindRail_C
/// Size: 0x02D0 (0x000BD0 - 0x000EA0)
class ABGA_GrindRail_C : public AFortGrindRail
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3744;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xBD0, 8, 0, 0})
	CMember(UInstancedStaticMeshComponent*)            booster_InstancedStaticMesh                                 ___ OFFSET(get<T>, {0xBD8, 8, 0, 0})
	CMember(USplineComponent*)                         Spline                                                      ___ OFFSET(get<T>, {0xBE0, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0xBE8, 8, 0, 0})
	DMember(double)                                    DistancePerBoosterArrow                                     ___ OFFSET(get<double>, {0xBF0, 8, 0, 0})
	CMember(TArray<FGrindRail_Booster_Directional>)    Boosters                                                    ___ OFFSET(get<T>, {0xBF8, 16, 0, 0})
	DMember(bool)                                      Full_Circle                                                 ___ OFFSET(get<bool>, {0xC08, 1, 0, 0})
	CMember(UStaticMeshComponent*)                     StartTip                                                    ___ OFFSET(get<T>, {0xC10, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     EndTip                                                      ___ OFFSET(get<T>, {0xC18, 8, 0, 0})
	SMember(FGrindRail_TipOptions)                     Tip_Caps                                                    ___ OFFSET(get<T>, {0xC20, 2, 0, 0})
	SMember(FVector4)                                  EmissiveColor                                               ___ OFFSET(get<T>, {0xC30, 32, 0, 0})
	SMember(FLinearColor)                              RedColor                                                    ___ OFFSET(get<T>, {0xC50, 16, 0, 0})
	SMember(FLinearColor)                              GreenColor                                                  ___ OFFSET(get<T>, {0xC60, 16, 0, 0})
	SMember(FLinearColor)                              BlueColor                                                   ___ OFFSET(get<T>, {0xC70, 16, 0, 0})
	SMember(FLinearColor)                              YellowColor                                                 ___ OFFSET(get<T>, {0xC80, 16, 0, 0})
	CMember(USkeletalMeshComponent*)                   Player_Mesh                                                 ___ OFFSET(get<T>, {0xC90, 8, 0, 0})
	CMember(UBP_GrindingComponent_C*)                  Grinding_compoent                                           ___ OFFSET(get<T>, {0xC98, 8, 0, 0})
	SMember(FLinearColor)                              SkyBlue                                                     ___ OFFSET(get<T>, {0xCA0, 16, 0, 0})
	SMember(FLinearColor)                              Purple                                                      ___ OFFSET(get<T>, {0xCB0, 16, 0, 0})
	DMember(float)                                     Glow_start_Radius                                           ___ OFFSET(get<float>, {0xCC0, 4, 0, 0})
	DMember(float)                                     Glow_End_Radius                                             ___ OFFSET(get<float>, {0xCC4, 4, 0, 0})
	DMember(float)                                     Glow_start__Intensity                                       ___ OFFSET(get<float>, {0xCC8, 4, 0, 0})
	DMember(float)                                     Glow__end_Intensity                                         ___ OFFSET(get<float>, {0xCCC, 4, 0, 0})
	CMember(TArray<USplineMeshComponent*>)             SplineStaticMesh                                            ___ OFFSET(get<T>, {0xCD0, 16, 0, 0})
	CMember(UMaterialInterface*)                       MaterialOfEmisssive                                         ___ OFFSET(get<T>, {0xCE0, 8, 0, 0})
	DMember(bool)                                      _Glow_start_and_End                                         ___ OFFSET(get<bool>, {0xCE8, 1, 0, 0})
	DMember(int32_t)                                   Last_Index                                                  ___ OFFSET(get<int32_t>, {0xCEC, 4, 0, 0})
	CMember(TEnumAsByte<ColorSelect>)                  Color_Select_Enum                                           ___ OFFSET(get<T>, {0xCF0, 1, 0, 0})
	SMember(FLinearColor)                              Orange                                                      ___ OFFSET(get<T>, {0xCF4, 16, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             BoosterMeshes                                               ___ OFFSET(get<T>, {0xD08, 16, 0, 0})
	DMember(bool)                                      IgnoreEmissiveDistanceFade                                  ___ OFFSET(get<bool>, {0xD18, 1, 0, 0})
	CMember(UInstancedStaticMeshComponent*)            Target                                                      ___ OFFSET(get<T>, {0xD20, 8, 0, 0})
	DMember(bool)                                      Booster_Arrow_style_Select_                                 ___ OFFSET(get<bool>, {0xD28, 1, 0, 0})
	CMember(UInstancedStaticMeshComponent*)            Instance_mesh                                               ___ OFFSET(get<T>, {0xD30, 8, 0, 0})
	DMember(int32_t)                                   Instance_Index                                              ___ OFFSET(get<int32_t>, {0xD38, 4, 0, 0})
	DMember(float)                                     Animation_period                                            ___ OFFSET(get<float>, {0xD3C, 4, 0, 0})
	DMember(bool)                                      SideA_Reverse_animation_direction                           ___ OFFSET(get<bool>, {0xD40, 1, 0, 0})
	DMember(bool)                                      SideB_Reverse_animation_direction                           ___ OFFSET(get<bool>, {0xD41, 1, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               SplineMeshBillboard                                         ___ OFFSET(get<T>, {0xD48, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              TipMesh                                                     ___ OFFSET(get<T>, {0xD68, 32, 0, 0})
	DMember(int32_t)                                   Animation_trailing_length                                   ___ OFFSET(get<int32_t>, {0xD88, 4, 0, 0})
	CMember(UHierarchicalInstancedStaticMeshComponent*) instance_array                                             ___ OFFSET(get<T>, {0xD90, 8, 0, 0})
	DMember(int32_t)                                   instance_meshIndex                                          ___ OFFSET(get<int32_t>, {0xD98, 4, 0, 0})
	CMember(UHierarchicalInstancedStaticMeshComponent*) instance_staic_mesh                                        ___ OFFSET(get<T>, {0xDA0, 8, 0, 0})
	DMember(int32_t)                                   Array_Index                                                 ___ OFFSET(get<int32_t>, {0xDA8, 4, 0, 0})
	DMember(double)                                    ColorEmissiveScale                                          ___ OFFSET(get<double>, {0xDB0, 8, 0, 0})
	CMember(UStaticMesh*)                              Mesh_Rail_Default                                           ___ OFFSET(get<T>, {0xDB8, 8, 0, 0})
	CMember(UStaticMesh*)                              Mesh_Interaction                                            ___ OFFSET(get<T>, {0xDC0, 8, 0, 0})
	DMember(double)                                    SplineMeshLength                                            ___ OFFSET(get<double>, {0xDC8, 8, 0, 0})
	DMember(bool)                                      IsChronoGrindRail                                           ___ OFFSET(get<bool>, {0xDD0, 1, 0, 0})
	DMember(double)                                    BoosterLocalPostionZ                                        ___ OFFSET(get<double>, {0xDD8, 8, 0, 0})
	DMember(double)                                    BoosterLocalPostionX                                        ___ OFFSET(get<double>, {0xDE0, 8, 0, 0})
	DMember(double)                                    BoosterLocalPostionY_Offset                                 ___ OFFSET(get<double>, {0xDE8, 8, 0, 0})
	SMember(FGameplayTag)                              GC_Sprinting                                                ___ OFFSET(get<T>, {0xDF0, 4, 0, 0})
	SMember(FGameplayTag)                              GC_SlowBoosting                                             ___ OFFSET(get<T>, {0xDF4, 4, 0, 0})
	SMember(FGameplayTag)                              GC_FastBoosting                                             ___ OFFSET(get<T>, {0xDF8, 4, 0, 0})
	SMember(FGameplayTag)                              GC_LandOnRail                                               ___ OFFSET(get<T>, {0xDFC, 4, 0, 0})
	SMember(FGameplayTag)                              GC_ImpactPlayer                                             ___ OFFSET(get<T>, {0xE00, 4, 0, 0})
	CMember(UClass*)                                   GE_GrindingIncludingInAir                                   ___ OFFSET(get<T>, {0xE08, 8, 0, 0})
	CMember(USoundLibrary*)                            GrindRailSoundLibrary                                       ___ OFFSET(get<T>, {0xE10, 8, 0, 0})
	CMember(UClass*)                                   GrindRail_TipComponent_Class                                ___ OFFSET(get<T>, {0xE18, 8, 0, 0})
	CMember(USoundMix*)                                GrindingSoundMixMusic                                       ___ OFFSET(get<T>, {0xE20, 8, 0, 0})
	CMember(UMaterialInterface*)                       SplineVineMaterial                                          ___ OFFSET(get<T>, {0xE28, 8, 0, 0})
	SMember(FVector)                                   BoosterScale                                                ___ OFFSET(get<T>, {0xE30, 24, 0, 0})
	DMember(float)                                     ColorDesaturationAmount                                     ___ OFFSET(get<float>, {0xE48, 4, 0, 0})
	SMember(FRotator)                                  ManualTipRotation                                           ___ OFFSET(get<T>, {0xE50, 24, 0, 0})
	DMember(bool)                                      Allow_Manual_Tip_Rotation                                   ___ OFFSET(get<bool>, {0xE68, 1, 0, 0})
	DMember(double)                                    JumpingOffDirectionDetectionTolerance                       ___ OFFSET(get<double>, {0xE70, 8, 0, 0})
	SMember(FScalableFloat)                            MaxAngleBetweenVelocityAndNormalForExitDetection            ___ OFFSET(get<T>, {0xE78, 40, 0, 0})
};

/// Class /GrindRail/Blueprints/BP_GrindingComponent.BP_GrindingComponent_C
/// Size: 0x0360 (0x000C28 - 0x000F88)
class UBP_GrindingComponent_C : public UFortPawnComponent_GrindRail
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3976;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xC28, 8, 0, 0})
	CMember(APlayerPawn_Athena_C*)                     Player                                                      ___ OFFSET(get<T>, {0xC30, 8, 0, 0})
	CMember(UCharacterMovementComponent*)              MovementComponent                                           ___ OFFSET(get<T>, {0xC38, 8, 0, 0})
	DMember(bool)                                      Grinding                                                    ___ OFFSET(get<bool>, {0xC40, 1, 0, 0})
	DMember(float)                                     Delta_Seconds                                               ___ OFFSET(get<float>, {0xC44, 4, 0, 0})
	CMember(UTacticalSprintEnergyComponent_C*)         SprintComponent                                             ___ OFFSET(get<T>, {0xC48, 8, 0, 0})
	SMember(FGameplayTag)                              GC_Sprint                                                   ___ OFFSET(get<T>, {0xC50, 4, 0, 0})
	CMember(USkeletalMeshComponent*)                   PlayerMesh                                                  ___ OFFSET(get<T>, {0xC58, 8, 0, 0})
	DMember(bool)                                      CurrentlyADS                                                ___ OFFSET(get<bool>, {0xC60, 1, 0, 0})
	DMember(double)                                    _new__CurrentSidewaysLeanBoostAmount                        ___ OFFSET(get<double>, {0xC68, 8, 0, 0})
	DMember(double)                                    _new__GoalSidewaysLeanBoostAmount                           ___ OFFSET(get<double>, {0xC70, 8, 0, 0})
	DMember(double)                                    CurrentMaxSpeed                                             ___ OFFSET(get<double>, {0xC78, 8, 0, 0})
	DMember(bool)                                      HitObstacle                                                 ___ OFFSET(get<bool>, {0xC80, 1, 0, 0})
	DMember(bool)                                      AnimLayerActive                                             ___ OFFSET(get<bool>, {0xC81, 1, 0, 0})
	DMember(double)                                    LastRailSwitchTime                                          ___ OFFSET(get<double>, {0xC88, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  JumpedOff                                                   ___ OFFSET(get<T>, {0xC90, 16, 0, 0})
	CMember(ABGA_GrindRail_C*)                         CurrentRail                                                 ___ OFFSET(get<T>, {0xCA0, 8, 0, 0})
	DMember(double)                                    MaximumAngleForSideJump                                     ___ OFFSET(get<double>, {0xCA8, 8, 0, 0})
	DMember(int32_t)                                   SideJump_NumberOfNewLocationsToTry                          ___ OFFSET(get<int32_t>, {0xCB0, 4, 0, 0})
	DMember(double)                                    SideJump_MinSpeedPercentToMaintain                          ___ OFFSET(get<double>, {0xCB8, 8, 0, 0})
	DMember(double)                                    SideJump_MaxSpeedWithoutAnchor                              ___ OFFSET(get<double>, {0xCC0, 8, 0, 0})
	DMember(bool)                                      DrawAnchorDebug                                             ___ OFFSET(get<bool>, {0xCC8, 1, 0, 0})
	SMember(FScalableFloat)                            SF_Sprinting_EnergyToUsePerSecond                           ___ OFFSET(get<T>, {0xCD0, 40, 0, 0})
	SMember(FScalableFloat)                            SF_Sprinting_EnergyToUsePerSecond_Creative                  ___ OFFSET(get<T>, {0xCF8, 40, 0, 0})
	SMember(FScalableFloat)                            SF_LandingSpeedBoost                                        ___ OFFSET(get<T>, {0xD20, 40, 0, 0})
	SMember(FScalableFloat)                            SF_SameRailAnchoring_MaxForwardDistanceMultiplier           ___ OFFSET(get<T>, {0xD48, 40, 0, 0})
	SMember(FScalableFloat)                            SF_SameRailAnchoring_MaxAngle                               ___ OFFSET(get<T>, {0xD70, 40, 0, 0})
	SMember(FScalableFloat)                            SF_InfluenceOfMomentumOnAnchorJump                          ___ OFFSET(get<T>, {0xD98, 40, 0, 0})
	SMember(FScalableFloat)                            SF_NoAnchorJumpDistanceMultiplier                           ___ OFFSET(get<T>, {0xDC0, 40, 0, 0})
	SMember(FScalableFloat)                            SF_MinJumpOffSpeed                                          ___ OFFSET(get<T>, {0xDE8, 40, 0, 0})
	SMember(FScalableFloat)                            SF_JumpHeight                                               ___ OFFSET(get<T>, {0xE10, 40, 0, 0})
	SMember(FScalableFloat)                            SF_JumpDistanceMultiplier                                   ___ OFFSET(get<T>, {0xE38, 40, 0, 0})
	SMember(FScalableFloat)                            SF_SpeedMultiplierWhenImpactedPlayer                        ___ OFFSET(get<T>, {0xE60, 40, 0, 0})
	DMember(float)                                     SF_SideJump_HorizontalAngleMultiplier                       ___ OFFSET(get<float>, {0xE88, 4, 0, 0})
	CMember(UAudioComponent*)                          JumpOnAudio                                                 ___ OFFSET(get<T>, {0xE90, 8, 0, 0})
	DMember(double)                                    LastJumpedTime                                              ___ OFFSET(get<double>, {0xE98, 8, 0, 0})
	CMember(EGrindRailBoosterMode)                     _new__PreviousBoosterMode                                   ___ OFFSET(get<T>, {0xEA0, 1, 0, 0})
	DMember(bool)                                      _new__GenerallyAccelerating                                 ___ OFFSET(get<bool>, {0xEA1, 1, 0, 0})
	SMember(FGameplayTag)                              GC_GenerallyAccelerating                                    ___ OFFSET(get<T>, {0xEA4, 4, 0, 0})
	SMember(FGameplayTagContainer)                     BeginGrindBlockTags                                         ___ OFFSET(get<T>, {0xEA8, 32, 0, 0})
	SMember(FVector)                                   CameraLocationOnStartedGrinding                             ___ OFFSET(get<T>, {0xEC8, 24, 0, 0})
	CMember(AFortGrindRail*)                           WaitingForCamera_SavedGrindRail                             ___ OFFSET(get<T>, {0xEE0, 8, 0, 0})
	DMember(bool)                                      WaitingForCamera                                            ___ OFFSET(get<bool>, {0xEE8, 1, 0, 0})
	CMember(UCameraModifier_Grinding_C*)               CameraModifier                                              ___ OFFSET(get<T>, {0xEF0, 8, 0, 0})
	DMember(bool)                                      StartedGrindFromLand                                        ___ OFFSET(get<bool>, {0xEF8, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFeetLanded                                                ___ OFFSET(get<T>, {0xF00, 16, 0, 0})
	SMember(FScalableFloat)                            SF_MinBounceOffPlayerSpeed                                  ___ OFFSET(get<T>, {0xF10, 40, 0, 0})
	DMember(bool)                                      IgnoreStaticPlacedBuilding                                  ___ OFFSET(get<bool>, {0xF38, 1, 0, 0})
	DMember(bool)                                      UseNativizedGrindingIgnoreActors                            ___ OFFSET(get<bool>, {0xF39, 1, 0, 0})
	DMember(bool)                                      UseNativizedSprintInput                                     ___ OFFSET(get<bool>, {0xF3A, 1, 0, 0})
	SMember(FGameplayTag)                              Start_Grinding_Event_Tag                                    ___ OFFSET(get<T>, {0xF3C, 4, 0, 0})
	SMember(FGameplayTag)                              Stop_Grinding_Event_Tag                                     ___ OFFSET(get<T>, {0xF40, 4, 0, 0})
	SMember(FGameplayTag)                              Start_Sprinting_Event_Tag                                   ___ OFFSET(get<T>, {0xF44, 4, 0, 0})
	DMember(double)                                    SF_SpeedMultiplierOnHitRailCap                              ___ OFFSET(get<double>, {0xF48, 8, 0, 0})
	DMember(double)                                    SF_MinSpeedAfterBouncedOffRailCap                           ___ OFFSET(get<double>, {0xF50, 8, 0, 0})
	SMember(FScalableFloat)                            SF_RemoveGASmashAfterDelay                                  ___ OFFSET(get<T>, {0xF58, 40, 0, 0})
	SMember(FTimerHandle)                              RemoveIsGrindingTimer                                       ___ OFFSET(get<T>, {0xF80, 8, 0, 0})
};

/// Class /GrindRail/Blueprints/GA_GrindRail_Smash.GA_GrindRail_Smash_C
/// Size: 0x0050 (0x000B40 - 0x000B90)
class UGA_GrindRail_Smash_C : public UFortGameplayAbility_ZiplineSmashBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB40, 8, 0, 0})
	DMember(float)                                     SF_IntervalSmash                                            ___ OFFSET(get<float>, {0xB48, 4, 0, 0})
	SMember(FTimerHandle)                              SurroundingCheckTimer                                       ___ OFFSET(get<T>, {0xB50, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB58, 8, 0, 0})
	SMember(FVector)                                   SmashBoxExtent                                              ___ OFFSET(get<T>, {0xB60, 24, 0, 0})
	CMember(UBP_GrindingComponent_C*)                  GrindingComp                                                ___ OFFSET(get<T>, {0xB78, 8, 0, 0})
	DMember(bool)                                      bSmashNonPlayerBuilt                                        ___ OFFSET(get<bool>, {0xB80, 1, 0, 0})
	CMember(UClass*)                                   DeviceDamageEffect                                          ___ OFFSET(get<T>, {0xB88, 8, 0, 0})
};

/// Class /GrindRail/Blueprints/GE_GrindRail_IsGrinding.GE_GrindRail_IsGrinding_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_GrindRail_IsGrinding_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /GrindRail/Blueprints/GA_Action_ADS_GrindRail.GA_Action_ADS_GrindRail_C
/// Size: 0x0038 (0x000B58 - 0x000B90)
class UGA_Action_ADS_GrindRail_C : public UFortGameplayAbility_Action
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(APlayerPawn_Athena_C*)                     Player                                                      ___ OFFSET(get<T>, {0xB60, 8, 0, 0})
	SMember(FGameplayTagContainer)                     BlockingTags                                                ___ OFFSET(get<T>, {0xB68, 32, 0, 0})
	CMember(UBP_GrindingComponent_C*)                  GrindingComponent                                           ___ OFFSET(get<T>, {0xB88, 8, 0, 0})
};

/// Class /GrindRail/Blueprints/CameraModifier_Grinding.CameraModifier_Grinding_C
/// Size: 0x01A8 (0x0009C0 - 0x000B68)
class UCameraModifier_Grinding_C : public UFortCameraModifier_Grinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2920;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x9C0, 8, 0, 0})
	CMember(UBP_GrindingComponent_C*)                  GrindingComp                                                ___ OFFSET(get<T>, {0x9C8, 8, 0, 0})
	DMember(double)                                    CurrentForward                                              ___ OFFSET(get<double>, {0x9D0, 8, 0, 0})
	DMember(double)                                    CurrentRight                                                ___ OFFSET(get<double>, {0x9D8, 8, 0, 0})
	DMember(double)                                    CurrentLean                                                 ___ OFFSET(get<double>, {0x9E0, 8, 0, 0})
	DMember(double)                                    CurrentFOV                                                  ___ OFFSET(get<double>, {0x9E8, 8, 0, 0})
	DMember(double)                                    CurrentOffset                                               ___ OFFSET(get<double>, {0x9F0, 8, 0, 0})
	SMember(FVector)                                   CurrentOffset_Vec                                           ___ OFFSET(get<T>, {0x9F8, 24, 0, 0})
	DMember(double)                                    CurrentUp                                                   ___ OFFSET(get<double>, {0xA10, 8, 0, 0})
	SMember(FVector)                                   SavedLocation                                               ___ OFFSET(get<T>, {0xA18, 24, 0, 0})
	DMember(bool)                                      LocationLocked                                              ___ OFFSET(get<bool>, {0xA30, 1, 0, 0})
	DMember(double)                                    TimeWhenLocked                                              ___ OFFSET(get<double>, {0xA38, 8, 0, 0})
	DMember(double)                                    TimeWhenUnlocked                                            ___ OFFSET(get<double>, {0xA40, 8, 0, 0})
	DMember(float)                                     ADS_Alpha                                                   ___ OFFSET(get<float>, {0xA48, 4, 0, 0})
	CMember(UCurveFloat*)                              AlphaCurve                                                  ___ OFFSET(get<T>, {0xA50, 8, 0, 0})
	SMember(FVector)                                   StartingLocation                                            ___ OFFSET(get<T>, {0xA58, 24, 0, 0})
	DMember(bool)                                      TurningOff                                                  ___ OFFSET(get<bool>, {0xA70, 1, 0, 0})
	DMember(bool)                                      SF_SnapToGrindingLocation                                   ___ OFFSET(get<bool>, {0xA71, 1, 0, 0})
	SMember(FScalableFloat)                            BaseRightOffsetMultiplier                                   ___ OFFSET(get<T>, {0xA78, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingRightOffsetMultiplier                              ___ OFFSET(get<T>, {0xAA0, 40, 0, 0})
	SMember(FScalableFloat)                            BoostedRightOffsetMultiplier                                ___ OFFSET(get<T>, {0xAC8, 40, 0, 0})
	SMember(FScalableFloat)                            BaseUpOffsetMultiplier                                      ___ OFFSET(get<T>, {0xAF0, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingUpOffsetMultiplier                                 ___ OFFSET(get<T>, {0xB18, 40, 0, 0})
	SMember(FScalableFloat)                            BoostedUpOffsetMultiplier                                   ___ OFFSET(get<T>, {0xB40, 40, 0, 0})
};

/// Enum /GrindRail/Blueprints/GleefulRake_BoosterMode.GleefulRake_BoosterMode
/// Size: 0x04
enum GleefulRake_BoosterMode : uint8_t
{
	GleefulRake_BoosterMode__NewEnumerator00                                         = 0,
	GleefulRake_BoosterMode__NewEnumerator11                                         = 1,
	GleefulRake_BoosterMode__NewEnumerator42                                         = 2,
	GleefulRake_BoosterMode__GleefulRake_MAX3                                        = 3
};

/// Enum /GrindRail/Blueprints/ColorSelect.ColorSelect
/// Size: 0x08
enum ColorSelect : uint8_t
{
	ColorSelect__NewEnumerator00                                                     = 0,
	ColorSelect__NewEnumerator11                                                     = 1,
	ColorSelect__NewEnumerator22                                                     = 2,
	ColorSelect__NewEnumerator33                                                     = 3,
	ColorSelect__NewEnumerator44                                                     = 4,
	ColorSelect__NewEnumerator55                                                     = 5,
	ColorSelect__NewEnumerator66                                                     = 6,
	ColorSelect__ColorSelect_MAX7                                                    = 7
};

