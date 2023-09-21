
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo
/// Size: 0x0120 (0x000028 - 0x000148)
class UEpicBaseStreamingVideo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FMulticastInlineDelegate)                  VideoOnTerminalError                                        ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnSuccess                                              ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnClosed                                               ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnEndReached                                           ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnOpenTimeout                                          ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnResumed                                              ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(UEpicStreamMediaSource*)                   MediaSource                                                 ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(UMediaPlayer*)                             MediaPlayer                                                 ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FIntPoint)                                 VideoSize                                                   ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(USoundSubmixBase*)                         DefaultSubmix                                               ___ OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(USoundSubmixBase*)                         LicensedSubmix                                              ___ OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(UMediaSoundComponent*)                     MediaSoundComponent                                         ___ OFFSET(get<T>, {0x140, 8, 0, 0})
};

/// Struct /Script/EpicMediaBasePlayer.BaseMediaDelayConfig
/// Size: 0x0050 (0x000000 - 0x000050)
class FBaseMediaDelayConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UMediaTexture*)                            MediaTexture                                                ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Enum /Script/EpicMediaBasePlayer.EBaseMediaTerminalErrorReason
/// Size: 0x06
enum EBaseMediaTerminalErrorReason : uint8_t
{
	EBaseMediaTerminalErrorReason__Unknown0                                          = 0,
	EBaseMediaTerminalErrorReason__Source1                                           = 1,
	EBaseMediaTerminalErrorReason__Player2                                           = 2,
	EBaseMediaTerminalErrorReason__UCP3                                              = 3,
	EBaseMediaTerminalErrorReason__OpenTimeout4                                      = 4,
	EBaseMediaTerminalErrorReason__EBaseMediaTerminalErrorReason_MAX5                = 5
};

/// Enum /Script/EpicMediaBasePlayer.EBaseMediaDelayAction
/// Size: 0x04
enum EBaseMediaDelayAction : uint8_t
{
	EBaseMediaDelayAction__Open0                                                     = 0,
	EBaseMediaDelayAction__Stop1                                                     = 1,
	EBaseMediaDelayAction__Start2                                                    = 2,
	EBaseMediaDelayAction__EBaseMediaDelayAction_MAX3                                = 3
};

/// Enum /Script/EpicMediaBasePlayer.EBaseMediaPlayerState
/// Size: 0x08
enum EBaseMediaPlayerState : uint8_t
{
	EBaseMediaPlayerState__None0                                                     = 0,
	EBaseMediaPlayerState__Released1                                                 = 1,
	EBaseMediaPlayerState__Stopped2                                                  = 2,
	EBaseMediaPlayerState__Started3                                                  = 3,
	EBaseMediaPlayerState__Opened4                                                   = 4,
	EBaseMediaPlayerState__Playing5                                                  = 5,
	EBaseMediaPlayerState__Error6                                                    = 6,
	EBaseMediaPlayerState__EBaseMediaPlayerState_MAX7                                = 7
};

