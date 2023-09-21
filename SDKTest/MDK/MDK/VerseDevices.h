
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures

/// Class /Script/VerseDevices.VerseCreativePropAsset
/// Size: 0x0068 (0x000028 - 0x000090)
class UVerseCreativePropAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     AssetPathName                                               ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(ULevelSaveRecord*)                         LevelSaveRecord                                             ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ActorClass                                                  ___ OFFSET(get<T>, {0x38, 32, 0, 0})
};

/// Class /Script/VerseDevices.PlaylistUserOptionScript
/// Size: 0x0018 (0x0001D0 - 0x0001E8)
class UPlaylistUserOptionScript : public UPlaylistUserOptionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	CMember(TArray<FPlaylistOptionScriptValue>)        OptionValues                                                ___ OFFSET(get<T>, {0x1D0, 16, 0, 0})
	DMember(int32_t)                                   DefaultValueIndex                                           ___ OFFSET(get<int32_t>, {0x1E0, 4, 0, 0})
};

/// Class /Script/VerseDevices.ScriptDevice
/// Size: 0x0028 (0x000BB8 - 0x000BE0)
class AScriptDevice : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3040;

public:
	CMember(UVerseCreativeDevice*)                     Script                                                      ___ OFFSET(get<T>, {0xBB8, 8, 0, 0})
	CMember(UVerseCreativeDevice*)                     ScriptInstance                                              ___ OFFSET(get<T>, {0xBC8, 8, 0, 0})
};

/// Class /Script/VerseDevices.VerseMovableObjectBase
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UVerseMovableObjectBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/VerseDevices.VerseCreativeDevice
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UVerseCreativeDevice : public UVerseMovableObjectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/VerseDevices.VerseCreativeObject
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UVerseCreativeObject : public UVerseMovableObjectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(ABuildingActor*)                           SavedActor                                                  ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/VerseDevices.VerseCreativeObjectQuotaHelperComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UVerseCreativeObjectQuotaHelperComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/VerseDevices.VerseDevicesFeatureAction_RegisterWrapperClasses
/// Size: 0x0028 (0x000028 - 0x000050)
class UVerseDevicesFeatureAction_RegisterWrapperClasses : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UVerseDeviceWrapperClassMap*>) DeviceToWrapperClassMapAsset                             ___ OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Class /Script/VerseDevices.VerseDeviceWrapperClassMap
/// Size: 0x0050 (0x000030 - 0x000080)
class UVerseDeviceWrapperClassMap : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<TWeakObjectPtr, UClass*>)             DeviceClassMap                                              ___ OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/VerseDevices.VerseDeviceWrapperClassMapSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UVerseDeviceWrapperClassMapSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<TWeakObjectPtr, UVerseClass*>)        DeviceClassToVerseClassMap                                  ___ OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/VerseDevices.PlaylistOptionScriptValue
/// Size: 0x0008 (0x000098 - 0x0000A0)
class FPlaylistOptionScriptValue : public FPlaylistOptionValue
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UClass*)                                   Value                                                       ___ OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Struct /Script/VerseDevices.VerseDeviceFunctionPayload
/// Size: 0x0008 (0x000000 - 0x000008)
class FVerseDeviceFunctionPayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(AController*)                              Instigator                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

