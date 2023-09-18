/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VGameplayRst.

/// Struct /Script/VGameplayRst.ActiveSoundInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FActiveSoundInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bActive                                                     ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     StartTime                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/VGameplayRst.DatastoreEntry
/// Size: 0x0014 (0x00000C - 0x000020)
class FDatastoreEntry : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     KeyName                                                     ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FString)                                   ValueData                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/VGameplayRst.DatastoreState
/// Size: 0x0020 (0x000108 - 0x000128)
class FDatastoreState : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TArray<FDatastoreEntry>)                   EntriesArray                                                ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(UDatastoreComponentBase*)                  OwningComponent                                             ___ OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Struct /Script/VGameplayRst.VerseLevelStreamingLevelStatus
/// Size: 0x0028 (0x000000 - 0x000028)
class FVerseLevelStreamingLevelStatus : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(ULevelStreamingDynamic*)                   Streamer                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UVerseAssetPtr*)                           LevelAsset                                                  ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/VGameplayRst.VerseLevelStreamingLevelIdentifier
/// Size: 0x0028 (0x000000 - 0x000028)
class FVerseLevelStreamingLevelIdentifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSoftObjectPath)                           LevelPath                                                   ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   LevelNameOverride                                           ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Class /Script/VGameplayRst.AudioComponentBase
/// Size: 0x0010 (0x000088 - 0x000098)
class UAudioComponentBase : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UVerseAssetPtr*)                           SoundAsset                                                  ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FActiveSoundInfo)                          ActiveSoundInfo                                             ___ OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/VGameplayRst.ControllerStateComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UControllerStateComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FString>)                           ActiveStates                                                ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/VGameplayRst.DatastoreComponentBase
/// Size: 0x0140 (0x0000D0 - 0x000210)
class UDatastoreComponentBase : public UEntityActorPlayerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FDatastoreState)                           ReplicatedDatastoreState                                    ___ OFFSET(get<T>, {0xD0, 296, 0, 0})
};

/// Class /Script/VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UVerseLevelStreamingPlayerControllerRpcComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/VGameplayRst.VerseLevelStreamingComponentBase
/// Size: 0x00A8 (0x000088 - 0x000130)
class UVerseLevelStreamingComponentBase : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FVerseLevelStreamingLevelIdentifier)       NewLevel                                                    ___ OFFSET(get<T>, {0x88, 40, 0, 0})
	SMember(FVerseLevelStreamingLevelStatus)           LevelStatus                                                 ___ OFFSET(get<T>, {0xB0, 40, 0, 0})
};

/// Class /Script/VGameplayRst.PointLightComponentBase
/// Size: 0x0008 (0x000088 - 0x000090)
class UPointLightComponentBase : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UVerseLightPropertiesBase*)                ReplicatedLightProperties                                   ___ OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/VGameplayRst.SpotLightComponentBase
/// Size: 0x0008 (0x000088 - 0x000090)
class USpotLightComponentBase : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UVerseLightPropertiesBase*)                ReplicatedLightProperties                                   ___ OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/VGameplayRst.VerseLightPropertiesBase
/// Size: 0x0020 (0x000028 - 0x000048)
class UVerseLightPropertiesBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Intensity                                                   ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FLinearColor)                              LightColor                                                  ___ OFFSET(get<T>, {0x2C, 16, 0, 0})
	CMember(ULightComponentBase*)                      LightComponent                                              ___ OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/VGameplayRst.VerseLocalLightProperties
/// Size: 0x0008 (0x000048 - 0x000050)
class UVerseLocalLightProperties : public UVerseLightPropertiesBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     AttenuationRadius                                           ___ OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Class /Script/VGameplayRst.VersePointLightProperties
/// Size: 0x0008 (0x000050 - 0x000058)
class UVersePointLightProperties : public UVerseLocalLightProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     SourceRadius                                                ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     SourceLength                                                ___ OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Class /Script/VGameplayRst.VerseSpotLightProperties
/// Size: 0x0008 (0x000058 - 0x000060)
class UVerseSpotLightProperties : public UVersePointLightProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     InnerConeAngle                                              ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     OuterConeAngle                                              ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
};

/// Class /Script/VGameplayRst.ParticleSystemComponentBase
/// Size: 0x0010 (0x000088 - 0x000098)
class UParticleSystemComponentBase : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UVerseAssetPtr*)                           ParticleSystemAsset                                         ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	DMember(bool)                                      bActive                                                     ___ OFFSET(get<bool>, {0x90, 1, 0, 0})
};

