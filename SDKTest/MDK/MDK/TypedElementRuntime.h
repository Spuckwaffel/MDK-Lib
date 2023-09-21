
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
	SMember(FMulticastInlineDelegate)                  OnPreSelectionChange                                        ___ OFFSET(get<T>, {0x828, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectionChange                                           ___ OFFSET(get<T>, {0x838, 16, 0, 0})
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
class FTypedElementSelectionOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 5;

public:
	DMember(bool)                                      bAllowHidden                                                ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bAllowGroups                                                ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bAllowLegacyNotifications                                   ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bWarnIfLocked                                               ___ OFFSET(get<bool>, {0x3, 1, 0, 0})
	CMember(ETypedElementChildInclusionMethod)         ChildElementInclusionMethod                                 ___ OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionSetState
/// Size: 0x0018 (0x000000 - 0x000018)
class FTypedElementSelectionSetState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<UTypedElementSelectionSet*>) CreatedFromSelectionSet                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/TypedElementRuntime.TypedElementIsSelectedOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FTypedElementIsSelectedOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bAllowIndirect                                              ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionNormalizationOptions
/// Size: 0x0002 (0x000000 - 0x000002)
class FTypedElementSelectionNormalizationOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bExpandGroups                                               ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bFollowAttachment                                           ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
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

