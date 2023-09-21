
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: PictureInPictureCore
/// dependency: UMG

/// Class /Script/PictureInPictureFNEvents.LiveEventHUDAd
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class ULiveEventHUDAd : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UPictureInPictureFNEventsCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PictureInPictureFNEvents.PictureInPictureFNEventsClient
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPictureInPictureFNEventsClient : public UPictureInPictureClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController
/// Size: 0x0030 (0x0006D8 - 0x000708)
class UPictureInPictureFNEventsController : public UPictureInPictureMediaController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1800;

public:
	CMember(UPictureInPictureFNEventsClient*)          FNEventsClient                                              ___ OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(ULiveEventHUDAd*)                          HUDAdvertWidget                                             ___ OFFSET(get<T>, {0x6E0, 8, 0, 0})
};

