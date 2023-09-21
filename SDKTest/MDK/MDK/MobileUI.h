
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: PlayerAugmentsUI
/// dependency: UMG

/// Class /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_Selection_Proxy.WBP_Mobile_Augment_Selection_Proxy_C
/// Size: 0x0008 (0x0003B8 - 0x0003C0)
class UWBP_Mobile_Augment_Selection_Proxy_C : public UFortMobileHUDElementProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x3B8, 8, 0, 0})


	/// Functions
	// Function /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_Selection_Proxy.WBP_Mobile_Augment_Selection_Proxy_C.ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy
	// void ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy(int32_t EntryPoint);                                            // [0x1ebf994] Final                
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/BB_AugmentsList.BB_AugmentsList_C
/// Size: 0x0000 (0x000120 - 0x000120)
class UBB_AugmentsList_C : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/BBE_AugmentRotate.BBE_AugmentRotate_C
/// Size: 0x0000 (0x000080 - 0x000080)
class UBBE_AugmentRotate_C : public UFortMobileActionButtonBehaviorExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/BB_ExitAugment.BB_ExitAugment_C
/// Size: 0x0000 (0x000120 - 0x000120)
class UBB_ExitAugment_C : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/BB_SwitchAugment.BB_SwitchAugment_C
/// Size: 0x0000 (0x000120 - 0x000120)
class UBB_SwitchAugment_C : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_Selection_Preview.WBP_Mobile_Augment_Selection_Preview_C
/// Size: 0x0000 (0x000318 - 0x000318)
class UWBP_Mobile_Augment_Selection_Preview_C : public UHUDLayoutToolV2_WidgetPreview
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/BB_RerollAugment.BB_RerollAugment_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UBB_RerollAugment_C : public UFortMobileActionButtonBehavior_RerollAugments
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/BBE_AugmentShoot.BBE_AugmentShoot_C
/// Size: 0x0000 (0x000090 - 0x000090)
class UBBE_AugmentShoot_C : public UFortMobileActionBBE_AugmentShoot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_SelectionTimer.WBP_Mobile_Augment_SelectionTimer_C
/// Size: 0x0010 (0x000348 - 0x000358)
class UWBP_Mobile_Augment_SelectionTimer_C : public UFortMobilePlayerAugmentTimer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UWBP_Augment_SelectionTimer_C*)            WBP_Augment_SelectionTimer                                  OFFSET(get<T>, {0x350, 8, 0, 0})


	/// Functions
	// Function /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_SelectionTimer.WBP_Mobile_Augment_SelectionTimer_C.BP_OnHUDElementVisibilityChanged
	// void BP_OnHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer, bool bForceCollapse);            // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_SelectionTimer.WBP_Mobile_Augment_SelectionTimer_C.ExecuteUbergraph_WBP_Mobile_Augment_SelectionTimer
	// void ExecuteUbergraph_WBP_Mobile_Augment_SelectionTimer(int32_t EntryPoint);                                             // [0x1ebf994] Final|HasDefaults    
};

