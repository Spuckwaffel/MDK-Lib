
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: EntityActor
/// dependency: EntityCore
/// dependency: NetCore

/// Class /Script/EpicGamesEngine.VerseUEInputComponentBase
/// Size: 0x0370 (0x0000D0 - 0x000440)
class UVerseUEInputComponentBase : public UEntityActorPlayerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(UInputComponent*)                          InputComponent                                              ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FVerseActionMappingArray)                  ReplicatedActionMappingArray                                ___ OFFSET(get<T>, {0xD8, 288, 0, 0})
	SMember(FVerseAxisMappingArray)                    ReplicatedAxisMappingArray                                  ___ OFFSET(get<T>, {0x1F8, 288, 0, 0})
	SMember(FVerseInputBindingArray)                   ReplicatedInputBindingArray                                 ___ OFFSET(get<T>, {0x318, 288, 0, 0})
};

/// Struct /Script/EpicGamesEngine.VerseActionMapping
/// Size: 0x0024 (0x00000C - 0x000030)
class FVerseActionMapping : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FString)                                   UIText                                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FKey>)                              Keys                                                        ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/EpicGamesEngine.VerseActionMappingArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FVerseActionMappingArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FVerseActionMapping>)               ActionMappingArray                                          ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UVerseUEInputComponentBase*)               OwningComponent                                             ___ OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/EpicGamesEngine.VerseAxisMapping
/// Size: 0x002C (0x00000C - 0x000038)
class FVerseAxisMapping : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     AxisName                                                    ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FString)                                   UIText                                                      ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FKey>)                              Keys                                                        ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/EpicGamesEngine.VerseAxisMappingArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FVerseAxisMappingArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FVerseAxisMapping>)                 AxisMappingArray                                            ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UVerseUEInputComponentBase*)               OwningComponent                                             ___ OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/EpicGamesEngine.VerseInputBinding
/// Size: 0x0010 (0x00000C - 0x00001C)
class FVerseInputBinding : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	CMember(TEnumAsByte<EInputEvent>)                  InputEvent                                                  ___ OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/EpicGamesEngine.VerseInputBindingArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FVerseInputBindingArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FVerseInputBinding>)                InputBindingArray                                           ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UVerseUEInputComponentBase*)               OwningComponent                                             ___ OFFSET(get<T>, {0x118, 8, 0, 0})
};

