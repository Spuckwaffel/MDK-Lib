
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/DistortedWeaponsUI.ChromeWeaponInfoWidget
/// Size: 0x0020 (0x000328 - 0x000348)
class UChromeWeaponInfoWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(UFortHUDContext*)                          HUDContext                                                  OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UFortWorldMultiItemXPComponent*)           CurrentXpComponent                                          OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UAthenaItemTierWidget*)                    ItemTierWidget                                              OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UFortKeybindWidget*)                       KeybindWidget                                               OFFSET(get<T>, {0x340, 8, 0, 0})


	/// Functions
	// Function /Script/DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponUpgraded
	// void OnWeaponUpgraded();                                                                                                 // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponStartUpgrading
	// void OnWeaponStartUpgrading();                                                                                           // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponRemoved
	// void OnWeaponRemoved();                                                                                                  // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponEquipped
	// void OnWeaponEquipped();                                                                                                 // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/DistortedWeaponsUI.ChromeWeaponInfoWidget.OnReadyToUpgradeWeapon
	// void OnReadyToUpgradeWeapon(EFortRarity NextRarity);                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/DistortedWeaponsUI.ChromeWeaponInfoWidget.OnGainedXp
	// void OnGainedXp(float CurrentXPPercentage);                                                                              // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleXpChanged
	// void HandleXpChanged(float XPDelta, float CurrentXPPercentage);                                                          // [0x9ce9240] Final|Native|Protected 
	// Function /Script/DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponUpgraded
	// void HandleWeaponUpgraded();                                                                                             // [0x9ce922c] Final|Native|Protected 
	// Function /Script/DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponUnEquipped
	// void HandleWeaponUnEquipped();                                                                                           // [0x9ce9218] Final|Native|Protected 
	// Function /Script/DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponEquipped
	// void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);                                              // [0x9ce8fc8] Final|Native|Protected 
	// Function /Script/DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleUpgradeTriggered
	// void HandleUpgradeTriggered(float ReloadTime, EFortWeaponReloadType ReloadType);                                         // [0x9ce8f04] Final|Native|Protected 
	// Function /Script/DistortedWeaponsUI.ChromeWeaponInfoWidget.HandlePowerUpPending
	// void HandlePowerUpPending();                                                                                             // [0x9ce8ef0] Final|Native|Protected 
	// Function /Script/DistortedWeaponsUI.ChromeWeaponInfoWidget.GetCurrentWeaponRarity
	// EFortRarity GetCurrentWeaponRarity();                                                                                    // [0x9ce8ecc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

