
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
	CMember(USoundSourceBus*)                          SourceBus                                                   OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(USoundClass*)                              SoundClass                                                  OFFSET(get<T>, {0x408, 8, 0, 0})
	SMember(FDataTableRowHandle)                       HoldToSkipAction                                            OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_Skip                                                 OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UImage*)                                   Image_VideoTexture                                          OFFSET(get<T>, {0x428, 8, 0, 0})
	DMember(float)                                     SkipButtonTimeout                                           OFFSET(get<float>, {0x430, 4, 0, 0})
	CMember(UAudioComponent*)                          SoundComponent                                              OFFSET(get<T>, {0x448, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.SetExternalComponents
	// void SetExternalComponents(UMediaTexture* VideoTextureExt, USoundSourceBus* ExtSourceBus);                               // [0x9a621fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionProgress
	// void OnSkipButtonActionProgress(float HeldPercent);                                                                      // [0x9a62180] Final|Native|Private 
	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionComplete
	// void OnSkipButtonActionComplete();                                                                                       // [0x9a6216c] Final|Native|Private 
};

