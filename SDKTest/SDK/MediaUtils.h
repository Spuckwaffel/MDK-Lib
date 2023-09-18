/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MediaUtils.

/// Struct /Script/MediaUtils.MediaPlayerTrackOptions
/// Size: 0x001C (0x000000 - 0x00001C)
class FMediaPlayerTrackOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(int32_t)                                   Audio                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Caption                                                     ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MetaData                                                    ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Script                                                      ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Subtitle                                                    ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   Text                                                        ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   Video                                                       ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/MediaUtils.MediaPlayerOptions
/// Size: 0x0030 (0x000000 - 0x000030)
class FMediaPlayerOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FMediaPlayerTrackOptions)                  Tracks                                                      ___ OFFSET(get<T>, {0x0, 28, 0, 0})
	SMember(FTimespan)                                 SeekTime                                                    ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(EMediaPlayerOptionBooleanOverride)         PlayOnOpen                                                  ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EMediaPlayerOptionBooleanOverride)         Loop                                                        ___ OFFSET(get<T>, {0x29, 1, 0, 0})
};

/// Enum /Script/MediaUtils.EMediaPlayerOptionBooleanOverride
/// Size: 0x04
enum EMediaPlayerOptionBooleanOverride : uint8_t
{
	EMediaPlayerOptionBooleanOverride__UseMediaPlayerSetting0                        = 0,
	EMediaPlayerOptionBooleanOverride__Enabled1                                      = 1,
	EMediaPlayerOptionBooleanOverride__Disabled2                                     = 2,
	EMediaPlayerOptionBooleanOverride__EMediaPlayerOptionBooleanOverride_MAX3        = 3
};

