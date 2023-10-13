
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/CosmeticsFrameworkEvents.CosmeticsEventRegistrar
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticsEventRegistrar : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CosmeticsFrameworkEvents.CosmeticsFinishable
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticsFinishable : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CosmeticsFrameworkEvents.CosmeticsMeshTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticsMeshTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CosmeticsFrameworkEvents.CosmeticsStreaming
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticsStreaming : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/CosmeticsFrameworkEvents.CosmeticsEventHandle
/// Size: 0x0001 (0x000000 - 0x000001)
class FCosmeticsEventHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/CosmeticsFrameworkEvents.ECosmeticsEventBindingFlags
/// Size: 0x04
enum ECosmeticsEventBindingFlags : uint8_t
{
	ECosmeticsEventBindingFlags__None0                                               = 0,
	ECosmeticsEventBindingFlags__ExecuteImmediately1                                 = 2,
	ECosmeticsEventBindingFlags__ExecuteOnce2                                        = 4,
	ECosmeticsEventBindingFlags__ECosmeticsEventBindingFlags_MAX3                    = 5
};

