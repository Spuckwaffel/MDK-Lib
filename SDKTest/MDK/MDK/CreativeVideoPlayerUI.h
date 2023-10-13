
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: UMG

/// Class /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget
/// Size: 0x0078 (0x000400 - 0x000478)
class UCreativeVideoPlayerFullScreenWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	CMember(USoundSourceBus*)                          SourceBus                                                   OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(USoundClass*)                              SoundClass                                                  OFFSET(get<T>, {0x420, 8, 0, 0})
	SMember(FDataTableRowHandle)                       HoldToSkipAction                                            OFFSET(getStruct<T>, {0x428, 16, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_Skip                                                 OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UImage*)                                   Image_VideoTexture                                          OFFSET(get<T>, {0x440, 8, 0, 0})
	DMember(float)                                     SkipButtonTimeout                                           OFFSET(get<float>, {0x448, 4, 0, 0})
	CMember(UAudioComponent*)                          SoundComponent                                              OFFSET(get<T>, {0x460, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.SetExternalComponents
	// void SetExternalComponents(UMediaTexture* VideoTextureExt, USoundSourceBus* ExtSourceBus);                               // [0x9c03914] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionProgress
	// void OnSkipButtonActionProgress(float HeldPercent);                                                                      // [0x9c03898] Final|Native|Private 
	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionComplete
	// void OnSkipButtonActionComplete();                                                                                       // [0x9c03884] Final|Native|Private 
};

