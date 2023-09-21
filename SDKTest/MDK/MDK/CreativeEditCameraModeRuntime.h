
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController
/// Size: 0x0030 (0x000368 - 0x000398)
class AFortCreativeEditCameraController : public AFortFirstPersonCameraController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	SMember(FCreativeOptionVariableBase)               WantsToImmersiveEdit                                        OFFSET(get<T>, {0x368, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.ServerSetImmersiveEdit
	// void ServerSetImmersiveEdit(bool bWantsToImmersiveEdit, bool bIsCreativeEditModeEnabled);                                // [0x9a45438] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.OnWantsToImmersiveEditChanged
	// void OnWantsToImmersiveEditChanged(UFortCreativeOption* CreativeOption, char IndexValue);                                // [0x9a45374] Final|Native|Private 
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.OnCreativeEditModeChanged
	// void OnCreativeEditModeChanged(bool bIsCreativeEditModeEnabled);                                                         // [0x9a452f4] Final|Native|Private 
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.HandleWeaponEquipped
	// void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);                                              // [0x9a45230] Final|Native|Private 
};

