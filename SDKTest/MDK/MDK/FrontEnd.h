
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteGameFramework

/// Class /Game/FrontEnd/FrontEnd_GameMode.FrontEnd_GameMode_C
/// Size: 0x0008 (0x0007F0 - 0x0007F8)
class AFrontEnd_GameMode_C : public AFortGameModeFrontEnd
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2040;

public:
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x7F0, 8, 0, 0})
};

/// Class /Game/FrontEnd/FrontEnd_PlayerController.FrontEnd_PlayerController_C
/// Size: 0x0000 (0x002CF0 - 0x002CF0)
class AFrontEnd_PlayerController_C : public AFortPlayerControllerFrontEnd
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 11504;

public:
};

/// Class /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C
/// Size: 0x0038 (0x000290 - 0x0002C8)
class AHBOnboardingFlow_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UFortQuestItemDefinition_Campaign*)        PlayPeriodicEventMovieQuest                                 ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	DMember(bool)                                      bPlayedPeriodicEventMovie                                   ___ OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      bHasRecheckedNeedToPlayPeriodicEventMovie                   ___ OFFSET(get<bool>, {0x2A9, 1, 0, 0})
	SMember(FDataTableRowHandle)                       PlayPeriodicEventCineObjective                              ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(UClass*)                                   PeriodicEventMovieAnnouncementClass                         ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
};

/// Class /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C
/// Size: 0x0028 (0x000310 - 0x000338)
class AAnnounce_EventCine_C : public AFortClientAnnouncement_Cinematic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UMediaSource*)                             EventMediaSource                                            ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	DMember(bool)                                      AllowSkipping                                               ___ OFFSET(get<bool>, {0x328, 1, 0, 0})
	CMember(UFortMediaSubtitlesPlayer*)                EventSubtitlesPlayer                                        ___ OFFSET(get<T>, {0x330, 8, 0, 0})
};

/// Class /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_Storm2018Cine.Announce_Storm2018Cine_C
/// Size: 0x0000 (0x000338 - 0x000338)
class AAnnounce_Storm2018Cine_C : public AAnnounce_EventCine_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C
/// Size: 0x00B0 (0x000A00 - 0x000AB0)
class AStoreCamera_Blueprint_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2736;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Mesh_DarkenBG                                               ___ OFFSET(get<T>, {0xA08, 8, 0, 0})
	CMember(UCameraComponent*)                         CameraPlaceholderGround                                     ___ OFFSET(get<T>, {0xA10, 8, 0, 0})
	DMember(float)                                     ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0      ___ OFFSET(get<float>, {0xA18, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0      ___ OFFSET(get<T>, {0xA1C, 1, 0, 0})
	CMember(UTimelineComponent*)                       ChoicePack                                                  ___ OFFSET(get<T>, {0xA20, 8, 0, 0})
	DMember(float)                                     Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9      ___ OFFSET(get<float>, {0xA28, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9      ___ OFFSET(get<T>, {0xA2C, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline                                                    ___ OFFSET(get<T>, {0xA30, 8, 0, 0})
	SMember(FVector)                                   CameraGroundLoc                                             ___ OFFSET(get<T>, {0xA38, 24, 0, 0})
	SMember(FRotator)                                  CameraGroundRot                                             ___ OFFSET(get<T>, {0xA50, 24, 0, 0})
	SMember(FVector)                                   CameraOriginalLoc                                           ___ OFFSET(get<T>, {0xA68, 24, 0, 0})
	SMember(FRotator)                                  CameraOriginalRot                                           ___ OFFSET(get<T>, {0xA80, 24, 0, 0})
	DMember(bool)                                      CameraInStartPos                                            ___ OFFSET(get<bool>, {0xA98, 1, 0, 0})
	CMember(AStorePinataMaster_Parent_C*)              PinataInLevel                                               ___ OFFSET(get<T>, {0xAA0, 8, 0, 0})
	CMember(AStoreCardReveal_Parent_C*)                CardRevealInLevel                                           ___ OFFSET(get<T>, {0xAA8, 8, 0, 0})
};

/// Class /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_Parent.StoreCardReveal_Parent_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AStoreCardReveal_Parent_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          PinataSceneRoot                                             ___ OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Game/FrontEnd/FrontEndSettingsBP.FrontEndSettingsBP_C
/// Size: 0x0008 (0x0002B0 - 0x0002B8)
class AFrontEndSettingsBP_C : public AFrontEndSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C
/// Size: 0x0018 (0x000A00 - 0x000A18)
class AHeroesCamera_Blueprint_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2584;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA00, 8, 0, 0})
	DMember(bool)                                      MouseDown                                                   ___ OFFSET(get<bool>, {0xA08, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          Cached_Pawn                                                 ___ OFFSET(get<T>, {0xA10, 8, 0, 0})
};

/// Class /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C
/// Size: 0x0018 (0x000A00 - 0x000A18)
class ALoginCamera_Blueprint_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2584;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh                                                  ___ OFFSET(get<T>, {0xA08, 8, 0, 0})
	CMember(UCameraComponent*)                         LoginCamera                                                 ___ OFFSET(get<T>, {0xA10, 8, 0, 0})
};

/// Class /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AStorePinataMaster_Parent_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          PinataSceneRoot                                             ___ OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C
/// Size: 0x0008 (0x000A00 - 0x000A08)
class AVaultCamera_Blueprint_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2568;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA00, 8, 0, 0})
};

/// Class /Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C
/// Size: 0x0008 (0x000A00 - 0x000A08)
class ASpecialEventsCamera_Blueprint_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2568;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA00, 8, 0, 0})
};

