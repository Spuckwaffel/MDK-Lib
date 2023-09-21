
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: UMG

/// Class /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget
/// Size: 0x0078 (0x0003E8 - 0x000460)
class UCreativeVideoPlayerFullScreenWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	CMember(USoundSourceBus*)                          SourceBus                                                   ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(USoundClass*)                              SoundClass                                                  ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	SMember(FDataTableRowHandle)                       HoldToSkipAction                                            ___ OFFSET(get<T>, {0x410, 16, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_Skip                                                 ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UImage*)                                   Image_VideoTexture                                          ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	DMember(float)                                     SkipButtonTimeout                                           ___ OFFSET(get<float>, {0x430, 4, 0, 0})
	CMember(UAudioComponent*)                          SoundComponent                                              ___ OFFSET(get<T>, {0x448, 8, 0, 0})
};

