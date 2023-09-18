/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Overlay.

/// Struct /Script/Overlay.OverlayItem
/// Size: 0x0030 (0x000000 - 0x000030)
class FOverlayItem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FTimespan)                                 StartTime                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTimespan)                                 EndTime                                                     ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   Text                                                        ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FVector2D)                                 Position                                                    ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Class /Script/Overlay.Overlays
/// Size: 0x0000 (0x000028 - 0x000028)
class UOverlays : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Overlay.BasicOverlays
/// Size: 0x0010 (0x000028 - 0x000038)
class UBasicOverlays : public UOverlays
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FOverlayItem>)                      Overlays                                                    ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Overlay.LocalizedOverlays
/// Size: 0x0058 (0x000028 - 0x000080)
class ULocalizedOverlays : public UOverlays
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UBasicOverlays*)                           DefaultOverlays                                             ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TMap<FString, UBasicOverlays*>)            LocaleToOverlaysMap                                         ___ OFFSET(get<T>, {0x30, 80, 0, 0})
};

