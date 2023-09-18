/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LiveEditObject.

/// Struct /Script/LiveEditObject.LiveEditObjectTestStruct
/// Size: 0x0148 (0x000000 - 0x000148)
class FLiveEditObjectTestStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(bool)                                      bool                                                        ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int8_t)                                    Int8                                                        ___ OFFSET(get<int8_t>, {0x1, 1, 0, 0})
	DMember(int16_t)                                   Int16                                                       ___ OFFSET(get<int16_t>, {0x2, 2, 0, 0})
	DMember(int32_t)                                   int32                                                       ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int64_t)                                   Int64                                                       ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(float)                                     float                                                       ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(double)                                    Double                                                      ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	SMember(FString)                                   String                                                      ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	CMember(UObject*)                                  RawObjectPtr                                                ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(UObject*)                                  ObjectPtr                                                   ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	SMember(FSoftObjectPath)                           SoftObjectPath                                              ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	SMember(FVector2D)                                 Struct                                                      ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(int32_t)                                   FixedArray                                                  ___ OFFSET(get<int32_t>, {0x88, 16, 0, 0})
	CMember(TArray<int32_t>)                           DynamicArray                                                ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TSet<int32_t>)                             Set                                                         ___ OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TMap<int32_t, int32_t>)                    Map                                                         ___ OFFSET(get<T>, {0xF8, 80, 0, 0})
};

/// Class /Script/LiveEditObject.LiveEditNetworkStreamChannel
/// Size: 0x0000 (0x000068 - 0x000068)
class ULiveEditNetworkStreamChannel : public UChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/LiveEditObject.LiveEditLargeNetworkMessageChannel
/// Size: 0x0048 (0x000068 - 0x0000B0)
class ULiveEditLargeNetworkMessageChannel : public ULiveEditNetworkStreamChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/LiveEditObject.LiveEditObjectChannel
/// Size: 0x00F8 (0x0000B0 - 0x0001A8)
class ULiveEditObjectChannel : public ULiveEditLargeNetworkMessageChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Script/LiveEditObject.LiveEditObjectConnection
/// Size: 0x0378 (0x000028 - 0x0003A0)
class ULiveEditObjectConnection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
};

/// Class /Script/LiveEditObject.LiveEditObjectSubsystemState
/// Size: 0x0250 (0x000028 - 0x000278)
class ULiveEditObjectSubsystemState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	CMember(TArray<ULiveEditObjectConnection*>)        Connections                                                 ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/LiveEditObject.LiveEditObjectSubsystem
/// Size: 0x0148 (0x000030 - 0x000178)
class ULiveEditObjectSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	DMember(int32_t)                                   MaxBytesQueuedForReplication                                ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   NumPackageMapBunchesToDelayTickFor                          ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	CMember(TArray<ULiveEditObjectSubsystemState*>)    NetDriverStates                                             ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/LiveEditObject.LiveEditObjectTestObject
/// Size: 0x0158 (0x000028 - 0x000180)
class ULiveEditObjectTestObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(int32_t)                                   int32                                                       ___ OFFSET(get<int32_t>, {0x28, 12, 0, 0})
	SMember(FLiveEditObjectTestStruct)                 StructProperty                                              ___ OFFSET(get<T>, {0x38, 328, 0, 0})
};

