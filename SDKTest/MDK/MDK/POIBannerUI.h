
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/POIBannerUI.POIBannerToastSocialAvatar
/// Size: 0x0008 (0x000310 - 0x000318)
class UPOIBannerToastSocialAvatar : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(UFortSocialAvatarIcon*)                    Icon_SocialAvatar                                           OFFSET(get<T>, {0x310, 8, 0, 0})


	/// Functions
	// Function /Script/POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatarTexture
	// void SetSocialAvatarTexture(TWeakObjectPtr<UTexture2D*> AvatarTexture);                                                  // [0x9bcb954] Final|Native|Protected|BlueprintCallable 
	// Function /Script/POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatar
	// void SetSocialAvatar(AFortPlayerState* PlayerState);                                                                     // [0x9bcb78c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/POIBannerUI.POIBannerToastWidgetBase
/// Size: 0x0048 (0x000310 - 0x000358)
class UPOIBannerToastWidgetBase : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FFortPrioritizedWidgetData)                PrioritizationData                                          OFFSET(get<T>, {0x350, 2, 0, 0})


	/// Functions
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.OnStompFailed
	// void OnStompFailed();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.OnStompedByOtherWidget
	// void OnStompedByOtherWidget();                                                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeInactive
	// void K2_OnBecomeInactive();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeActive
	// void K2_OnBecomeActive();                                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.GetLocationTextFromTag
	// FText GetLocationTextFromTag(FGameplayTag& LocationTag);                                                                 // [0x9bcb698] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

