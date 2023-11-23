
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/TypedElementRuntime.TypedElementSelectionSetLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementSelectionSetLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementRuntime.TypedElementSelectionSet
/// Size: 0x0870 (0x000028 - 0x000898)
class UTypedElementSelectionSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2200;

public:
	SMember(FMulticastInlineDelegate)                  OnPreSelectionChange                                        OFFSET(getStruct<T>, {0x828, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectionChange                                           OFFSET(getStruct<T>, {0x838, 16, 0, 0})


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SetSelection
	// bool SetSelection(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // [0x4f78a9c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SelectElements
	// bool SelectElements(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // [0x4f77ff0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SelectElement
	// bool SelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);        // [0x4f77e30] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
	// void RestoreSelectionState(FTypedElementSelectionSetState& InSelectionState);                                            // [0x4f77b18] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature
	// void OnPreChangeDynamic__DelegateSignature(UTypedElementSelectionSet* SelectionSet);                                     // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
	// void OnChangeDynamic__DelegateSignature(UTypedElementSelectionSet* SelectionSet);                                        // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
	// TArray<FScriptTypedElementHandle> K2_GetSelectedElementHandles(UClass* InBaseInterfaceType);                             // [0x4f77a5c] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.IsElementSelected
	// bool IsElementSelected(FScriptTypedElementHandle& InElementHandle, FTypedElementIsSelectedOptions InSelectionOptions);   // [0x4f778a0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
	// bool HasSelectedObjects(UClass* InRequiredClass);                                                                        // [0x4f7759c] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
	// bool HasSelectedElements(UClass* InBaseInterfaceType);                                                                   // [0x4f77498] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
	// UObject* GetTopSelectedObject(UClass* InRequiredClass);                                                                  // [0x4f773cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement
	// FScriptTypedElementHandle GetSelectionElement(FScriptTypedElementHandle& InElementHandle, ETypedElementSelectionMethod InSelectionMethod); // [0x4f7720c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
	// TArray<UObject*> GetSelectedObjects(UClass* InRequiredClass);                                                            // [0x4f76dd4] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
	// int32_t GetNumSelectedElements();                                                                                        // [0x4f76a8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
	// FTypedElementSelectionSetState GetCurrentSelectionState();                                                               // [0x4f765b4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
	// UObject* GetBottomSelectedObject(UClass* InRequiredClass);                                                               // [0x4f762dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.DeselectElements
	// bool DeselectElements(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // [0x4f75c84] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.DeselectElement
	// bool DeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);      // [0x4f75ac4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
	// int32_t CountSelectedObjects(UClass* InRequiredClass);                                                                   // [0x4f757b8] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
	// int32_t CountSelectedElements(UClass* InBaseInterfaceType);                                                              // [0x4f75710] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.ClearSelection
	// bool ClearSelection(FTypedElementSelectionOptions InSelectionOptions);                                                   // [0x4f755b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CanSelectElement
	// bool CanSelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);     // [0x4f753f8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement
	// bool CanDeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);   // [0x4f75130] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers
	// bool AllowSelectionModifiers(FScriptTypedElementHandle& InElementHandle);                                                // [0x4f74f38] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TypedElementRuntime.TypedElementAssetDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementAssetDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementRuntime.TypedElementHierarchyInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementHierarchyInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementRuntime.TypedElementObjectInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementObjectInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementRuntime.TypedElementPrimitiveCustomDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementPrimitiveCustomDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TypedElementRuntime.TypedElementSelectionInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTypedElementSelectionInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionOptions
/// Size: 0x0005 (0x000000 - 0x000005)
class FTypedElementSelectionOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 5;

public:
	DMember(bool)                                      bAllowHidden                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bAllowGroups                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bAllowLegacyNotifications                                   OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bWarnIfLocked                                               OFFSET(get<bool>, {0x3, 1, 0, 0})
	CMember(ETypedElementChildInclusionMethod)         ChildElementInclusionMethod                                 OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionSetState
/// Size: 0x0018 (0x000000 - 0x000018)
class FTypedElementSelectionSetState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<UTypedElementSelectionSet*>) CreatedFromSelectionSet                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/TypedElementRuntime.TypedElementIsSelectedOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FTypedElementIsSelectedOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bAllowIndirect                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionNormalizationOptions
/// Size: 0x0002 (0x000000 - 0x000002)
class FTypedElementSelectionNormalizationOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bExpandGroups                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bFollowAttachment                                           OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Enum /Script/TypedElementRuntime.ETypedElementChildInclusionMethod
/// Size: 0x04
enum ETypedElementChildInclusionMethod : uint8_t
{
	ETypedElementChildInclusionMethod__None0                                         = 0,
	ETypedElementChildInclusionMethod__Immediate1                                    = 1,
	ETypedElementChildInclusionMethod__Recursive2                                    = 2,
	ETypedElementChildInclusionMethod__ETypedElementChildInclusionMethod_MAX3        = 3
};

/// Enum /Script/TypedElementRuntime.ETypedElementSelectionMethod
/// Size: 0x03
enum ETypedElementSelectionMethod : uint8_t
{
	ETypedElementSelectionMethod__Primary0                                           = 0,
	ETypedElementSelectionMethod__Secondary1                                         = 1,
	ETypedElementSelectionMethod__ETypedElementSelectionMethod_MAX2                  = 2
};

