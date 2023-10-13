
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: NetCore

/// Class /Script/LaserGameplayRuntime.LaserCapsuleComponent
/// Size: 0x0010 (0x000590 - 0x0005A0)
class ULaserCapsuleComponent : public UCapsuleComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(TEnumAsByte<ECollisionEnabled>)            CollisionWhenEnabled                                        OFFSET(get<T>, {0x590, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionEnabled>)            CollisionWhenDisabled                                       OFFSET(get<T>, {0x591, 1, 0, 0})
};

/// Class /Script/LaserGameplayRuntime.LaserGridEditorComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class ULaserGridEditorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   VisualizeLaserGridPatternIndex                              OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bVisualizeOutletIndex                                       OFFSET(get<bool>, {0xA4, 1, 0, 0})
};

/// Class /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid
/// Size: 0x0418 (0x000978 - 0x000D90)
class ABuildingGameplayActorLaserGrid : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3472;

public:
	SMember(FMulticastInlineDelegate)                  OnLaserGridTriggered                                        OFFSET(getStruct<T>, {0x978, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLaserGridOutletDestroyed                                  OFFSET(getStruct<T>, {0x988, 16, 0, 0})
	CMember(TArray<FLaserGridPattern>)                 LaserGridPatterns                                           OFFSET(get<T>, {0x998, 16, 0, 0})
	DMember(float)                                     LaserPatternChangeWarningTime                               OFFSET(get<float>, {0x9A8, 4, 0, 0})
	CMember(TMap<int32_t, ABuildingActor*>)            LaserOutletToBuildingAttachmentMap                          OFFSET(get<T>, {0x9B0, 80, 0, 0})
	SMember(FGameplayTagContainer)                     IgnoreActorTags                                             OFFSET(getStruct<T>, {0xA00, 32, 0, 0})
	CMember(UClass*)                                   LaserCapsuleComponentClass                                  OFFSET(get<T>, {0xA20, 8, 0, 0})
	SMember(FRotator)                                  LaserCapsuleCollisionRotationOffset                         OFFSET(getStruct<T>, {0xA28, 24, 0, 0})
	DMember(int32_t)                                   LaserCustomDataIndexForRandomizedVisuals                    OFFSET(get<int32_t>, {0xA40, 4, 0, 0})
	SMember(FLaserGridConnectionArray)                 LaserGridConnections                                        OFFSET(getStruct<T>, {0xA48, 280, 0, 0})
	CMember(TArray<FLaserGridConnectionEntry>)         LocalLaserGridConnections                                   OFFSET(get<T>, {0xB60, 16, 0, 0})
	SMember(FTransform)                                LaserConnectionOffset                                       OFFSET(getStruct<T>, {0xB70, 96, 0, 0})
	SMember(FVector)                                   LaserOutletConnectionOffset                                 OFFSET(getStruct<T>, {0xBD0, 24, 0, 0})
	CMember(USoundBase*)                               SoundOutletTransitionOn                                     OFFSET(get<T>, {0xBE8, 8, 0, 0})
	CMember(USoundBase*)                               SoundLaserTransitionPrimaryOutlet                           OFFSET(get<T>, {0xBF0, 8, 0, 0})
	CMember(USoundBase*)                               SoundLaserTransitionSecondaryOutlet                         OFFSET(get<T>, {0xBF8, 8, 0, 0})
	CMember(USoundBase*)                               SoundLaserTransition                                        OFFSET(get<T>, {0xC00, 8, 0, 0})
	DMember(int32_t)                                   OutletMaterialCustomDataIndex_EmissiveEnabled               OFFSET(get<int32_t>, {0xC08, 4, 0, 0})
	DMember(int32_t)                                   OutletMaterialCustomDataIndex_DisableEmissivePulse          OFFSET(get<int32_t>, {0xC0C, 4, 0, 0})
	DMember(int32_t)                                   OutletMaterialCustomDataIndex_AnimTimestamp                 OFFSET(get<int32_t>, {0xC10, 4, 0, 0})
	DMember(int32_t)                                   OutletMaterialCustomDataIndex_AnimTimestampDuration         OFFSET(get<int32_t>, {0xC14, 4, 0, 0})
	DMember(float)                                     MaterialCosineWavePeriod                                    OFFSET(get<float>, {0xC18, 4, 0, 0})
	SMember(FVector2D)                                 OutletMaterialTransitionOffTimestampOffset                  OFFSET(getStruct<T>, {0xC20, 16, 0, 0})
	DMember(int32_t)                                   LaserMaterialCustomDataIndex_PulseEnabled                   OFFSET(get<int32_t>, {0xC30, 4, 0, 0})
	DMember(int32_t)                                   LaserMaterialCustomDataIndex_RandomFlickeringSpeed          OFFSET(get<int32_t>, {0xC34, 4, 0, 0})
	DMember(int32_t)                                   LaserMaterialCustomDataIndex_AnimTimestamp                  OFFSET(get<int32_t>, {0xC38, 4, 0, 0})
	DMember(int32_t)                                   LaserMaterialCustomDataIndex_PulseTimeOffset                OFFSET(get<int32_t>, {0xC3C, 4, 0, 0})
	SMember(FVector2D)                                 LaserMaterialRandomFlickeringSpeed                          OFFSET(getStruct<T>, {0xC40, 16, 0, 0})
	SMember(FLaserGridOutletArray)                     LaserGridOutlets                                            OFFSET(getStruct<T>, {0xC50, 288, 0, 0})
	CMember(UHierarchicalInstancedStaticMeshComponent*) HISMComponentOutlet                                        OFFSET(get<T>, {0xD70, 8, 0, 0})
	CMember(UHierarchicalInstancedStaticMeshComponent*) HISMComponentLaser                                         OFFSET(get<T>, {0xD78, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xD80, 1, 0, 0})
	DMember(int32_t)                                   LaserGridPatternIndex                                       OFFSET(get<int32_t>, {0xD84, 4, 0, 0})
	SMember(FTimerHandle)                              LaserPatternTimerHandle                                     OFFSET(getStruct<T>, {0xD88, 8, 0, 0})


	/// Functions
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.SetLaserGridEnable
	// void SetLaserGridEnable(bool bEnable);                                                                                   // [0x56ae764] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.OnRep_LaserGridConnections
	// void OnRep_LaserGridConnections();                                                                                       // [0x9b54258] Final|Native|Private 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.OnRep_bEnabled
	// void OnRep_bEnabled();                                                                                                   // [0x9b5426c] Final|Native|Private 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.LaserGridTriggered
	// void LaserGridTriggered(FLaserGridConnectionEntry& LaserConnectionData, AActor* TriggeringActor);                        // [0x1d9241c] BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.LaserGridStateUpdated
	// void LaserGridStateUpdated(bool bLaserGridEnabled);                                                                      // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandlePatternTimerComplete_PreTransition
	// void HandlePatternTimerComplete_PreTransition();                                                                         // [0x2cf4738] Final|Native|Private 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandlePatternTimerComplete_PostTransition
	// void HandlePatternTimerComplete_PostTransition();                                                                        // [0x2cf4738] Final|Native|Private 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandleLaserCollisionOverlap
	// void HandleLaserCollisionOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x7599f20] Final|Native|Private|HasOutParms 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandleAttachedBuildingActorDied
	// void HandleAttachedBuildingActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0x7ac5cec] Final|Native|Private|HasDefaults 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.GetActiveLaserGridConnections
	// void GetActiveLaserGridConnections(TArray<FLaserGridConnectionEntry>& OutActiveLaserGridConnections);                    // [0x9b53b98] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.CosmeticDestroyOutletInstance
	// void CosmeticDestroyOutletInstance(FLaserGridOutletEntry& OutletEntry);                                                  // [0x1d9241c] BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.CanActorTriggerLaserGrid
	// bool CanActorTriggerLaserGrid(AActor* TriggeringActor);                                                                  // [0x9b53b04] BlueprintAuthorityOnly|Native|Event|Protected|BlueprintEvent|Const 
};

/// Struct /Script/LaserGameplayRuntime.LaserGridConnectionEntry
/// Size: 0x000C (0x00000C - 0x000018)
class FLaserGridConnectionEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FLaserOutletConnection)                    OutletConnection                                            OFFSET(getStruct<T>, {0xC, 2, 0, 0})
	CMember(ELaserConnectionState)                     State                                                       OFFSET(get<T>, {0xE, 1, 0, 0})
	CMember(ULaserCapsuleComponent*)                   LaserCapsuleComponent                                       OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/LaserGameplayRuntime.LaserOutletConnection
/// Size: 0x0002 (0x000000 - 0x000002)
class FLaserOutletConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(char)                                      PrimaryOutletIndex                                          OFFSET(get<char>, {0x0, 1, 0, 0})
	DMember(char)                                      SecondaryOutletIndex                                        OFFSET(get<char>, {0x1, 1, 0, 0})
};

/// Struct /Script/LaserGameplayRuntime.LaserGridConnectionArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FLaserGridConnectionArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FLaserGridConnectionEntry>)         Entries                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/LaserGameplayRuntime.LaserGridOutletEntry
/// Size: 0x0004 (0x00000C - 0x000010)
class FLaserGridOutletEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(char)                                      InstanceIndex                                               OFFSET(get<char>, {0xC, 1, 0, 0})
	CMember(ELaserConnectionState)                     State                                                       OFFSET(get<T>, {0xD, 1, 0, 0})
};

/// Struct /Script/LaserGameplayRuntime.LaserGridOutletArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FLaserGridOutletArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FLaserGridOutletEntry>)             Entries                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/LaserGameplayRuntime.LaserGridPattern
/// Size: 0x0018 (0x000000 - 0x000018)
class FLaserGridPattern : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FLaserOutletConnection>)            OutletConnections                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
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

