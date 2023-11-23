
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController
/// Size: 0x0030 (0x000398 - 0x0003C8)
class AFortCreativeEditCameraController : public AFortFirstPersonCameraController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	SMember(FCreativeOptionVariableBase)               WantsToImmersiveEdit                                        OFFSET(getStruct<T>, {0x398, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.ServerSetImmersiveEdit
	// void ServerSetImmersiveEdit(bool bWantsToImmersiveEdit, bool bIsCreativeEditModeEnabled);                                // [0xa340328] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.OnWantsToImmersiveEditChanged
	// void OnWantsToImmersiveEditChanged(UFortCreativeOption* CreativeOption, char IndexValue);                                // [0xa340264] Final|Native|Private 
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.OnCreativeEditModeChanged
	// void OnCreativeEditModeChanged(bool bIsCreativeEditModeEnabled);                                                         // [0xa3401e4] Final|Native|Private 
	// Function /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController.HandleWeaponEquipped
	// void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);                                              // [0xa340120] Final|Native|Private 
};

