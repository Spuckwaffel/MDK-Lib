
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AndroidPermission.AndroidPermissionCallbackProxy
/// Size: 0x0058 (0x000028 - 0x000080)
class UAndroidPermissionCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UMulticastDelegate)                        OnPermissionsGrantedDynamicDelegate                         OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/AndroidPermission.AndroidPermissionFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	// bool CheckPermission(FString permission);                                                                                // [0x87aa80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
	// UAndroidPermissionCallbackProxy* AcquirePermissions(TArray<FString>& Permissions);                                       // [0x87a9b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

