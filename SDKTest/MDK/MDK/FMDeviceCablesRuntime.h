
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCable
/// Size: 0x01D8 (0x000710 - 0x0008E8)
class AFMDeviceCable : public ABuildingActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2280;

public:
	CMember(USplineComponent*)                         SplineComponent                                             OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     DeviceCableHead                                             OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(UClass*)                                   SplineMeshComponentClass                                    OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              ScalarStaticMesh                                            OFFSET(get<T>, {0x740, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              AudioStaticMesh                                             OFFSET(get<T>, {0x760, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              NoteStaticMesh                                              OFFSET(get<T>, {0x780, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              TextureStaticMesh                                           OFFSET(get<T>, {0x7A0, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              MeshStaticMesh                                              OFFSET(get<T>, {0x7C0, 32, 0, 0})
	SMember(FName)                                     SplineLengthParam                                           OFFSET(getStruct<T>, {0x7E0, 4, 0, 0})
	SMember(FName)                                     SplineStartParam                                            OFFSET(getStruct<T>, {0x7E4, 4, 0, 0})
	SMember(FName)                                     SplineEndParam                                              OFFSET(getStruct<T>, {0x7E8, 4, 0, 0})
	SMember(FName)                                     PortTypeParam                                               OFFSET(getStruct<T>, {0x7EC, 4, 0, 0})
	DMember(float)                                     CableStubLength                                             OFFSET(get<float>, {0x7F0, 4, 0, 0})
	DMember(float)                                     CableDistanceFromPortB                                      OFFSET(get<float>, {0x7F4, 4, 0, 0})
	DMember(float)                                     CableMinTangent                                             OFFSET(get<float>, {0x7F8, 4, 0, 0})
	DMember(float)                                     CableMaxTangent                                             OFFSET(get<float>, {0x7FC, 4, 0, 0})
	DMember(float)                                     CableSectionLengthAtCableCenter                             OFFSET(get<float>, {0x800, 4, 0, 0})
	DMember(float)                                     CableSectionLengthAtCableHeads                              OFFSET(get<float>, {0x804, 4, 0, 0})
	DMember(int32_t)                                   CableSectionCountAtCableHeads                               OFFSET(get<int32_t>, {0x808, 4, 0, 0})
	DMember(int32_t)                                   CableCenterSectionsMaxCount                                 OFFSET(get<int32_t>, {0x80C, 4, 0, 0})
	DMember(float)                                     ExtremeMinDotProduct                                        OFFSET(get<float>, {0x810, 4, 0, 0})
	DMember(float)                                     MaxExtremeCableBendSize                                     OFFSET(get<float>, {0x814, 4, 0, 0})
	DMember(float)                                     ExtremeAngleTangentScale                                    OFFSET(get<float>, {0x818, 4, 0, 0})
	CMember(TArray<USplineMeshComponent*>)             CableSplineMeshArray                                        OFFSET(get<T>, {0x820, 16, 0, 0})
	CMember(TWeakObjectPtr<UFMDeviceCableAnimatorBase*>) DeviceCableAnimator                                       OFFSET(get<T>, {0x830, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 DeviceCableMaterial                                         OFFSET(get<T>, {0x838, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 DeviceCableHeadMaterial                                     OFFSET(get<T>, {0x840, 8, 0, 0})
	CMember(UFMDeviceCablePortComponent*)              ConstantPort                                                OFFSET(get<T>, {0x858, 8, 0, 0})
	CMember(UFMDeviceCablePortComponent*)              PortA                                                       OFFSET(get<T>, {0x860, 8, 0, 0})
	CMember(UFMDeviceCablePortComponent*)              ServerPortA                                                 OFFSET(get<T>, {0x868, 8, 0, 0})
	CMember(UFMDeviceCablePortComponent*)              PortB                                                       OFFSET(get<T>, {0x870, 8, 0, 0})
	CMember(UFMDeviceCablePortComponent*)              ServerPortB                                                 OFFSET(get<T>, {0x878, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.UpdateVisualParameters
	// void UpdateVisualParameters();                                                                                           // [0xa4d6fdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.UpdateDeviceCableAnimator
	// void UpdateDeviceCableAnimator();                                                                                        // [0xa4d6fc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.SetFocusedVisuals
	// void SetFocusedVisuals(bool bIsFocused);                                                                                 // [0xa4d6ec8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnSplineUpdated
	// void OnSplineUpdated(bool bCollisionEnabled);                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnScalesUpdated
	// void OnScalesUpdated(FVector StartScale, FVector EndScale);                                                              // [0x101681c] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnRep_ServerPortB
	// void OnRep_ServerPortB();                                                                                                // [0xa4d659c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnRep_ServerPortA
	// void OnRep_ServerPortA();                                                                                                // [0xa4d6574] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableReturned
	// void OnCableReturned();                                                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableGrabbed
	// void OnCableGrabbed(bool bThroughReplication);                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableDisconnected
	// void OnCableDisconnected(bool bThroughReplication);                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableConnected
	// void OnCableConnected(bool bThroughReplication);                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetPortB
	// UFMDeviceCablePortComponent* GetPortB();                                                                                 // [0xa4d5f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetPortA
	// UFMDeviceCablePortComponent* GetPortA();                                                                                 // [0xa4d5f38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetDeviceCableHead
	// UStaticMeshComponent* GetDeviceCableHead();                                                                              // [0xa4d5f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetConstantPort
	// UFMDeviceCablePortComponent* GetConstantPort();                                                                          // [0xa4d5f08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetCableSpline
	// USplineComponent* GetCableSpline();                                                                                      // [0x9acfbe4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetCableDataType
	// EDeviceCablePortDataType GetCableDataType();                                                                             // [0xa4d5ee8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.Disconnect
	// void Disconnect();                                                                                                       // [0xa4d5ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.ConnectPort
	// void ConnectPort(UFMDeviceCablePortComponent* Port);                                                                     // [0xa4d5ce4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.ConnectConstantPort
	// void ConnectConstantPort(UFMDeviceCablePortComponent* Port);                                                             // [0xa4d5c64] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.BuildMeshOnSpline
	// void BuildMeshOnSpline(bool bCollisionEnabled);                                                                          // [0xa4d5be4] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UFMDeviceCableAnimatorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TWeakObjectPtr<UFMDeviceCablePortComponent*>) OwnerPort                                                OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.SetOwnerPort
	// void SetOwnerPort(UFMDeviceCablePortComponent* OwnerPort);                                                               // [0xa4d6f48] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.RemoveMaterialInstance
	// void RemoveMaterialInstance(UMaterialInstanceDynamic* InMaterialInstance);                                               // [0xa4d66ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.OnPortArtifactUpdated
	// void OnPortArtifactUpdated();                                                                                            // [0x16748d0] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.OnConnectionStarted
	// void OnConnectionStarted(UFMDeviceCableConnectionBase* NewConnection);                                                   // [0x9cf817c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.OnConnectionEnded
	// void OnConnectionEnded(UFMDeviceCableConnectionBase* EndedConnection);                                                   // [0x63611d8] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.AddMaterialInstance
	// void AddMaterialInstance(UMaterialInstanceDynamic* InMaterialInstance);                                                  // [0xa4d5b64] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMidiEvent
/// Size: 0x00A8 (0x0000E0 - 0x000188)
class UFMDeviceCableAnimatorMidiEvent : public UFMDeviceCableAnimatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FName)                                     NoteTextureParam                                            OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	CMember(UCurveFloat*)                              NoteShapeCurve                                              OFFSET(get<T>, {0xE8, 8, 0, 0})
	DMember(float)                                     NotePercentOfTexture                                        OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     NoteTravelBeats                                             OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     NoteStartDelayBeats                                         OFFSET(get<float>, {0xF8, 4, 0, 0})
	CMember(UTexture2D*)                               NoteTexture                                                 OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(UFabricMetaSoundPatchWrapper*)             PatchWrapper                                                OFFSET(get<T>, {0x118, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMidiEvent.OnMetaSoundOutputIntChangedBatch
	// void OnMetaSoundOutputIntChangedBatch(FName& OutputName, TArray<int32_t>& Output);                                       // [0xa4d6450] Final|Native|Private|HasOutParms 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UFMDeviceCableAnimatorFloatProvider : public UFMDeviceCableAnimatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FName)                                     CableDataParam                                              OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	SMember(FName)                                     FloatProviderTypeParam                                      OFFSET(getStruct<T>, {0xE4, 4, 0, 0})
	CMember(UFabricFloatProviderBase*)                 FloatProvider                                               OFFSET(get<T>, {0xE8, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider.SetFloatProvider
	// void SetFloatProvider(UFabricFloatProviderBase* InFloatProvider);                                                        // [0xa4d6e3c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTextureProvider
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UFMDeviceCableAnimatorTextureProvider : public UFMDeviceCableAnimatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FName)                                     CableDataParam                                              OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	DMember(float)                                     DecayRate                                                   OFFSET(get<float>, {0xE4, 4, 0, 0})
	CMember(UFabricTextureProviderBase*)               TextureProvider                                             OFFSET(get<T>, {0xE8, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTextureProvider.SetTextureProvider
	// void SetTextureProvider(UFabricTextureProviderBase* InTextureProvider);                                                  // [0xa4d6e3c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMeshProvider
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UFMDeviceCableAnimatorMeshProvider : public UFMDeviceCableAnimatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FName)                                     CableDataParam                                              OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	DMember(float)                                     DecayRate                                                   OFFSET(get<float>, {0xE4, 4, 0, 0})
	CMember(UFabricMeshProviderBase*)                  MeshProvider                                                OFFSET(get<T>, {0xE8, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMeshProvider.SetMeshProvider
	// void SetMeshProvider(UFabricMeshProviderBase* InMeshProvider);                                                           // [0xa4d6e3c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer
/// Size: 0x0080 (0x0000E0 - 0x000160)
class UFMDeviceCableAnimatorAudioAnalyzer : public UFMDeviceCableAnimatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FName)                                     FftTextureParam                                             OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	SMember(FName)                                     WaveformTextureParam                                        OFFSET(getStruct<T>, {0xE4, 4, 0, 0})
	SMember(FName)                                     AmplitudeTextureParam                                       OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	SMember(FName)                                     AmplitudeDataParam                                          OFFSET(getStruct<T>, {0xEC, 4, 0, 0})
	SMember(FName)                                     CableQualityParam                                           OFFSET(getStruct<T>, {0xF0, 4, 0, 0})
	SMember(FName)                                     CableReactivityParam                                        OFFSET(getStruct<T>, {0xF4, 4, 0, 0})
	DMember(int32_t)                                   WaveformNumSamplesHeld                                      OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	DMember(int32_t)                                   WaveformSmoothingDistance                                   OFFSET(get<int32_t>, {0xFC, 4, 0, 0})
	DMember(float)                                     WaveformSmoothingFactor                                     OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     WaveformDecayPerSecond                                      OFFSET(get<float>, {0x104, 4, 0, 0})
	CMember(UTexture2D*)                               WaveformTexture                                             OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(UTexture2D*)                               AmplitudeTexture                                            OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(UFabricMetaSoundPatchWrapper*)             PatchWrapper                                                OFFSET(get<T>, {0x118, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer.SetAnalyzerName
	// void SetAnalyzerName(FName AnalyzerName);                                                                                // [0xa4d6dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer.OnMetaSoundOutputFloatChangedBatch
	// void OnMetaSoundOutputFloatChangedBatch(FName& OutputName, TArray<float>& Output, FFabricMetaSoundPatchWrapperPeakTamer& PeakTamer, float DeltaSeconds); // [0xa4d61d8] Final|Native|Private|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer.GetLastAnalyzerValue
	// float GetLastAnalyzerValue();                                                                                            // [0x58f7208] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UFMDeviceCableConnectionBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(bool)                                      bConnectionActive                                           OFFSET(get<bool>, {0x80, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    BuildingCompositeArtifactFromPorts                          OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FFMDeviceCableConnectedDevicesInfo)        ConnectedDevicesInfo                                        OFFSET(getStruct<T>, {0x98, 48, 0, 0})
	SMember(FFMDeviceCableDefaultOutputs)              DefaultOutputs                                              OFFSET(getStruct<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase.StartConnectionBP
	// void StartConnectionBP();                                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase.RebuildDirtyConnectionBP
	// void RebuildDirtyConnectionBP();                                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase.EndConnectionBP
	// void EndConnectionBP();                                                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableMetaSoundConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableMetaSoundConnection : public UFMDeviceCableConnectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableNoteConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableNoteConnection : public UFMDeviceCableMetaSoundConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAudioConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableAudioConnection : public UFMDeviceCableMetaSoundConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableFloatConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableFloatConnection : public UFMDeviceCableConnectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableTextureConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableTextureConnection : public UFMDeviceCableConnectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableMeshConnection
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UFMDeviceCableMeshConnection : public UFMDeviceCableConnectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(uint32_t)                                  PreviousMeshInstanceHash                                    OFFSET(get<uint32_t>, {0xD0, 4, 0, 0})
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UFMDeviceCableControllerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMulticastInlineDelegate)                  OnControllerCableConnected                                  OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCableDisconnected                               OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(UClass*)                                   ControllerCablePort                                         OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(UClass*)                                   DeviceCableManagerClass                                     OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(AFortPlayerControllerAthena*)              PlayerController                                            OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(UFMDeviceCablePortComponent*)              LocalControllerPort                                         OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(UFMDeviceCablePortComponent*)              ServerControllerPort                                        OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   LocalControllerPortActor                                    OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(UFMDeviceCableManagerComponent*)           LocalDeviceCableManager                                     OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(UFMDeviceCableManagerComponent*)           ServerDeviceCableManager                                    OFFSET(get<T>, {0xF8, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.SetControllerTargetForControllerPortBP
	// void SetControllerTargetForControllerPortBP(AActor* ControllerPortActor, APlayerController* Controller);                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerVolumeChanged
	// void ServerVolumeChanged();                                                                                              // [0x5ea45e4] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerSelectPort
	// void ServerSelectPort(UFMDeviceCablePortComponent* SelectedPort);                                                        // [0x6ee6cdc] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerPortsUpdated
	// void ServerPortsUpdated(TArray<FPortUpdateInfo> PortChangeInfos);                                                        // [0xa4d67ac] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerPortActivatedStateChanged
	// void ServerPortActivatedStateChanged(UFMDeviceCablePortComponent* Port, EDeviceCableActivatedState ActivatedState);      // [0x8783084] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerDisconnectController
	// void ServerDisconnectController();                                                                                       // [0x5d4e118] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.SelectPort
	// void SelectPort(UFMDeviceCablePortComponent* SelectedPort);                                                              // [0xa4d672c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnWeaponEquipped
	// void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);                                                  // [0xa4d65c4] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnRep_ServerDeviceCableManager
	// void OnRep_ServerDeviceCableManager();                                                                                   // [0xa4d6560] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnRep_ServerControllerPort
	// void OnRep_ServerControllerPort();                                                                                       // [0xa4d654c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnNoFabricInteractablesHit
	// void OnNoFabricInteractablesHit();                                                                                       // [0xa4d5ed4] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnFortPawnChanged
	// void OnFortPawnChanged(AFortPawn* Pawn);                                                                                 // [0xa4d6098] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnCreativePlotLinkedVolumeChanged
	// void OnCreativePlotLinkedVolumeChanged(AFortVolume* FortVolume);                                                         // [0xa4d6018] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnControllerCableDisconnected__DelegateSignature
	// void OnControllerCableDisconnected__DelegateSignature();                                                                 // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnControllerCableConnected__DelegateSignature
	// void OnControllerCableConnected__DelegateSignature(TArray<UFMDeviceCablePortComponent*>& ConnectedPorts);                // [0x101681c] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.IsHoldingCable
	// bool IsHoldingCable();                                                                                                   // [0xa4d5ff8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.IsCableConnectionValid
	// bool IsCableConnectionValid(UFMDeviceCablePortComponent* OtherPort);                                                     // [0xa4d5f68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.DropCable
	// void DropCable();                                                                                                        // [0xa4d5ed4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableManagerComponent
/// Size: 0x0268 (0x0000A0 - 0x000308)
class UFMDeviceCableManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(UClass*)                                   DeviceCableClass                                            OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(int32_t)                                   StartingCablePoolSize                                       OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	CMember(EDeviceCableInteractionType)               CableInteractionType                                        OFFSET(get<T>, {0xAC, 1, 0, 0})
	CMember(TMap<EDeviceCablePortDataType, UClass*>)   ConnectionClasses                                           OFFSET(get<T>, {0xB0, 80, 0, 0})
	CMember(USoundSourceBus*)                          DefaultSourceBus                                            OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FGameplayEventListenerBackwardCompatibleHandle) PlayerEnteredHandle                                    OFFSET(getStruct<T>, {0x108, 72, 0, 0})
	CMember(TArray<AFMDeviceCable*>)                   FreeDeviceCables                                            OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(TArray<UFMDeviceCableConnectionBase*>)     CableConnections                                            OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TMap<FGuid, TWeakObjectPtr>)               PortsInVolume                                               OFFSET(get<T>, {0x170, 80, 0, 0})
	CMember(TMap<FGuid, FGuid>)                        OriginalGuidToDuplicatedGuidThisFrame                       OFFSET(get<T>, {0x1C0, 80, 0, 0})
	CMember(TMap<TWeakObjectPtr, TWeakObjectPtr>)      SourceObjectToDuplicatedObjectThisFrame                     OFFSET(get<T>, {0x210, 80, 0, 0})
	SMember(FFMDeviceCableDefaultOutputs)              DefaultConnectionOutputs                                    OFFSET(getStruct<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableManagerComponent.GetCableInteractionType
	// EDeviceCableInteractionType GetCableInteractionType();                                                                   // [0xa4d80e4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent
/// Size: 0x02F0 (0x000640 - 0x000930)
class UFMDeviceCablePortComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2352;

public:
	SMember(FMulticastInlineDelegate)                  OnCablePortSizeUpdated                                      OFFSET(getStruct<T>, {0x670, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAnimatorCreated                                           OFFSET(getStruct<T>, {0x680, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnConnected                                                 OFFSET(getStruct<T>, {0x690, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDisconnected                                              OFFSET(getStruct<T>, {0x6C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnConnectionStarted                                         OFFSET(getStruct<T>, {0x6D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnConnectionEnded                                           OFFSET(getStruct<T>, {0x6E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPortArtifactUpdated                                       OFFSET(getStruct<T>, {0x6F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReceiveFloatProviders                                     OFFSET(getStruct<T>, {0x700, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDisconnectFloatProvider                                   OFFSET(getStruct<T>, {0x710, 16, 0, 0})
	CMember(UClass*)                                   DeviceCableManagerClass                                     OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              OutputStaticMesh                                            OFFSET(get<T>, {0x728, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              AudioInStaticMesh                                           OFFSET(get<T>, {0x748, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              NoteInStaticMesh                                            OFFSET(get<T>, {0x768, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              TextureInStaticMesh                                         OFFSET(get<T>, {0x788, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              MeshInStaticMesh                                            OFFSET(get<T>, {0x7A8, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              ScalarInStaticMesh                                          OFFSET(get<T>, {0x7C8, 32, 0, 0})
	CMember(TMap<EDeviceCablePortDataType, UClass*>)   CableAnimatorClasses                                        OFFSET(get<T>, {0x7E8, 80, 0, 0})
	CMember(EDeviceCablePortFlowType)                  PortFlowType                                                OFFSET(get<T>, {0x838, 1, 0, 0})
	CMember(EDeviceCablePortDataType)                  PortDataType                                                OFFSET(get<T>, {0x839, 1, 0, 0})
	CMember(EDeviceCableLoadableState)                 PortLoadableState                                           OFFSET(get<T>, {0x83A, 1, 0, 0})
	CMember(EDeviceCablePortAnimationSyncType)         AnimationSyncType                                           OFFSET(get<T>, {0x83B, 1, 0, 0})
	DMember(bool)                                      bAllowMultipleConnections                                   OFFSET(get<bool>, {0x83C, 1, 0, 0})
	DMember(bool)                                      bAllowSiblingConnections                                    OFFSET(get<bool>, {0x83D, 1, 0, 0})
	CMember(EFMDeviceCablePortComponentAllowMultipleConnections) OverrideAllowMultipleConnections                  OFFSET(get<T>, {0x840, 4, 0, 0})
	CMember(EFMDeviceCablePortComponentAllowMultipleConnections) OverrideAllowSiblingConnections                   OFFSET(get<T>, {0x844, 4, 0, 0})
	DMember(bool)                                      bHideWhenNotRelevant                                        OFFSET(get<bool>, {0x848, 1, 0, 0})
	DMember(bool)                                      bIsPlayerPort                                               OFFSET(get<bool>, {0x849, 1, 0, 0})
	DMember(bool)                                      bIsOnPreviewBuildingActor                                   OFFSET(get<bool>, {0x84A, 1, 0, 0})
	SMember(FName)                                     EnterVolumeTag                                              OFFSET(getStruct<T>, {0x84C, 4, 0, 0})
	SMember(FName)                                     ExitVolumeTag                                               OFFSET(getStruct<T>, {0x850, 4, 0, 0})
	CMember(TArray<UFMDeviceCablePortComponent*>)      ConnectedPorts                                              OFFSET(get<T>, {0x858, 16, 0, 0})
	CMember(TArray<UFMDeviceCablePortComponent*>)      ServerConnectedPorts                                        OFFSET(get<T>, {0x868, 16, 0, 0})
	CMember(TArray<UFMDeviceCableConnectionBase*>)     CurrentConnections                                          OFFSET(get<T>, {0x878, 16, 0, 0})
	CMember(AFMDeviceCable*)                           ConstantCable                                               OFFSET(get<T>, {0x888, 8, 0, 0})
	CMember(UFMDeviceCableManagerComponent*)           DeviceCableManager                                          OFFSET(get<T>, {0x890, 8, 0, 0})
	CMember(TArray<UFMDeviceCablePortComponent*>)      OtherPortsOnActor                                           OFFSET(get<T>, {0x898, 16, 0, 0})
	CMember(EDeviceCableActivatedState)                PortActivatedState                                          OFFSET(get<T>, {0x8A8, 1, 0, 0})
	CMember(EDeviceCableActivatedState)                ServerPortActivatedState                                    OFFSET(get<T>, {0x8A9, 1, 0, 0})
	CMember(EDeviceCablePortSelectableState)           PortSelectableState                                         OFFSET(get<T>, {0x8AA, 1, 0, 0})
	CMember(UFMDeviceCableAnimatorBase*)               DeviceCableAnimator                                         OFFSET(get<T>, {0x8B0, 8, 0, 0})
	SMember(FGuid)                                     ConnectionGuid                                              OFFSET(getStruct<T>, {0x8B8, 16, 0, 0})
	CMember(TArray<FGuid>)                             ConnectedGuids                                              OFFSET(get<T>, {0x8C8, 16, 0, 0})
	SMember(FFMDeviceCableArtifact)                    CachedArtifact                                              OFFSET(getStruct<T>, {0x8D8, 32, 0, 0})
	CMember(TArray<UFMDeviceCablePortComponent*>)      PendingConnectionBroadcasts                                 OFFSET(get<T>, {0x908, 16, 0, 0})
	SMember(FGuid)                                     SaveGuid                                                    OFFSET(getStruct<T>, {0x918, 16, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.UpdateStaticMesh
	// void UpdateStaticMesh();                                                                                                 // [0xa4d9c54] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortVisibility
	// void SetPortVisibility(bool bPortVisible);                                                                               // [0xa4d9bd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortSelectableState
	// void SetPortSelectableState(EDeviceCablePortSelectableState NewSelectableState);                                         // [0xa4d9b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortConnectionsDirty
	// void SetPortConnectionsDirty();                                                                                          // [0xa4d9b3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortActivatedState
	// void SetPortActivatedState(EDeviceCableActivatedState NewActivatedState);                                                // [0xa4d9abc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetDeviceCableAnimator
	// void SetDeviceCableAnimator(UFMDeviceCableAnimatorBase* InAnimator);                                                     // [0x551cb00] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetCachedArtifact
	// void SetCachedArtifact(FFMDeviceCableArtifact& InCachedArtifact);                                                        // [0xa4d99b4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SelectWithStaticOutputInteraction
	// EPortSelectStatus SelectWithStaticOutputInteraction(UFMDeviceCablePortComponent* PlayerSelectionPort, TArray<FPortUpdateInfo>& OutPortUpdates); // [0xa4d9378] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.Select
	// EPortSelectStatus Select(UFMDeviceCablePortComponent* PlayerSelectionPort, TArray<FPortUpdateInfo>& OutPortUpdates);     // [0xa4d8d38] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OpenConnectionToPort
	// void OpenConnectionToPort(UFMDeviceCablePortComponent* OtherPort);                                                       // [0xa4d8cb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_ServerPortActivatedState
	// void OnRep_ServerPortActivatedState();                                                                                   // [0xa4d8c88] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_ServerConnectedPorts
	// void OnRep_ServerConnectedPorts();                                                                                       // [0xa4d8c74] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_DeviceCableManager
	// void OnRep_DeviceCableManager();                                                                                         // [0xa4d8c1c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_ConstantCable
	// void OnRep_ConstantCable();                                                                                              // [0xa4d8bd0] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnReceiveFloatProviders__DelegateSignature
	// void OnReceiveFloatProviders__DelegateSignature(TArray<UFabricFloatProviderBase*>& FloatProviders);                      // [0x101681c] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnPortArtifactUpdated__DelegateSignature
	// void OnPortArtifactUpdated__DelegateSignature();                                                                         // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnPlayerControllerPortDisconnected
	// void OnPlayerControllerPortDisconnected();                                                                               // [0xa4d8bbc] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnPlayerControllerPortConnected
	// void OnPlayerControllerPortConnected(TArray<UFMDeviceCablePortComponent*>& ControllerPorts);                             // [0xa4d8598] Final|Native|Private|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnDisconnectFloatProvider__DelegateSignature
	// void OnDisconnectFloatProvider__DelegateSignature(UFabricFloatProviderBase* FloatProvider);                              // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnDisconnected__DelegateSignature
	// void OnDisconnected__DelegateSignature(UFMDeviceCablePortComponent* DisconnectedPort);                                   // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnectionStarted__DelegateSignature
	// void OnConnectionStarted__DelegateSignature(UFMDeviceCableConnectionBase* NewConnection);                                // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnectionEnded__DelegateSignature
	// void OnConnectionEnded__DelegateSignature(UFMDeviceCableConnectionBase* EndedConnection);                                // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnectedWithSourcePort__DelegateSignature
	// void OnConnectedWithSourcePort__DelegateSignature(UFMDeviceCablePortComponent* SourcePort, UFMDeviceCablePortComponent* OtherPort); // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnected__DelegateSignature
	// void OnConnected__DelegateSignature(UFMDeviceCablePortComponent* ConnectedPort);                                         // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnAnimatorCreated__DelegateSignature
	// void OnAnimatorCreated__DelegateSignature(UFMDeviceCableAnimatorBase* Animator);                                         // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.MatchesPortConnectionType
	// bool MatchesPortConnectionType(UFMDeviceCablePortComponent* OtherPort);                                                  // [0xa4d84d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.IsConnectedToPort
	// bool IsConnectedToPort(UFMDeviceCablePortComponent* Port);                                                               // [0xa4d8358] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.IsConnected
	// bool IsConnected();                                                                                                      // [0xa4d833c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPreviousPortsInConnections
	// TArray<UFMDeviceCablePortComponent*> GetPreviousPortsInConnections();                                                    // [0xa4d8300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortSelectableState
	// EDeviceCablePortSelectableState GetPortSelectableState();                                                                // [0xa4d82e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortFlowType
	// EDeviceCablePortFlowType GetPortFlowType();                                                                              // [0xa4d82d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortDataType
	// EDeviceCablePortDataType GetPortDataType();                                                                              // [0xa4d82b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortActivatedState
	// EDeviceCableActivatedState GetPortActivatedState();                                                                      // [0x9a467f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetOtherPortsOnActor
	// TArray<UFMDeviceCablePortComponent*> GetOtherPortsOnActor();                                                             // [0xa4d829c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetNextPortsInConnections
	// TArray<UFMDeviceCablePortComponent*> GetNextPortsInConnections();                                                        // [0xa4d8260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetIsTerminalPort
	// bool GetIsTerminalPort(EDeviceCablePortFlowType FlowType);                                                               // [0xa4d81d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetIsPlayerPort
	// bool GetIsPlayerPort();                                                                                                  // [0xa4d81bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetGuid
	// FGuid GetGuid();                                                                                                         // [0xa4d818c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetDeviceCableAnimator
	// UFMDeviceCableAnimatorBase* GetDeviceCableAnimator();                                                                    // [0xa4d8174] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetConstantCable
	// AFMDeviceCable* GetConstantCable();                                                                                      // [0xa4d815c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetConnections
	// TArray<UFMDeviceCableConnectionBase*> GetConnections();                                                                  // [0xa4d8140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetConnectedPorts
	// TArray<UFMDeviceCablePortComponent*> GetConnectedPorts();                                                                // [0xa4d8124] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetCachedArtifact
	// FFMDeviceCableArtifact GetCachedArtifact();                                                                              // [0xa4d80fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetAnimationSyncType
	// EDeviceCablePortAnimationSyncType GetAnimationSyncType();                                                                // [0xa4d80cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.FabricCablePortSizeUpdated__DelegateSignature
	// void FabricCablePortSizeUpdated__DelegateSignature(float Size);                                                          // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.EndConnectionWithPort
	// void EndConnectionWithPort(UFMDeviceCablePortComponent* OtherPort);                                                      // [0xa4d804c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.ActorHasValidControllerBP
	// bool ActorHasValidControllerBP(AActor* Actor, AFortPlayerPawn*& OutFortPlayerPawn, APlayerController*& OutPlayerController); // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableModulatorPortComponent
/// Size: 0x0030 (0x000930 - 0x000960)
class UFMDeviceCableModulatorPortComponent : public UFMDeviceCablePortComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2400;

public:
	SMember(FString)                                   AssociatedProperty                                          OFFSET(getStruct<T>, {0x938, 16, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  AssociatedObject                                            OFFSET(get<T>, {0x948, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableModulatorPortComponent.SetDeviceCableManager
	// void SetDeviceCableManager(UFMDeviceCableManagerComponent* InDeviceCableManager);                                        // [0xa4d9a3c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCablesFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFMDeviceCablesFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent
/// Size: 0x04D0 (0x0000A0 - 0x000570)
class UFMDeviceCableWildcardOrderingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	SMember(FFMDeviceCableOrderingMovementState)       InputsShowHideMovement                                      OFFSET(getStruct<T>, {0xA0, 160, 0, 0})
	SMember(FFMDeviceCableOrderingMovementStateIndividual) OutputsShowHideMovement                                 OFFSET(getStruct<T>, {0x140, 320, 0, 0})
	SMember(FFMDeviceCableOrderingMovementStateSlot)   OutputsCollapseExpandMovement                               OFFSET(getStruct<T>, {0x280, 160, 0, 0})
	SMember(FFMDeviceCableOrderingMovementStateIndividual) OutputListShiftMovement                                 OFFSET(getStruct<T>, {0x320, 320, 0, 0})
	SMember(FName)                                     ClosedMeshTag                                               OFFSET(getStruct<T>, {0x460, 4, 0, 0})
	SMember(FName)                                     TopMeshTag                                                  OFFSET(getStruct<T>, {0x464, 4, 0, 0})
	SMember(FName)                                     MiddleMeshTag                                               OFFSET(getStruct<T>, {0x468, 4, 0, 0})
	SMember(FName)                                     BottomMeshTag                                               OFFSET(getStruct<T>, {0x46C, 4, 0, 0})
	CMember(UStaticMeshComponent*)                     ClosedMesh                                                  OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     TopMesh                                                     OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             MiddleMeshes                                                OFFSET(get<T>, {0x480, 16, 0, 0})
	CMember(UStaticMeshComponent*)                     BottomMesh                                                  OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(TArray<UFMDeviceCableWildcardPortComponent*>) InputWildcardPorts                                       OFFSET(get<T>, {0x4A8, 16, 0, 0})
	CMember(TArray<UFMDeviceCableWildcardPortComponent*>) OutputWildcardPorts                                      OFFSET(get<T>, {0x4B8, 16, 0, 0})
	CMember(TArray<UFMDeviceCableWildcardPortComponent*>) PortsWithPendingDisconnects                              OFFSET(get<T>, {0x4F8, 16, 0, 0})
	CMember(TArray<FFMDeviceCableOrderingPortState>)   ServerPortStates                                            OFFSET(get<T>, {0x558, 16, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.SetOutputRoot
	// void SetOutputRoot(FVector RootLocation);                                                                                // [0xa4f6ba4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.SetOutputPortsExpanded
	// void SetOutputPortsExpanded(bool bExpanded);                                                                             // [0xa4f6b18] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.SetInputRoot
	// void SetInputRoot(FVector RootLocation);                                                                                 // [0xa4f69d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnRep_ServerPortStates
	// void OnRep_ServerPortStates();                                                                                           // [0xa4f69bc] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnOutputPortSlotSetFromSave
	// void OnOutputPortSlotSetFromSave(UFMDeviceCableWildcardPortComponent* WildcardPort, bool bHasConnections);               // [0xa4f6260] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnOutputPortDisconnected
	// void OnOutputPortDisconnected(UFMDeviceCablePortComponent* SourcePort, UFMDeviceCablePortComponent* DisconnectedPort);   // [0xa4f619c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnOutputPortConnected
	// void OnOutputPortConnected(UFMDeviceCablePortComponent* SourcePort, UFMDeviceCablePortComponent* ConnectedPort);         // [0xa4f60d8] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnInputPortDisconnected
	// void OnInputPortDisconnected(UFMDeviceCablePortComponent* DisconnectedPort);                                             // [0xa4f6058] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnInputPortDataTypeChanged
	// void OnInputPortDataTypeChanged(UFMDeviceCableWildcardPortComponent* WildcardPort, EDeviceCablePortDataType DataType);   // [0xa4f5f90] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnInputPortConnected
	// void OnInputPortConnected(UFMDeviceCablePortComponent* ConnectedPort);                                                   // [0xa4f5f0c] Final|Native|Private 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent
/// Size: 0x0030 (0x000930 - 0x000960)
class UFMDeviceCableWildcardPortComponent : public UFMDeviceCablePortComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2400;

public:
	SMember(FMulticastInlineDelegate)                  OnWildcardDataTypeChanged                                   OFFSET(getStruct<T>, {0x930, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWildcardPortSlotSetFromSave                               OFFSET(getStruct<T>, {0x940, 16, 0, 0})
	DMember(int32_t)                                   SlotIndex                                                   OFFSET(get<int32_t>, {0x950, 4, 0, 0})
	DMember(int32_t)                                   SavedSlotIndex                                              OFFSET(get<int32_t>, {0x954, 4, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnWildcardPortSlotSetFromSave__DelegateSignature
	// void OnWildcardPortSlotSetFromSave__DelegateSignature(UFMDeviceCableWildcardPortComponent* WildcardPort, bool bHasConnections); // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnWildcardDataTypeChanged__DelegateSignature
	// void OnWildcardDataTypeChanged__DelegateSignature(UFMDeviceCableWildcardPortComponent* WildcardPort, EDeviceCablePortDataType DataType); // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnRep_SavedSlotIndex
	// void OnRep_SavedSlotIndex();                                                                                             // [0xa4f6960] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnPlayerControllerPortDisconnectedWildcard
	// void OnPlayerControllerPortDisconnectedWildcard();                                                                       // [0xa4f694c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnPlayerControllerPortConnectedWildcard
	// void OnPlayerControllerPortConnectedWildcard(TArray<UFMDeviceCablePortComponent*>& ControllerPorts);                     // [0xa4f6328] Final|Native|Private|HasOutParms 
};

/// Struct /Script/FMDeviceCablesRuntime.PortUpdateInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FPortUpdateInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EPortSelectStatus)                         PortSelectStatus                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UFMDeviceCablePortComponent*)              ConstantPort                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UFMDeviceCablePortComponent*)              ConnectedPort                                               OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UFMDeviceCablePortComponent*)              DisconnectedPort                                            OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableArtifact
/// Size: 0x0020 (0x000000 - 0x000020)
class FFMDeviceCableArtifact : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UFabricMeshTreeNode*)                      MeshTreeNode                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UFabricMetaSoundTreeNode*)                 MetaSoundTreeNode                                           OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UFabricTextureTreeNode*)                   TextureTreeNode                                             OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UFabricModulationNode*)                    ModulationNode                                              OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableTerminalDeviceInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FFMDeviceCableTerminalDeviceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<UFMDeviceCablePortComponent*>) TerminalPort                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   TerminalActor                                               OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCablePassthroughDeviceInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FFMDeviceCablePassthroughDeviceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<UFMDeviceCablePortComponent*>) InputPort                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFMDeviceCablePortComponent*>) OutputPort                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   PassthroughActor                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableConnectedDevicesInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FFMDeviceCableConnectedDevicesInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FFMDeviceCableTerminalDeviceInfo)          SourceDeviceInfo                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FFMDeviceCableTerminalDeviceInfo)          DestinationDeviceInfo                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FFMDeviceCablePassthroughDeviceInfo>) PassthroughDeviceInfos                                    OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableDefaultOutputs
/// Size: 0x0008 (0x000000 - 0x000008)
class FFMDeviceCableDefaultOutputs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(USoundSourceBus*)                          SourceBus                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableTopologyNode
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FFMDeviceCableTopologyNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TWeakObjectPtr<UFMDeviceCablePortComponent*>) Port                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableActiveConnectionsList
/// Size: 0x0010 (0x000000 - 0x000010)
class FFMDeviceCableActiveConnectionsList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UFMDeviceCableConnectionBase*>)     ActiveConnections                                           OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.ModulatorPortSaveData
/// Size: 0x0020 (0x000000 - 0x000020)
class FModulatorPortSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     ConnectionGuid                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGuid>)                             ConnectedGuids                                              OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingPortState
/// Size: 0x0018 (0x000000 - 0x000018)
class FFMDeviceCableOrderingPortState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UFMDeviceCableWildcardPortComponent*)      WildcardPort                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EFMDeviceCableWildcardOrderingState)       VisualState                                                 OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(EFMDeviceCableWildcardOrderingState)       State                                                       OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Slot                                                        OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingMovementState
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FFMDeviceCableOrderingMovementState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UCurveFloat*)                              Curve                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(float)                                     MovementTimeSeconds                                         OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bMovementActive                                             OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bInvertVector                                               OFFSET(get<bool>, {0x2D, 1, 0, 0})
	DMember(bool)                                      bMovementState                                              OFFSET(get<bool>, {0x2E, 1, 0, 0})
	DMember(float)                                     RunningMovementTimeSeconds                                  OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(TArray<UFMDeviceCableWildcardPortComponent*>) RelevantPorts                                            OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingMovementStateSlot
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class FFMDeviceCableOrderingMovementStateSlot : public FFMDeviceCableOrderingMovementState
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingMovementStateIndividual
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class FFMDeviceCableOrderingMovementStateIndividual : public FFMDeviceCableOrderingMovementState
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCableActivatedState
/// Size: 0x03
enum EDeviceCableActivatedState : uint8_t
{
	EDeviceCableActivatedState__Active0                                              = 0,
	EDeviceCableActivatedState__Dormant1                                             = 1,
	EDeviceCableActivatedState__EDeviceCableActivatedState_MAX2                      = 2
};

/// Enum /Script/FMDeviceCablesRuntime.EPortSelectStatus
/// Size: 0x15
enum EPortSelectStatus : uint8_t
{
	EPortSelectStatus__Error0                                                        = 0,
	EPortSelectStatus__ControllerCableUsed1                                          = 1,
	EPortSelectStatus__GaveControllerCable2                                          = 2,
	EPortSelectStatus__CableSwap3                                                    = 3,
	EPortSelectStatus__NewCableUsed4                                                 = 4,
	EPortSelectStatus__ConstantCableUsed5                                            = 5,
	EPortSelectStatus__ConnectionEnded6                                              = 6,
	EPortSelectStatus__NoCableAvailable7                                             = 7,
	EPortSelectStatus__TypeMismatch8                                                 = 8,
	EPortSelectStatus__AttemptedMultiConnect9                                        = 9,
	EPortSelectStatus__SelfSelect10                                                  = 10,
	EPortSelectStatus__InvalidConnection11                                           = 11,
	EPortSelectStatus__WouldCreateLoop12                                             = 12,
	EPortSelectStatus__Unselectable13                                                = 13,
	EPortSelectStatus__EPortSelectStatus_MAX14                                       = 14
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortAnimationSyncType
/// Size: 0x04
enum EDeviceCablePortAnimationSyncType : uint8_t
{
	EDeviceCablePortAnimationSyncType__Follower0                                     = 0,
	EDeviceCablePortAnimationSyncType__Authority1                                    = 1,
	EDeviceCablePortAnimationSyncType__Independent2                                  = 2,
	EDeviceCablePortAnimationSyncType__EDeviceCablePortAnimationSyncType_MAX3        = 3
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortFlowType
/// Size: 0x04
enum EDeviceCablePortFlowType : uint8_t
{
	EDeviceCablePortFlowType__Input0                                                 = 0,
	EDeviceCablePortFlowType__Output1                                                = 1,
	EDeviceCablePortFlowType__Any2                                                   = 2,
	EDeviceCablePortFlowType__EDeviceCablePortFlowType_MAX3                          = 3
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortDataType
/// Size: 0x07
enum EDeviceCablePortDataType : uint8_t
{
	EDeviceCablePortDataType__Scalar0                                                = 0,
	EDeviceCablePortDataType__Note1                                                  = 1,
	EDeviceCablePortDataType__Audio2                                                 = 2,
	EDeviceCablePortDataType__Texture3                                               = 3,
	EDeviceCablePortDataType__Mesh4                                                  = 4,
	EDeviceCablePortDataType__Any5                                                   = 5,
	EDeviceCablePortDataType__EDeviceCablePortDataType_MAX6                          = 6
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortSelectableState
/// Size: 0x03
enum EDeviceCablePortSelectableState : uint8_t
{
	EDeviceCablePortSelectableState__Selectable0                                     = 0,
	EDeviceCablePortSelectableState__Unselectable1                                   = 1,
	EDeviceCablePortSelectableState__EDeviceCablePortSelectableState_MAX2            = 2
};

/// Enum /Script/FMDeviceCablesRuntime.EFMDeviceCablePortComponentAllowMultipleConnections
/// Size: 0x04
enum EFMDeviceCablePortComponentAllowMultipleConnections : uint8_t
{
	EFMDeviceCablePortComponentAllowMultipleConnections__NoPreference0               = 0,
	EFMDeviceCablePortComponentAllowMultipleConnections__ForceMultiple1              = 1,
	EFMDeviceCablePortComponentAllowMultipleConnections__ForceSingle2                = 2,
	EFMDeviceCablePortComponentAllowMultipleConnections__EFMDeviceCablePortComponentAllowMultipleConnections_MAX3 = 3
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCableLoadableState
/// Size: 0x03
enum EDeviceCableLoadableState : uint8_t
{
	EDeviceCableLoadableState__Loadable0                                             = 0,
	EDeviceCableLoadableState__NotLoadable1                                          = 1,
	EDeviceCableLoadableState__EDeviceCableLoadableState_MAX2                        = 2
};

/// Enum /Script/FMDeviceCablesRuntime.EFMDeviceCableAnimationQuality
/// Size: 0x04
enum EFMDeviceCableAnimationQuality : uint8_t
{
	EFMDeviceCableAnimationQuality__High0                                            = 0,
	EFMDeviceCableAnimationQuality__Med1                                             = 1,
	EFMDeviceCableAnimationQuality__Low2                                             = 2,
	EFMDeviceCableAnimationQuality__EFMDeviceCableAnimationQuality_MAX3              = 3
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCableInteractionType
/// Size: 0x03
enum EDeviceCableInteractionType : uint8_t
{
	EDeviceCableInteractionType__Free0                                               = 0,
	EDeviceCableInteractionType__StaticOutput1                                       = 1,
	EDeviceCableInteractionType__EDeviceCableInteractionType_MAX2                    = 2
};

/// Enum /Script/FMDeviceCablesRuntime.EFMDeviceCableWildcardOrderingState
/// Size: 0x04
enum EFMDeviceCableWildcardOrderingState : uint8_t
{
	EFMDeviceCableWildcardOrderingState__Inactive0                                   = 0,
	EFMDeviceCableWildcardOrderingState__Pending1                                    = 1,
	EFMDeviceCableWildcardOrderingState__Active2                                     = 2,
	EFMDeviceCableWildcardOrderingState__EFMDeviceCableWildcardOrderingState_MAX3    = 3
};

