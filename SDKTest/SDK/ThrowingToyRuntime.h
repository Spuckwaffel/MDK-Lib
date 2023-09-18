/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ThrowingToyRuntime.

/// Struct /Script/ThrowingToyRuntime.ThrowingToyData
/// Size: 0x001C (0x00000C - 0x000028)
class FThrowingToyData : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(AActor*)                                   ThrowingToy                                                 ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FGuid)                                     WorldItemGuid                                               ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ThrowingToyRuntime.ThrowingToyDataArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FThrowingToyDataArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FThrowingToyData>)                  Entries                                                     ___ OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Class /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UThrowingToyTrackerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FThrowingToyDataArray)                     ThrowingToysData                                            ___ OFFSET(get<T>, {0xA0, 280, 0, 0})
};

/// Enum /Script/ThrowingToyRuntime.EThrowingToyItemRemovedReason
/// Size: 0x05
enum EThrowingToyItemRemovedReason : uint8_t
{
	EThrowingToyItemRemovedReason__None0                                             = 0,
	EThrowingToyItemRemovedReason__ManuallyDropped1                                  = 1,
	EThrowingToyItemRemovedReason__DeviceForcedDropped2                              = 2,
	EThrowingToyItemRemovedReason__DeviceForcedDeleted3                              = 3,
	EThrowingToyItemRemovedReason__EThrowingToyItemRemovedReason_MAX4                = 4
};

