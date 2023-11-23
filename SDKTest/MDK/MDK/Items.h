
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay
/// dependency: SpecialSurfaceCoverageRuntime
/// dependency: VictoryCrownsRuntime

/// Class /RankedPermanentQuests/Items/B_CosmeticStatObject_HabaneroProgression_Season27.B_CosmeticStatObject_HabaneroProgression_Season27_C
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UB_CosmeticStatObject_HabaneroProgression_Season27_C : public UFortCosmeticStatObject_HabaneroProgressionSeasonal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /RankedPermanentQuests/Items/B_CosmeticStatObject_HabaneroProgression_Season26.B_CosmeticStatObject_HabaneroProgression_Season26_C
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UB_CosmeticStatObject_HabaneroProgression_Season26_C : public UFortCosmeticStatObject_HabaneroProgressionSeasonal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /RankedPermanentQuests/Items/B_CosmeticStatObject_HabaneroProgression.B_CosmeticStatObject_HabaneroProgression_C
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UB_CosmeticStatObject_HabaneroProgression_C : public UFortCosmeticStatObject_HabaneroProgression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /SpecialSurfaceCoverage/Items/SnowSurfaceCoverageMap_GSC.SnowSurfaceCoverageMap_GSC_C
/// Size: 0x0000 (0x000110 - 0x000110)
class USnowSurfaceCoverageMap_GSC_C : public UFortGameStateComponent_SurfaceCoverageMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /VictoryCrownsGameplay/Items/B_CosmeticStatObject_TotalVictoryCrowns.B_CosmeticStatObject_TotalVictoryCrowns_C
/// Size: 0x0000 (0x000090 - 0x000090)
class UB_CosmeticStatObject_TotalVictoryCrowns_C : public UFortCosmeticStatObject_TotalVictoryCrowns
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /VictoryCrownsGameplay/Items/B_CosmeticStatObject_HasCrown.B_CosmeticStatObject_HasCrown_C
/// Size: 0x0000 (0x000090 - 0x000090)
class UB_CosmeticStatObject_HasCrown_C : public UFortCosmeticStatObject_HasCrown
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /VictoryCrownsGameplay/Items/VictoryCrownGameStateComponent.VictoryCrownGameStateComponent_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UVictoryCrownGameStateComponent_C : public UFortGameStateComponent_VictoryCrowns
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /VictoryCrownsGameplay/Items/B_CosmeticStatObject_TotalRoyalRoyales.B_CosmeticStatObject_TotalRoyalRoyales_C
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UB_CosmeticStatObject_TotalRoyalRoyales_C : public UFortCosmeticStatObject_TotalRoyalRoyales
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /VictoryCrownsGameplay/Items/VictoryCrownComponent.VictoryCrownComponent_C
/// Size: 0x0008 (0x000268 - 0x000270)
class UVictoryCrownComponent_C : public UFortControllerComponent_VictoryCrowns
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x268, 8, 0, 0})


	/// Functions
	// Function /VictoryCrownsGameplay/Items/VictoryCrownComponent.VictoryCrownComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /VictoryCrownsGameplay/Items/VictoryCrownComponent.VictoryCrownComponent_C.ExecuteUbergraph_VictoryCrownComponent
	// void ExecuteUbergraph_VictoryCrownComponent(int32_t EntryPoint);                                                         // [0x101681c] Final                
};

/// Class /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C
/// Size: 0x001A (0x0000C0 - 0x0000DA)
class UVictoryCrownFrontEndPawnComponent_C : public UFortPawnComponent_VictoryCrownsFrontEnd
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 218;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xC0, 8, 0, 0})
	SMember(FGameplayTag)                              CrownFXCueTag                                               OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	CMember(APlayerPawn_Athena_C*)                     AthenaPawn                                                  OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      AccountHasCrown                                             OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      AppliedCrownFX                                              OFFSET(get<bool>, {0xD9, 1, 0, 0})


	/// Functions
	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.UpdateForGCNL
	// void UpdateForGCNL();                                                                                                    // [0x101681c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6
	// void OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6(FName StatName, int32_t StatValue);                                  // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.PlaylistChanged
	// void PlaylistChanged();                                                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x101681c] Event|Public|BlueprintEvent 
	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.ExecuteUbergraph_VictoryCrownFrontEndPawnComponent
	// void ExecuteUbergraph_VictoryCrownFrontEndPawnComponent(int32_t EntryPoint);                                             // [0x101681c] Final                
};

