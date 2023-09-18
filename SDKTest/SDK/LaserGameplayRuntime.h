/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LaserGameplayRuntime.

/// Struct /Script/LaserGameplayRuntime.LaserGridConnectionEntry
/// Size: 0x000C (0x00000C - 0x000018)
class FLaserGridConnectionEntry : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FLaserOutletConnection)                    OutletConnection                                            ___ OFFSET(get<T>, {0xC, 2, 0, 0})
	CMember(ELaserConnectionState)                     State                                                       ___ OFFSET(get<T>, {0xE, 1, 0, 0})
	CMember(ULaserCapsuleComponent*)                   LaserCapsuleComponent                                       ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/LaserGameplayRuntime.LaserOutletConnection
/// Size: 0x0002 (0x000000 - 0x000002)
class FLaserOutletConnection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(char)                                      PrimaryOutletIndex                                          ___ OFFSET(get<char>, {0x0, 1, 0, 0})
	DMember(char)                                      SecondaryOutletIndex                                        ___ OFFSET(get<char>, {0x1, 1, 0, 0})
};

/// Struct /Script/LaserGameplayRuntime.LaserGridConnectionArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FLaserGridConnectionArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FLaserGridConnectionEntry>)         Entries                                                     ___ OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/LaserGameplayRuntime.LaserGridOutletEntry
/// Size: 0x0004 (0x00000C - 0x000010)
class FLaserGridOutletEntry : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(char)                                      InstanceIndex                                               ___ OFFSET(get<char>, {0xC, 1, 0, 0})
	CMember(ELaserConnectionState)                     State                                                       ___ OFFSET(get<T>, {0xD, 1, 0, 0})
};

/// Struct /Script/LaserGameplayRuntime.LaserGridOutletArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FLaserGridOutletArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FLaserGridOutletEntry>)             Entries                                                     ___ OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/LaserGameplayRuntime.LaserGridPattern
/// Size: 0x0018 (0x000000 - 0x000018)
class FLaserGridPattern : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FLaserOutletConnection>)            OutletConnections                                           ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Class /Script/LaserGameplayRuntime.LaserCapsuleComponent
/// Size: 0x0010 (0x000590 - 0x0005A0)
class ULaserCapsuleComponent : public UCapsuleComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(TEnumAsByte<ECollisionEnabled>)            CollisionWhenEnabled                                        ___ OFFSET(get<T>, {0x590, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionEnabled>)            CollisionWhenDisabled                                       ___ OFFSET(get<T>, {0x591, 1, 0, 0})
};

/// Class /Script/LaserGameplayRuntime.LaserGridEditorComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class ULaserGridEditorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   VisualizeLaserGridPatternIndex                              ___ OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bVisualizeOutletIndex                                       ___ OFFSET(get<bool>, {0xA4, 1, 0, 0})
};

/// Class /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid
/// Size: 0x0418 (0x000978 - 0x000D90)
class ABuildingGameplayActorLaserGrid : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3472;

public:
	SMember(FMulticastInlineDelegate)                  OnLaserGridTriggered                                        ___ OFFSET(get<T>, {0x978, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLaserGridOutletDestroyed                                  ___ OFFSET(get<T>, {0x988, 16, 0, 0})
	CMember(TArray<FLaserGridPattern>)                 LaserGridPatterns                                           ___ OFFSET(get<T>, {0x998, 16, 0, 0})
	DMember(float)                                     LaserPatternChangeWarningTime                               ___ OFFSET(get<float>, {0x9A8, 4, 0, 0})
	CMember(TMap<int32_t, ABuildingActor*>)            LaserOutletToBuildingAttachmentMap                          ___ OFFSET(get<T>, {0x9B0, 80, 0, 0})
	SMember(FGameplayTagContainer)                     IgnoreActorTags                                             ___ OFFSET(get<T>, {0xA00, 32, 0, 0})
	CMember(UClass*)                                   LaserCapsuleComponentClass                                  ___ OFFSET(get<T>, {0xA20, 8, 0, 0})
	SMember(FRotator)                                  LaserCapsuleCollisionRotationOffset                         ___ OFFSET(get<T>, {0xA28, 24, 0, 0})
	DMember(int32_t)                                   LaserCustomDataIndexForRandomizedVisuals                    ___ OFFSET(get<int32_t>, {0xA40, 4, 0, 0})
	SMember(FLaserGridConnectionArray)                 LaserGridConnections                                        ___ OFFSET(get<T>, {0xA48, 280, 0, 0})
	CMember(TArray<FLaserGridConnectionEntry>)         LocalLaserGridConnections                                   ___ OFFSET(get<T>, {0xB60, 16, 0, 0})
	SMember(FTransform)                                LaserConnectionOffset                                       ___ OFFSET(get<T>, {0xB70, 96, 0, 0})
	SMember(FVector)                                   LaserOutletConnectionOffset                                 ___ OFFSET(get<T>, {0xBD0, 24, 0, 0})
	CMember(USoundBase*)                               SoundOutletTransitionOn                                     ___ OFFSET(get<T>, {0xBE8, 8, 0, 0})
	CMember(USoundBase*)                               SoundLaserTransitionPrimaryOutlet                           ___ OFFSET(get<T>, {0xBF0, 8, 0, 0})
	CMember(USoundBase*)                               SoundLaserTransitionSecondaryOutlet                         ___ OFFSET(get<T>, {0xBF8, 8, 0, 0})
	CMember(USoundBase*)                               SoundLaserTransition                                        ___ OFFSET(get<T>, {0xC00, 8, 0, 0})
	DMember(int32_t)                                   OutletMaterialCustomDataIndex_EmissiveEnabled               ___ OFFSET(get<int32_t>, {0xC08, 4, 0, 0})
	DMember(int32_t)                                   OutletMaterialCustomDataIndex_DisableEmissivePulse          ___ OFFSET(get<int32_t>, {0xC0C, 4, 0, 0})
	DMember(int32_t)                                   OutletMaterialCustomDataIndex_AnimTimestamp                 ___ OFFSET(get<int32_t>, {0xC10, 4, 0, 0})
	DMember(int32_t)                                   OutletMaterialCustomDataIndex_AnimTimestampDuration         ___ OFFSET(get<int32_t>, {0xC14, 4, 0, 0})
	DMember(float)                                     MaterialCosineWavePeriod                                    ___ OFFSET(get<float>, {0xC18, 4, 0, 0})
	SMember(FVector2D)                                 OutletMaterialTransitionOffTimestampOffset                  ___ OFFSET(get<T>, {0xC20, 16, 0, 0})
	DMember(int32_t)                                   LaserMaterialCustomDataIndex_PulseEnabled                   ___ OFFSET(get<int32_t>, {0xC30, 4, 0, 0})
	DMember(int32_t)                                   LaserMaterialCustomDataIndex_RandomFlickeringSpeed          ___ OFFSET(get<int32_t>, {0xC34, 4, 0, 0})
	DMember(int32_t)                                   LaserMaterialCustomDataIndex_AnimTimestamp                  ___ OFFSET(get<int32_t>, {0xC38, 4, 0, 0})
	DMember(int32_t)                                   LaserMaterialCustomDataIndex_PulseTimeOffset                ___ OFFSET(get<int32_t>, {0xC3C, 4, 0, 0})
	SMember(FVector2D)                                 LaserMaterialRandomFlickeringSpeed                          ___ OFFSET(get<T>, {0xC40, 16, 0, 0})
	SMember(FLaserGridOutletArray)                     LaserGridOutlets                                            ___ OFFSET(get<T>, {0xC50, 288, 0, 0})
	CMember(UHierarchicalInstancedStaticMeshComponent*) HISMComponentOutlet                                        ___ OFFSET(get<T>, {0xD70, 8, 0, 0})
	CMember(UHierarchicalInstancedStaticMeshComponent*) HISMComponentLaser                                         ___ OFFSET(get<T>, {0xD78, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0xD80, 1, 0, 0})
	DMember(int32_t)                                   LaserGridPatternIndex                                       ___ OFFSET(get<int32_t>, {0xD84, 4, 0, 0})
	SMember(FTimerHandle)                              LaserPatternTimerHandle                                     ___ OFFSET(get<T>, {0xD88, 8, 0, 0})
};

/// Enum /Script/LaserGameplayRuntime.ELaserConnectionState
/// Size: 0x05
enum ELaserConnectionState : uint8_t
{
	ELaserConnectionState__Off0                                                      = 0,
	ELaserConnectionState__TransitionOn1                                             = 1,
	ELaserConnectionState__On2                                                       = 2,
	ELaserConnectionState__TransitionOff3                                            = 3,
	ELaserConnectionState__ELaserConnectionState_MAX4                                = 4
};

