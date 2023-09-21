
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AugmentedReality.ARActor
/// Size: 0x0000 (0x000290 - 0x000290)
class AARActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/AugmentedReality.ARBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AugmentedReality.ARTraceResultLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
/// Size: 0x0030 (0x000050 - 0x000080)
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailed                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	// UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(UObject* WorldContextObject);                                           // [0xa030a38] Final|Native|Static|Public|BlueprintCallable 
/// Class /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
/// Size: 0x0060 (0x000050 - 0x0000B0)
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailed                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	// UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(UObject* WorldContextObject, FVector Location, FVector Extent); // [0xa030754] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
/// Class /Script/AugmentedReality.ARComponent
/// Size: 0x0080 (0x0002A0 - 0x000320)
class UARComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FGuid)                                     NativeID                                                    OFFSET(get<T>, {0x2A0, 16, 0, 0})
	DMember(bool)                                      bUseDefaultReplication                                      OFFSET(get<bool>, {0x2E0, 1, 0, 0})
	CMember(UMaterialInterface*)                       DefaultMeshMaterial                                         OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UMaterialInterface*)                       DefaultWireframeMeshMaterial                                OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UMRMeshComponent*)                         MRMeshComponent                                             OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UARTrackedGeometry*)                       MyTrackedGeometry                                           OFFSET(get<T>, {0x300, 8, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARComponent.UpdateVisualization
	// void UpdateVisualization();                                                                                              // [0x5b59e94] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/AugmentedReality.ARComponent.SetNativeID
	// void SetNativeID(FGuid NativeID);                                                                                        // [0xa03b288] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARComponent.ReceiveRemove
	// void ReceiveRemove();                                                                                                    // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/AugmentedReality.ARComponent.OnRep_Payload
	// void OnRep_Payload();                                                                                                    // [0x8774a80] Native|Protected     
	// Function /Script/AugmentedReality.ARComponent.GetMRMesh
	// UMRMeshComponent* GetMRMesh();                                                                                           // [0xa035a70] Final|Native|Public|BlueprintCallable|BlueprintPure 
/// Class /Script/AugmentedReality.ARPlaneComponent
/// Size: 0x00D0 (0x000320 - 0x0003F0)
class UARPlaneComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FARPlaneUpdatePayload)                     ReplicatedPayload                                           OFFSET(get<T>, {0x320, 208, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
	// void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);                                                  // [0xa03b4b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
	// void SetObjectClassificationDebugColors(TMap<EARObjectClassification, FLinearColor>& InColors);                          // [0xa03b3e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPlaneComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARPlaneUpdatePayload NewPayload);                                                              // [0xa038fec] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveUpdate
	// void ReceiveUpdate(FARPlaneUpdatePayload& Payload);                                                                      // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveAdd
	// void ReceiveAdd(FARPlaneUpdatePayload& Payload);                                                                         // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
	// TMap<EARObjectClassification, FLinearColor> GetObjectClassificationDebugColors();                                        // [0xa0361a8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
/// Class /Script/AugmentedReality.ARPointComponent
/// Size: 0x0010 (0x000320 - 0x000330)
class UARPointComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FARPointUpdatePayload)                     ReplicatedPayload                                           OFFSET(get<T>, {0x320, 1, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARPointComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARPointUpdatePayload NewPayload);                                                              // [0xa0391a4] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveUpdate
	// void ReceiveUpdate(FARPointUpdatePayload& Payload);                                                                      // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveAdd
	// void ReceiveAdd(FARPointUpdatePayload& Payload);                                                                         // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
/// Class /Script/AugmentedReality.ARFaceComponent
/// Size: 0x0090 (0x000320 - 0x0003B0)
class UARFaceComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	CMember(EARFaceTransformMixing)                    TransformSetting                                            OFFSET(get<T>, {0x320, 1, 0, 0})
	DMember(bool)                                      bUpdateVertexNormal                                         OFFSET(get<bool>, {0x321, 1, 0, 0})
	DMember(bool)                                      bFaceOutOfScreen                                            OFFSET(get<bool>, {0x322, 1, 0, 0})
	SMember(FARFaceUpdatePayload)                      ReplicatedPayload                                           OFFSET(get<T>, {0x328, 96, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
	// void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);                                                    // [0xa03a970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARFaceComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARFaceUpdatePayload NewPayload);                                                               // [0xa038904] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveUpdate
	// void ReceiveUpdate(FARFaceUpdatePayload& Payload);                                                                       // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveAdd
	// void ReceiveAdd(FARFaceUpdatePayload& Payload);                                                                          // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
/// Class /Script/AugmentedReality.ARImageComponent
/// Size: 0x00A0 (0x000320 - 0x0003C0)
class UARImageComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FARImageUpdatePayload)                     ReplicatedPayload                                           OFFSET(get<T>, {0x320, 160, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARImageComponent.SetImageComponentDebugMode
	// void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);                                                  // [0xa03b20c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARImageComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARImageUpdatePayload NewPayload);                                                              // [0xa038c48] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveUpdate
	// void ReceiveUpdate(FARImageUpdatePayload& Payload);                                                                      // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveAdd
	// void ReceiveAdd(FARImageUpdatePayload& Payload);                                                                         // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
/// Class /Script/AugmentedReality.ARQRCodeComponent
/// Size: 0x00B0 (0x000320 - 0x0003D0)
class UARQRCodeComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	SMember(FARQRCodeUpdatePayload)                    ReplicatedPayload                                           OFFSET(get<T>, {0x320, 176, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
	// void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);                                                // [0xa03b6a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARQRCodeUpdatePayload NewPayload);                                                             // [0xa03951c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveUpdate
	// void ReceiveUpdate(FARQRCodeUpdatePayload& Payload);                                                                     // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveAdd
	// void ReceiveAdd(FARQRCodeUpdatePayload& Payload);                                                                        // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
/// Class /Script/AugmentedReality.ARPoseComponent
/// Size: 0x0070 (0x000320 - 0x000390)
class UARPoseComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FARPoseUpdatePayload)                      ReplicatedPayload                                           OFFSET(get<T>, {0x320, 112, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
	// void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);                                                    // [0xa03b534] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPoseComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARPoseUpdatePayload NewPayload);                                                               // [0xa03931c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveUpdate
	// void ReceiveUpdate(FARPoseUpdatePayload& Payload);                                                                       // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveAdd
	// void ReceiveAdd(FARPoseUpdatePayload& Payload);                                                                          // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
/// Class /Script/AugmentedReality.AREnvironmentProbeComponent
/// Size: 0x0060 (0x000320 - 0x000380)
class UAREnvironmentProbeComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FAREnvironmentProbeUpdatePayload)          ReplicatedPayload                                           OFFSET(get<T>, {0x320, 96, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FAREnvironmentProbeUpdatePayload NewPayload);                                                   // [0xa038720] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
	// void ReceiveUpdate(FAREnvironmentProbeUpdatePayload& Payload);                                                           // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
	// void ReceiveAdd(FAREnvironmentProbeUpdatePayload& Payload);                                                              // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
/// Class /Script/AugmentedReality.ARObjectComponent
/// Size: 0x0060 (0x000320 - 0x000380)
class UARObjectComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FARObjectUpdatePayload)                    ReplicatedPayload                                           OFFSET(get<T>, {0x320, 96, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARObjectComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARObjectUpdatePayload NewPayload);                                                             // [0xa038720] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveUpdate
	// void ReceiveUpdate(FARObjectUpdatePayload& Payload);                                                                     // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveAdd
	// void ReceiveAdd(FARObjectUpdatePayload& Payload);                                                                        // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
/// Class /Script/AugmentedReality.ARMeshComponent
/// Size: 0x0090 (0x000320 - 0x0003B0)
class UARMeshComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FARMeshUpdatePayload)                      ReplicatedPayload                                           OFFSET(get<T>, {0x320, 144, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARMeshComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARMeshUpdatePayload NewPayload);                                                               // [0xa038df4] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveUpdate
	// void ReceiveUpdate(FARMeshUpdatePayload& Payload);                                                                       // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveAdd
	// void ReceiveAdd(FARMeshUpdatePayload& Payload);                                                                          // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
/// Class /Script/AugmentedReality.ARGeoAnchorComponent
/// Size: 0x00A0 (0x000320 - 0x0003C0)
class UARGeoAnchorComponent : public UARComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FARGeoAnchorUpdatePayload)                 ReplicatedPayload                                           OFFSET(get<T>, {0x320, 160, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
	// void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);                                          // [0xa03b190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARGeoAnchorUpdatePayload NewPayload);                                                          // [0xa038a90] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
	// void ReceiveUpdate(FARGeoAnchorUpdatePayload& Payload);                                                                  // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
	// void ReceiveAdd(FARGeoAnchorUpdatePayload& Payload);                                                                     // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
/// Class /Script/AugmentedReality.ARDependencyHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UARDependencyHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AugmentedReality.ARGeoTrackingSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class UARGeoTrackingSupport : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailed                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
	// void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, FString Error);                               // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
	// UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(UObject* WorldContextObject, float Longitude, float Latitude); // [0xa0334c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
	// UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(UObject* WorldContextObject);         // [0xa03342c] Final|Native|Static|Public|BlueprintCallable 
/// Class /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
/// Size: 0x0058 (0x000050 - 0x0000A8)
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailed                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
	// void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, FString Error);          // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
	// UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(UObject* WorldContextObject, FVector& WorldPosition); // [0xa0353ac] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
/// Class /Script/AugmentedReality.ARLifeCycleComponent
/// Size: 0x0030 (0x0002A0 - 0x0002D0)
class UARLifeCycleComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FMulticastInlineDelegate)                  OnARActorSpawnedDelegate                                    OFFSET(get<T>, {0x2A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnARActorToBeDestroyedDelegate                              OFFSET(get<T>, {0x2B0, 16, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
	// void ServerSpawnARActor(UClass* ComponentClass, FGuid NativeID);                                                         // [0xa03853c] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
	// void ServerDestroyARActor(AARActor* Actor);                                                                              // [0xa038450] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
	// void InstanceARActorToBeDestroyedDelegate__DelegateSignature(AARActor* Actor);                                           // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
	// void InstanceARActorSpawnedDelegate__DelegateSignature(UClass* ComponentClass, FGuid NativeID, AARActor* SpawnedActor);  // [0x1ebf994] MulticastDelegate|Public|Delegate|HasDefaults 
/// Class /Script/AugmentedReality.ARLightEstimate
/// Size: 0x0000 (0x000028 - 0x000028)
class UARLightEstimate : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AugmentedReality.ARBasicLightEstimate
/// Size: 0x0018 (0x000028 - 0x000040)
class UARBasicLightEstimate : public UARLightEstimate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     AmbientIntensityLumens                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     AmbientColorTemperatureKelvin                               OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FLinearColor)                              AmbientColor                                                OFFSET(get<T>, {0x30, 16, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	// float GetAmbientIntensityLumens();                                                                                       // [0x5ffe568] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	// float GetAmbientColorTemperatureKelvin();                                                                                // [0x5ffe6ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	// FLinearColor GetAmbientColor();                                                                                          // [0xa034e38] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/AugmentedReality.AROriginActor
/// Size: 0x0000 (0x000290 - 0x000290)
class AAROriginActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/AugmentedReality.ARPin
/// Size: 0x0128 (0x000028 - 0x000150)
class UARPin : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(UARTrackedGeometry*)                       TrackedGeometry                                             OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(USceneComponent*)                          PinnedComponent                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FTransform)                                LocalToTrackingTransform                                    OFFSET(get<T>, {0x40, 96, 0, 0})
	SMember(FTransform)                                LocalToAlignedTrackingTransform                             OFFSET(get<T>, {0xA0, 96, 0, 0})
	CMember(EARTrackingState)                          TrackingState                                               OFFSET(get<T>, {0x100, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnARTrackingStateChanged                                    OFFSET(get<T>, {0x120, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnARTransformUpdated                                        OFFSET(get<T>, {0x130, 16, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARPin.GetTrackingState
	// EARTrackingState GetTrackingState();                                                                                     // [0x9765db8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetTrackedGeometry
	// UARTrackedGeometry* GetTrackedGeometry();                                                                                // [0x950aa68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetPinnedComponent
	// USceneComponent* GetPinnedComponent();                                                                                   // [0x5ae2078] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetLocalToWorldTransform
	// FTransform GetLocalToWorldTransform();                                                                                   // [0xa035798] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetLocalToTrackingTransform
	// FTransform GetLocalToTrackingTransform();                                                                                // [0xa035650] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetDebugName
	// FName GetDebugName();                                                                                                    // [0xa0351cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.DebugDraw
	// void DebugDraw(UWorld* World, FLinearColor& Color, float Scale, float PersistForSeconds);                                // [0xa0338d8] Native|Public|HasOutParms|HasDefaults|Const 
/// Class /Script/AugmentedReality.ARSessionConfig
/// Size: 0x00E0 (0x000030 - 0x000110)
class UARSessionConfig : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(bool)                                      bGenerateMeshDataFromTrackedGeometry                        OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bGenerateCollisionForMeshData                               OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bGenerateNavMeshForMeshData                                 OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bUseMeshDataForOcclusion                                    OFFSET(get<bool>, {0x33, 1, 0, 0})
	DMember(bool)                                      bRenderMeshDataInWireframe                                  OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(bool)                                      bTrackSceneObjects                                          OFFSET(get<bool>, {0x35, 1, 0, 0})
	DMember(bool)                                      bUsePersonSegmentationForOcclusion                          OFFSET(get<bool>, {0x36, 1, 0, 0})
	DMember(bool)                                      bUseSceneDepthForOcclusion                                  OFFSET(get<bool>, {0x37, 1, 0, 0})
	DMember(bool)                                      bUseAutomaticImageScaleEstimation                           OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bUseStandardOnboardingUX                                    OFFSET(get<bool>, {0x39, 1, 0, 0})
	CMember(EARWorldAlignment)                         WorldAlignment                                              OFFSET(get<T>, {0x3A, 1, 0, 0})
	CMember(EARSessionType)                            SessionType                                                 OFFSET(get<T>, {0x3B, 1, 0, 0})
	CMember(EARPlaneDetectionMode)                     PlaneDetectionMode                                          OFFSET(get<T>, {0x3C, 1, 0, 0})
	DMember(bool)                                      bHorizontalPlaneDetection                                   OFFSET(get<bool>, {0x3D, 1, 0, 0})
	DMember(bool)                                      bVerticalPlaneDetection                                     OFFSET(get<bool>, {0x3E, 1, 0, 0})
	DMember(bool)                                      bEnableAutoFocus                                            OFFSET(get<bool>, {0x3F, 1, 0, 0})
	CMember(EARLightEstimationMode)                    LightEstimationMode                                         OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(EARFrameSyncMode)                          FrameSyncMode                                               OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(bool)                                      bEnableAutomaticCameraOverlay                               OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bEnableAutomaticCameraTracking                              OFFSET(get<bool>, {0x43, 1, 0, 0})
	DMember(bool)                                      bResetCameraTracking                                        OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(bool)                                      bResetTrackedObjects                                        OFFSET(get<bool>, {0x45, 1, 0, 0})
	CMember(TArray<UARCandidateImage*>)                CandidateImages                                             OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   MaxNumSimultaneousImagesTracked                             OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(EAREnvironmentCaptureProbeType)            EnvironmentCaptureProbeType                                 OFFSET(get<T>, {0x5C, 1, 0, 0})
	CMember(TArray<char>)                              WorldMapData                                                OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<UARCandidateObject*>)               CandidateObjects                                            OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FARVideoFormat)                            DesiredVideoFormat                                          OFFSET(get<T>, {0x80, 12, 0, 0})
	DMember(bool)                                      bUseOptimalVideoFormat                                      OFFSET(get<bool>, {0x8C, 1, 0, 0})
	CMember(EARFaceTrackingDirection)                  FaceTrackingDirection                                       OFFSET(get<T>, {0x8D, 1, 0, 0})
	CMember(EARFaceTrackingUpdate)                     FaceTrackingUpdate                                          OFFSET(get<T>, {0x8E, 1, 0, 0})
	DMember(int32_t)                                   MaxNumberOfTrackedFaces                                     OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	CMember(TArray<char>)                              SerializedARCandidateImageDatabase                          OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(EARSessionTrackingFeature)                 EnabledSessionTrackingFeature                               OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(EARSceneReconstruction)                    SceneReconstructionMethod                                   OFFSET(get<T>, {0xA9, 1, 0, 0})
	CMember(UClass*)                                   PlaneComponentClass                                         OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(UClass*)                                   PointComponentClass                                         OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UClass*)                                   FaceComponentClass                                          OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(UClass*)                                   ImageComponentClass                                         OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(UClass*)                                   QRCodeComponentClass                                        OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(UClass*)                                   PoseComponentClass                                          OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(UClass*)                                   EnvironmentProbeComponentClass                              OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(UClass*)                                   ObjectComponentClass                                        OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(UClass*)                                   MeshComponentClass                                          OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(UClass*)                                   GeoAnchorComponentClass                                     OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(UMaterialInterface*)                       DefaultMeshMaterial                                         OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(UMaterialInterface*)                       DefaultWireframeMeshMaterial                                OFFSET(get<T>, {0x108, 8, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	// bool ShouldResetTrackedObjects();                                                                                        // [0xa03ba40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	// bool ShouldResetCameraTracking();                                                                                        // [0xa03ba2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	// bool ShouldRenderCameraOverlay();                                                                                        // [0xa03ba18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	// bool ShouldEnableCameraTracking();                                                                                       // [0xa03ba04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	// bool ShouldEnableAutoFocus();                                                                                            // [0xa03b9f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.SetWorldMapData
	// void SetWorldMapData(TArray<char> WorldMapData);                                                                         // [0xa03b90c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	// void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);                              // [0xa03b890] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
	// void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);                                   // [0xa03b814] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	// void SetResetTrackedObjects(bool bNewValue);                                                                             // [0xa03b798] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetCameraTracking
	// void SetResetCameraTracking(bool bNewValue);                                                                             // [0xa03b71c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	// void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);                                                              // [0xa03aa68] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	// void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);                                                     // [0xa03a9ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	// void SetEnableAutoFocus(bool bNewValue);                                                                                 // [0xa03a7bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	// void SetDesiredVideoFormat(FARVideoFormat NewFormat);                                                                    // [0xa03a658] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetCandidateObjectList
	// void SetCandidateObjectList(TArray<UARCandidateObject*>& InCandidateObjects);                                            // [0xa039f68] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.RemoveCandidateImageAtIndex
	// void RemoveCandidateImageAtIndex(int32_t Index);                                                                         // [0xa037f6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.RemoveCandidateImage
	// void RemoveCandidateImage(UARCandidateImage* CandidateImage);                                                            // [0xa037ee4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldMapData
	// TArray<char> GetWorldMapData();                                                                                          // [0xa036560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldAlignment
	// EARWorldAlignment GetWorldAlignment();                                                                                   // [0xa03654c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetSessionType
	// EARSessionType GetSessionType();                                                                                         // [0xa03627c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
	// EARSceneReconstruction GetSceneReconstructionMethod();                                                                   // [0xa036240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	// EARPlaneDetectionMode GetPlaneDetectionMode();                                                                           // [0xa0361dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	// int32_t GetMaxNumSimultaneousImagesTracked();                                                                            // [0x5c34634] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetLightEstimationMode
	// EARLightEstimationMode GetLightEstimationMode();                                                                         // [0x81edbe4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFrameSyncMode
	// EARFrameSyncMode GetFrameSyncMode();                                                                                     // [0xa03537c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	// EARFaceTrackingUpdate GetFaceTrackingUpdate();                                                                           // [0xa035364] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	// EARFaceTrackingDirection GetFaceTrackingDirection();                                                                     // [0xa03534c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	// EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();                                                         // [0xa0352e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	// EARSessionTrackingFeature GetEnabledSessionTrackingFeature();                                                            // [0xa0352d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	// FARVideoFormat GetDesiredVideoFormat();                                                                                  // [0xa0351e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateObjectList
	// TArray<UARCandidateObject*> GetCandidateObjectList();                                                                    // [0xa035108] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateImageList
	// TArray<UARCandidateImage*> GetCandidateImageList();                                                                      // [0x9ce372c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ClearCandidateImages
	// void ClearCandidateImages();                                                                                             // [0xa0335c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateObject
	// void AddCandidateObject(UARCandidateObject* CandidateObject);                                                            // [0xa030c9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateImage
	// void AddCandidateImage(UARCandidateImage* NewCandidateImage);                                                            // [0xa030c1c] Final|Native|Public|BlueprintCallable 
/// Class /Script/AugmentedReality.ARSharedWorldGameMode
/// Size: 0x0068 (0x000378 - 0x0003E0)
class AARSharedWorldGameMode : public AGameMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	DMember(int32_t)                                   BufferSizePerChunk                                          OFFSET(get<int32_t>, {0x378, 4, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	// void SetPreviewImageData(TArray<char> ImageData);                                                                        // [0xa03b5b0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	// void SetARWorldSharingIsReady();                                                                                         // [0xa039cd8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	// void SetARSharedWorldData(TArray<char> ARWorldData);                                                                     // [0xa0396d4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	// AARSharedWorldGameState* GetARSharedWorldGameState();                                                                    // [0x9ad9618] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
/// Class /Script/AugmentedReality.ARSharedWorldGameState
/// Size: 0x0038 (0x000300 - 0x000338)
class AARSharedWorldGameState : public AGameState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(TArray<char>)                              PreviewImageData                                            OFFSET(get<T>, {0x300, 16, 0, 0})
	CMember(TArray<char>)                              ARWorldData                                                 OFFSET(get<T>, {0x310, 16, 0, 0})
	DMember(int32_t)                                   PreviewImageBytesTotal                                      OFFSET(get<int32_t>, {0x320, 4, 0, 0})
	DMember(int32_t)                                   ARWorldBytesTotal                                           OFFSET(get<int32_t>, {0x324, 4, 0, 0})
	DMember(int32_t)                                   PreviewImageBytesDelivered                                  OFFSET(get<int32_t>, {0x328, 4, 0, 0})
	DMember(int32_t)                                   ARWorldBytesDelivered                                       OFFSET(get<int32_t>, {0x32C, 4, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	// void K2_OnARWorldMapIsReady();                                                                                           // [0x1ebf994] Event|Public|BlueprintEvent 
/// Class /Script/AugmentedReality.ARSharedWorldPlayerController
/// Size: 0x0008 (0x000850 - 0x000858)
class AARSharedWorldPlayerController : public APlayerController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2136;

public:
};

/// Class /Script/AugmentedReality.ARSkyLight
/// Size: 0x0010 (0x0002A0 - 0x0002B0)
class AARSkyLight : public ASkyLight
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(UAREnvironmentCaptureProbe*)               CaptureProbe                                                OFFSET(get<T>, {0x2A0, 8, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	// void SetEnvironmentCaptureProbe(UAREnvironmentCaptureProbe* InCaptureProbe);                                             // [0xa03a8a8] Final|Native|Public|BlueprintCallable 
/// Class /Script/AugmentedReality.ARTexture
/// Size: 0x0020 (0x000138 - 0x000158)
class UARTexture : public UTexture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(EARTextureType)                            TextureType                                                 OFFSET(get<T>, {0x138, 1, 0, 0})
	DMember(float)                                     Timestamp                                                   OFFSET(get<float>, {0x13C, 4, 0, 0})
	SMember(FGuid)                                     ExternalTextureGuid                                         OFFSET(get<T>, {0x140, 16, 0, 0})
	SMember(FVector2f)                                 Size                                                        OFFSET(get<T>, {0x150, 8, 0, 0})
};

/// Class /Script/AugmentedReality.ARTextureCameraImage
/// Size: 0x0000 (0x000158 - 0x000158)
class UARTextureCameraImage : public UARTexture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
};

/// Class /Script/AugmentedReality.ARTextureCameraDepth
/// Size: 0x0008 (0x000158 - 0x000160)
class UARTextureCameraDepth : public UARTexture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(EARDepthQuality)                           DepthQuality                                                OFFSET(get<T>, {0x158, 1, 0, 0})
	CMember(EARDepthAccuracy)                          DepthAccuracy                                               OFFSET(get<T>, {0x159, 1, 0, 0})
	DMember(bool)                                      bIsTemporallySmoothed                                       OFFSET(get<bool>, {0x15A, 1, 0, 0})
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbeTexture
/// Size: 0x0020 (0x000140 - 0x000160)
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(EARTextureType)                            TextureType                                                 OFFSET(get<T>, {0x140, 1, 0, 0})
	DMember(float)                                     Timestamp                                                   OFFSET(get<float>, {0x144, 4, 0, 0})
	SMember(FGuid)                                     ExternalTextureGuid                                         OFFSET(get<T>, {0x148, 16, 0, 0})
	SMember(FVector2f)                                 Size                                                        OFFSET(get<T>, {0x158, 8, 0, 0})
};

/// Class /Script/AugmentedReality.ARTraceResultDummy
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTraceResultDummy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AugmentedReality.ARTrackedGeometry
/// Size: 0x0138 (0x000028 - 0x000160)
class UARTrackedGeometry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FGuid)                                     UniqueID                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FTransform)                                LocalToTrackingTransform                                    OFFSET(get<T>, {0x40, 96, 0, 0})
	SMember(FTransform)                                LocalToAlignedTrackingTransform                             OFFSET(get<T>, {0xA0, 96, 0, 0})
	CMember(EARTrackingState)                          TrackingState                                               OFFSET(get<T>, {0x100, 1, 0, 0})
	CMember(UMRMeshComponent*)                         UnderlyingMesh                                              OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(EARObjectClassification)                   ObjectClassification                                        OFFSET(get<T>, {0x118, 1, 0, 0})
	CMember(EARSpatialMeshUsageFlags)                  SpatialMeshUsageFlags                                       OFFSET(get<T>, {0x119, 1, 0, 0})
	DMember(int32_t)                                   LastUpdateFrameNumber                                       OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	SMember(FName)                                     DebugName                                                   OFFSET(get<T>, {0x140, 4, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARTrackedGeometry.IsTracked
	// bool IsTracked();                                                                                                        // [0xa036b8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag
	// bool HasSpatialMeshUsageFlag(EARSpatialMeshUsageFlags InFlag);                                                           // [0xa03667c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	// UMRMeshComponent* GetUnderlyingMesh();                                                                                   // [0x98fddcc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetTrackingState
	// EARTrackingState GetTrackingState();                                                                                     // [0x9765db8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetObjectClassification
	// EARObjectClassification GetObjectClassification();                                                                       // [0x58166fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetName
	// FString GetName();                                                                                                       // [0xa035a88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	// FTransform GetLocalToWorldTransform();                                                                                   // [0xa035904] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	// FTransform GetLocalToTrackingTransform();                                                                                // [0xa035650] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	// float GetLastUpdateTimestamp();                                                                                          // [0xa035550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	// int32_t GetLastUpdateFrameNumber();                                                                                      // [0xa035538] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetDebugName
	// FName GetDebugName();                                                                                                    // [0x7e58e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/AugmentedReality.ARPlaneGeometry
/// Size: 0x0050 (0x000160 - 0x0001B0)
class UARPlaneGeometry : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(EARPlaneOrientation)                       Orientation                                                 OFFSET(get<T>, {0x158, 1, 0, 0})
	SMember(FVector)                                   Center                                                      OFFSET(get<T>, {0x160, 24, 0, 0})
	SMember(FVector)                                   Extent                                                      OFFSET(get<T>, {0x178, 24, 0, 0})
	CMember(TArray<FVector>)                           BoundaryPolygon                                             OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(UARPlaneGeometry*)                         SubsumedBy                                                  OFFSET(get<T>, {0x1A0, 8, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	// UARPlaneGeometry* GetSubsumedBy();                                                                                       // [0xa036290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetOrientation
	// EARPlaneOrientation GetOrientation();                                                                                    // [0xa0361c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetExtent
	// FVector GetExtent();                                                                                                     // [0xa035324] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetCenter
	// FVector GetCenter();                                                                                                     // [0xa035180] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	// TArray<FVector> GetBoundaryPolygonInLocalSpace();                                                                        // [0xa034f7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/AugmentedReality.ARTrackedPoint
/// Size: 0x0000 (0x000160 - 0x000160)
class UARTrackedPoint : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Script/AugmentedReality.ARTrackedImage
/// Size: 0x0010 (0x000160 - 0x000170)
class UARTrackedImage : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(UARCandidateImage*)                        DetectedImage                                               OFFSET(get<T>, {0x158, 8, 0, 0})
	SMember(FVector2D)                                 EstimatedSize                                               OFFSET(get<T>, {0x160, 16, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARTrackedImage.GetEstimateSize
	// FVector2D GetEstimateSize();                                                                                             // [0x8223c2c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTrackedImage.GetDetectedImage
	// UARCandidateImage* GetDetectedImage();                                                                                   // [0x2fe0980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/AugmentedReality.ARTrackedQRCode
/// Size: 0x0020 (0x000170 - 0x000190)
class UARTrackedQRCode : public UARTrackedImage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FString)                                   QRCode                                                      OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x180, 4, 0, 0})
};

/// Class /Script/AugmentedReality.ARFaceGeometry
/// Size: 0x0160 (0x000160 - 0x0002C0)
class UARFaceGeometry : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FVector)                                   LookAtTarget                                                OFFSET(get<T>, {0x158, 24, 0, 0})
	DMember(bool)                                      bIsTracked                                                  OFFSET(get<bool>, {0x170, 1, 0, 0})
	CMember(TMap<EARFaceBlendShape, float>)            BlendShapes                                                 OFFSET(get<T>, {0x178, 80, 0, 0})
	SMember(FTransform)                                LeftEyeTransform                                            OFFSET(get<T>, {0x200, 96, 0, 0})
	SMember(FTransform)                                RightEyeTransform                                           OFFSET(get<T>, {0x260, 96, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	// FTransform GetWorldSpaceEyeTransform(EAREye Eye);                                                                        // [0xa0365a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	// FTransform GetLocalSpaceEyeTransform(EAREye Eye);                                                                        // [0xa035588] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	// float GetBlendShapeValue(EARFaceBlendShape BlendShape);                                                                  // [0xa034e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapes
	// TMap<EARFaceBlendShape, float> GetBlendShapes();                                                                         // [0xa034ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/AugmentedReality.AREnvironmentCaptureProbe
/// Size: 0x0020 (0x000160 - 0x000180)
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FVector)                                   Extent                                                      OFFSET(get<T>, {0x158, 24, 0, 0})
	CMember(UAREnvironmentCaptureProbeTexture*)        EnvironmentCaptureTexture                                   OFFSET(get<T>, {0x170, 8, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	// FVector GetExtent();                                                                                                     // [0xa0352fc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	// UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();                                                       // [0x83a9c6c] Final|Native|Public|BlueprintCallable|BlueprintPure 
/// Class /Script/AugmentedReality.ARTrackedObject
/// Size: 0x0000 (0x000160 - 0x000160)
class UARTrackedObject : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};



	/// Functions
	// Function /Script/AugmentedReality.ARTrackedObject.GetDetectedObject
	// UARCandidateObject* GetDetectedObject();                                                                                 // [0x2fe0980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/AugmentedReality.ARTrackedPose
/// Size: 0x0050 (0x000160 - 0x0001B0)
class UARTrackedPose : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FARPose3D)                                 TrackedPose                                                 OFFSET(get<T>, {0x158, 80, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARTrackedPose.GetTrackedPoseData
	// FARPose3D GetTrackedPoseData();                                                                                          // [0xa0364e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/AugmentedReality.ARMeshGeometry
/// Size: 0x0000 (0x000160 - 0x000160)
class UARMeshGeometry : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Script/AugmentedReality.ARGeoAnchor
/// Size: 0x0010 (0x000160 - 0x000170)
class UARGeoAnchor : public UARTrackedGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
};

/// Class /Script/AugmentedReality.ARTrackableNotifyComponent
/// Size: 0x0150 (0x0000A0 - 0x0001F0)
class UARTrackableNotifyComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FMulticastInlineDelegate)                  OnAddTrackedGeometry                                        OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpdateTrackedGeometry                                     OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemoveTrackedGeometry                                     OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAddTrackedPlane                                           OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpdateTrackedPlane                                        OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemoveTrackedPlane                                        OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAddTrackedPoint                                           OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpdateTrackedPoint                                        OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemoveTrackedPoint                                        OFFSET(get<T>, {0x120, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAddTrackedImage                                           OFFSET(get<T>, {0x130, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpdateTrackedImage                                        OFFSET(get<T>, {0x140, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemoveTrackedImage                                        OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAddTrackedFace                                            OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpdateTrackedFace                                         OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemoveTrackedFace                                         OFFSET(get<T>, {0x180, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAddTrackedEnvProbe                                        OFFSET(get<T>, {0x190, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpdateTrackedEnvProbe                                     OFFSET(get<T>, {0x1A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemoveTrackedEnvProbe                                     OFFSET(get<T>, {0x1B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAddTrackedObject                                          OFFSET(get<T>, {0x1C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpdateTrackedObject                                       OFFSET(get<T>, {0x1D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemoveTrackedObject                                       OFFSET(get<T>, {0x1E0, 16, 0, 0})
};

/// Class /Script/AugmentedReality.ARTypesDummyClass
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTypesDummyClass : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AugmentedReality.ARCandidateImage
/// Size: 0x0028 (0x000030 - 0x000058)
class UARCandidateImage : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UTexture2D*)                               CandidateTexture                                            OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FString)                                   FriendlyName                                                OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x4C, 4, 0, 0})
	CMember(EARCandidateImageOrientation)              Orientation                                                 OFFSET(get<T>, {0x50, 1, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalWidth
	// float GetPhysicalWidth();                                                                                                // [0x327b0f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalHeight
	// float GetPhysicalHeight();                                                                                               // [0x335bb64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetOrientation
	// EARCandidateImageOrientation GetOrientation();                                                                           // [0x5960460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetFriendlyName
	// FString GetFriendlyName();                                                                                               // [0x9020f98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetCandidateTexture
	// UTexture2D* GetCandidateTexture();                                                                                       // [0x5ae2078] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/AugmentedReality.ARCandidateObject
/// Size: 0x0058 (0x000030 - 0x000088)
class UARCandidateObject : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<char>)                              CandidateObjectData                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   FriendlyName                                                OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FBox)                                      BoundingBox                                                 OFFSET(get<T>, {0x50, 56, 0, 0})
};



	/// Functions
	// Function /Script/AugmentedReality.ARCandidateObject.SetFriendlyName
	// void SetFriendlyName(FString NewName);                                                                                   // [0xa03aae4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.SetCandidateObjectData
	// void SetCandidateObjectData(TArray<char>& InCandidateObject);                                                            // [0xa039ec8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.SetBoundingBox
	// void SetBoundingBox(FBox& InBoundingBox);                                                                                // [0xa039e20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.GetFriendlyName
	// FString GetFriendlyName();                                                                                               // [0xa035390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateObject.GetCandidateObjectData
	// TArray<char> GetCandidateObjectData();                                                                                   // [0xa0350ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateObject.GetBoundingBox
	// FBox GetBoundingBox();                                                                                                   // [0xa035010] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
/// Struct /Script/AugmentedReality.TrackedGeometryGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FTrackedGeometryGroup : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AARActor*)                                 ARActor                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UARComponent*)                             ARComponent                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UARTrackedGeometry*)                       TrackedGeometry                                             OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/AugmentedReality.ARSessionPayload
/// Size: 0x0018 (0x000000 - 0x000018)
class FARSessionPayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ConfigFlags                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(UMaterialInterface*)                       DefaultMeshMaterial                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UMaterialInterface*)                       DefaultWireframeMeshMaterial                                OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/AugmentedReality.ARPlaneUpdatePayload
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FARPlaneUpdatePayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FARSessionPayload)                         SessionPayload                                              OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                WorldTransform                                              OFFSET(get<T>, {0x20, 96, 0, 0})
	SMember(FVector)                                   Center                                                      OFFSET(get<T>, {0x80, 24, 0, 0})
	SMember(FVector)                                   Extents                                                     OFFSET(get<T>, {0x98, 24, 0, 0})
	CMember(TArray<FVector>)                           BoundaryVertices                                            OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(EARObjectClassification)                   ObjectClassification                                        OFFSET(get<T>, {0xC0, 1, 0, 0})
};

/// Struct /Script/AugmentedReality.ARPointUpdatePayload
/// Size: 0x0001 (0x000000 - 0x000001)
class FARPointUpdatePayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/AugmentedReality.ARFaceUpdatePayload
/// Size: 0x0060 (0x000000 - 0x000060)
class FARFaceUpdatePayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FARSessionPayload)                         SessionPayload                                              OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   LeftEyePosition                                             OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   RightEyePosition                                            OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   LookAtTarget                                                OFFSET(get<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/AugmentedReality.ARImageUpdatePayload
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FARImageUpdatePayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FARSessionPayload)                         SessionPayload                                              OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                WorldTransform                                              OFFSET(get<T>, {0x20, 96, 0, 0})
	CMember(UARCandidateImage*)                        DetectedImage                                               OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FVector2D)                                 EstimatedSize                                               OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/AugmentedReality.ARQRCodeUpdatePayload
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FARQRCodeUpdatePayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FARSessionPayload)                         SessionPayload                                              OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                WorldTransform                                              OFFSET(get<T>, {0x20, 96, 0, 0})
	SMember(FVector)                                   Extents                                                     OFFSET(get<T>, {0x80, 24, 0, 0})
	SMember(FString)                                   QRCode                                                      OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/AugmentedReality.ARPoseUpdatePayload
/// Size: 0x0070 (0x000000 - 0x000070)
class FARPoseUpdatePayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                WorldTransform                                              OFFSET(get<T>, {0x0, 96, 0, 0})
	CMember(TArray<FTransform>)                        JointTransforms                                             OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/AugmentedReality.AREnvironmentProbeUpdatePayload
/// Size: 0x0060 (0x000000 - 0x000060)
class FAREnvironmentProbeUpdatePayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                WorldTransform                                              OFFSET(get<T>, {0x0, 96, 0, 0})
};

/// Struct /Script/AugmentedReality.ARObjectUpdatePayload
/// Size: 0x0060 (0x000000 - 0x000060)
class FARObjectUpdatePayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                WorldTransform                                              OFFSET(get<T>, {0x0, 96, 0, 0})
};

/// Struct /Script/AugmentedReality.ARMeshUpdatePayload
/// Size: 0x0090 (0x000000 - 0x000090)
class FARMeshUpdatePayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FARSessionPayload)                         SessionPayload                                              OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                WorldTransform                                              OFFSET(get<T>, {0x20, 96, 0, 0})
	CMember(EARObjectClassification)                   ObjectClassification                                        OFFSET(get<T>, {0x80, 1, 0, 0})
};

/// Struct /Script/AugmentedReality.ARGeoAnchorUpdatePayload
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FARGeoAnchorUpdatePayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FARSessionPayload)                         SessionPayload                                              OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                WorldTransform                                              OFFSET(get<T>, {0x20, 96, 0, 0})
	DMember(float)                                     Longitude                                                   OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     Latitude                                                    OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     AltitudeMeters                                              OFFSET(get<float>, {0x88, 4, 0, 0})
	CMember(EARAltitudeSource)                         AltitudeSource                                              OFFSET(get<T>, {0x8C, 1, 0, 0})
	SMember(FString)                                   AnchorName                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/AugmentedReality.ARSharedWorldReplicationState
/// Size: 0x0008 (0x000000 - 0x000008)
class FARSharedWorldReplicationState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   PreviewImageOffset                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ARWorldOffset                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/AugmentedReality.ARTraceResult
/// Size: 0x0090 (0x000000 - 0x000090)
class FARTraceResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(float)                                     DistanceFromCamera                                          OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(EARLineTraceChannels)                      TraceChannel                                                OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(get<T>, {0x10, 96, 0, 0})
	CMember(UARTrackedGeometry*)                       TrackedGeometry                                             OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Struct /Script/AugmentedReality.ARSessionStatus
/// Size: 0x0018 (0x000000 - 0x000018)
class FARSessionStatus : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   AdditionalInfo                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(EARSessionStatus)                          Status                                                      OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/AugmentedReality.ARVideoFormat
/// Size: 0x000C (0x000000 - 0x00000C)
class FARVideoFormat : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   FPS                                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Width                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Height                                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/AugmentedReality.ARSkeletonDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
class FARSkeletonDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   NumJoints                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FName>)                             JointNames                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/AugmentedReality.ARPose2D
/// Size: 0x0048 (0x000000 - 0x000048)
class FARPose2D : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FARSkeletonDefinition)                     SkeletonDefinition                                          OFFSET(get<T>, {0x0, 40, 0, 0})
	CMember(TArray<FVector2D>)                         JointLocations                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<bool>)                              IsJointTracked                                              OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/AugmentedReality.ARPose3D
/// Size: 0x0050 (0x000000 - 0x000050)
class FARPose3D : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FARSkeletonDefinition)                     SkeletonDefinition                                          OFFSET(get<T>, {0x0, 40, 0, 0})
	CMember(TArray<FTransform>)                        JointTransforms                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<bool>)                              IsJointTracked                                              OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(EARJointTransformSpace)                    JointTransformSpace                                         OFFSET(get<T>, {0x48, 1, 0, 0})
};

/// Struct /Script/AugmentedReality.ARCameraIntrinsics
/// Size: 0x0028 (0x000000 - 0x000028)
class FARCameraIntrinsics : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FIntPoint)                                 ImageResolution                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector2D)                                 FocalLength                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 PrincipalPoint                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Enum /Script/AugmentedReality.EARTrackingState
/// Size: 0x05
enum EARTrackingState : uint8_t
{
	EARTrackingState__Unknown0                                                       = 0,
	EARTrackingState__Tracking1                                                      = 1,
	EARTrackingState__NotTracking2                                                   = 2,
	EARTrackingState__StoppedTracking3                                               = 3,
	EARTrackingState__EARTrackingState_MAX4                                          = 4
};

/// Enum /Script/AugmentedReality.EARSessionConfigFlags
/// Size: 0x07
enum EARSessionConfigFlags : uint8_t
{
	EARSessionConfigFlags__None0                                                     = 0,
	EARSessionConfigFlags__GenerateMeshData1                                         = 1,
	EARSessionConfigFlags__RenderMeshDataInWireframe2                                = 2,
	EARSessionConfigFlags__GenerateCollisionForMeshData3                             = 4,
	EARSessionConfigFlags__GenerateNavMeshForMeshData4                               = 8,
	EARSessionConfigFlags__UseMeshDataForOcclusion5                                  = 16,
	EARSessionConfigFlags__EARSessionConfigFlags_MAX6                                = 17
};

/// Enum /Script/AugmentedReality.EPlaneComponentDebugMode
/// Size: 0x04
enum EPlaneComponentDebugMode : uint8_t
{
	EPlaneComponentDebugMode__None0                                                  = 0,
	EPlaneComponentDebugMode__ShowNetworkRole1                                       = 1,
	EPlaneComponentDebugMode__ShowClassification2                                    = 2,
	EPlaneComponentDebugMode__EPlaneComponentDebugMode_MAX3                          = 3
};

/// Enum /Script/AugmentedReality.EFaceComponentDebugMode
/// Size: 0x04
enum EFaceComponentDebugMode : uint8_t
{
	EFaceComponentDebugMode__None0                                                   = 0,
	EFaceComponentDebugMode__ShowEyeVectors1                                         = 1,
	EFaceComponentDebugMode__ShowFaceMesh2                                           = 2,
	EFaceComponentDebugMode__EFaceComponentDebugMode_MAX3                            = 3
};

/// Enum /Script/AugmentedReality.EARFaceTransformMixing
/// Size: 0x05
enum EARFaceTransformMixing : uint8_t
{
	EARFaceTransformMixing__ComponentOnly0                                           = 0,
	EARFaceTransformMixing__ComponentLocationTrackedRotation1                        = 1,
	EARFaceTransformMixing__ComponentWithTracked2                                    = 2,
	EARFaceTransformMixing__TrackingOnly3                                            = 3,
	EARFaceTransformMixing__EARFaceTransformMixing_MAX4                              = 4
};

/// Enum /Script/AugmentedReality.EImageComponentDebugMode
/// Size: 0x03
enum EImageComponentDebugMode : uint8_t
{
	EImageComponentDebugMode__None0                                                  = 0,
	EImageComponentDebugMode__ShowDetectedImage1                                     = 1,
	EImageComponentDebugMode__EImageComponentDebugMode_MAX2                          = 2
};

/// Enum /Script/AugmentedReality.EQRCodeComponentDebugMode
/// Size: 0x03
enum EQRCodeComponentDebugMode : uint8_t
{
	EQRCodeComponentDebugMode__None0                                                 = 0,
	EQRCodeComponentDebugMode__ShowQRCode1                                           = 1,
	EQRCodeComponentDebugMode__EQRCodeComponentDebugMode_MAX2                        = 2
};

/// Enum /Script/AugmentedReality.EPoseComponentDebugMode
/// Size: 0x03
enum EPoseComponentDebugMode : uint8_t
{
	EPoseComponentDebugMode__None0                                                   = 0,
	EPoseComponentDebugMode__ShowSkeleton1                                           = 1,
	EPoseComponentDebugMode__EPoseComponentDebugMode_MAX2                            = 2
};

/// Enum /Script/AugmentedReality.EGeoAnchorComponentDebugMode
/// Size: 0x03
enum EGeoAnchorComponentDebugMode : uint8_t
{
	EGeoAnchorComponentDebugMode__None0                                              = 0,
	EGeoAnchorComponentDebugMode__ShowGeoData1                                       = 1,
	EGeoAnchorComponentDebugMode__EGeoAnchorComponentDebugMode_MAX2                  = 2
};

/// Enum /Script/AugmentedReality.EARServiceAvailability
/// Size: 0x08
enum EARServiceAvailability : uint8_t
{
	EARServiceAvailability__UnknownError0                                            = 0,
	EARServiceAvailability__UnknownChecking1                                         = 1,
	EARServiceAvailability__UnknownTimedOut2                                         = 2,
	EARServiceAvailability__UnsupportedDeviceNotCapable3                             = 3,
	EARServiceAvailability__SupportedNotInstalled4                                   = 4,
	EARServiceAvailability__SupportedVersionTooOld5                                  = 5,
	EARServiceAvailability__SupportedInstalled6                                      = 6,
	EARServiceAvailability__EARServiceAvailability_MAX7                              = 7
};

/// Enum /Script/AugmentedReality.EARServiceInstallRequestResult
/// Size: 0x05
enum EARServiceInstallRequestResult : uint8_t
{
	EARServiceInstallRequestResult__Installed0                                       = 0,
	EARServiceInstallRequestResult__DeviceNotCompatible1                             = 1,
	EARServiceInstallRequestResult__UserDeclinedInstallation2                        = 2,
	EARServiceInstallRequestResult__FatalError3                                      = 3,
	EARServiceInstallRequestResult__EARServiceInstallRequestResult_MAX4              = 4
};

/// Enum /Script/AugmentedReality.EARServicePermissionRequestResult
/// Size: 0x03
enum EARServicePermissionRequestResult : uint8_t
{
	EARServicePermissionRequestResult__Granted0                                      = 0,
	EARServicePermissionRequestResult__Denied1                                       = 1,
	EARServicePermissionRequestResult__EARServicePermissionRequestResult_MAX2        = 2
};

/// Enum /Script/AugmentedReality.EARGeoTrackingState
/// Size: 0x05
enum EARGeoTrackingState : uint8_t
{
	EARGeoTrackingState__Initializing0                                               = 0,
	EARGeoTrackingState__Localized1                                                  = 1,
	EARGeoTrackingState__Localizing2                                                 = 2,
	EARGeoTrackingState__NotAvailable3                                               = 3,
	EARGeoTrackingState__EARGeoTrackingState_MAX4                                    = 4
};

/// Enum /Script/AugmentedReality.EARGeoTrackingStateReason
/// Size: 0x10
enum EARGeoTrackingStateReason : uint8_t
{
	EARGeoTrackingStateReason__None0                                                 = 0,
	EARGeoTrackingStateReason__NotAvailableAtLocation1                               = 1,
	EARGeoTrackingStateReason__NeedLocationPermissions2                              = 2,
	EARGeoTrackingStateReason__DevicePointedTooLow3                                  = 3,
	EARGeoTrackingStateReason__WorldTrackingUnstable4                                = 4,
	EARGeoTrackingStateReason__WaitingForLocation5                                   = 5,
	EARGeoTrackingStateReason__GeoDataNotLoaded6                                     = 6,
	EARGeoTrackingStateReason__VisualLocalizationFailed7                             = 7,
	EARGeoTrackingStateReason__WaitingForAvailabilityCheck8                          = 8,
	EARGeoTrackingStateReason__EARGeoTrackingStateReason_MAX9                        = 9
};

/// Enum /Script/AugmentedReality.EARGeoTrackingAccuracy
/// Size: 0x05
enum EARGeoTrackingAccuracy : uint8_t
{
	EARGeoTrackingAccuracy__Undetermined0                                            = 0,
	EARGeoTrackingAccuracy__Low1                                                     = 1,
	EARGeoTrackingAccuracy__Medium2                                                  = 2,
	EARGeoTrackingAccuracy__High3                                                    = 3,
	EARGeoTrackingAccuracy__EARGeoTrackingAccuracy_MAX4                              = 4
};

/// Enum /Script/AugmentedReality.EARWorldAlignment
/// Size: 0x04
enum EARWorldAlignment : uint8_t
{
	EARWorldAlignment__Gravity0                                                      = 0,
	EARWorldAlignment__GravityAndHeading1                                            = 1,
	EARWorldAlignment__Camera2                                                       = 2,
	EARWorldAlignment__EARWorldAlignment_MAX3                                        = 3
};

/// Enum /Script/AugmentedReality.EARSessionType
/// Size: 0x09
enum EARSessionType : uint8_t
{
	EARSessionType__None0                                                            = 0,
	EARSessionType__Orientation1                                                     = 1,
	EARSessionType__World2                                                           = 2,
	EARSessionType__Face3                                                            = 3,
	EARSessionType__Image4                                                           = 4,
	EARSessionType__ObjectScanning5                                                  = 5,
	EARSessionType__PoseTracking6                                                    = 6,
	EARSessionType__GeoTracking7                                                     = 7,
	EARSessionType__EARSessionType_MAX8                                              = 8
};

/// Enum /Script/AugmentedReality.EARPlaneDetectionMode
/// Size: 0x04
enum EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None0                                                     = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection1                                 = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection2                                   = 2,
	EARPlaneDetectionMode__EARPlaneDetectionMode_MAX3                                = 3
};

/// Enum /Script/AugmentedReality.EARLightEstimationMode
/// Size: 0x04
enum EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None0                                                    = 0,
	EARLightEstimationMode__AmbientLightEstimate1                                    = 1,
	EARLightEstimationMode__DirectionalLightEstimate2                                = 2,
	EARLightEstimationMode__EARLightEstimationMode_MAX3                              = 3
};

/// Enum /Script/AugmentedReality.EARFrameSyncMode
/// Size: 0x03
enum EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage0                                       = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage1                                    = 1,
	EARFrameSyncMode__EARFrameSyncMode_MAX2                                          = 2
};

/// Enum /Script/AugmentedReality.EAREnvironmentCaptureProbeType
/// Size: 0x04
enum EAREnvironmentCaptureProbeType : uint8_t
{
	EAREnvironmentCaptureProbeType__None0                                            = 0,
	EAREnvironmentCaptureProbeType__Manual1                                          = 1,
	EAREnvironmentCaptureProbeType__Automatic2                                       = 2,
	EAREnvironmentCaptureProbeType__EAREnvironmentCaptureProbeType_MAX3              = 3
};

/// Enum /Script/AugmentedReality.EARFaceTrackingUpdate
/// Size: 0x03
enum EARFaceTrackingUpdate : uint8_t
{
	EARFaceTrackingUpdate__CurvesAndGeo0                                             = 0,
	EARFaceTrackingUpdate__CurvesOnly1                                               = 1,
	EARFaceTrackingUpdate__EARFaceTrackingUpdate_MAX2                                = 2
};

/// Enum /Script/AugmentedReality.EARSessionTrackingFeature
/// Size: 0x07
enum EARSessionTrackingFeature : uint8_t
{
	EARSessionTrackingFeature__None0                                                 = 0,
	EARSessionTrackingFeature__PoseDetection2D1                                      = 1,
	EARSessionTrackingFeature__PersonSegmentation2                                   = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth3                          = 3,
	EARSessionTrackingFeature__SceneDepth4                                           = 4,
	EARSessionTrackingFeature__SmoothedSceneDepth5                                   = 5,
	EARSessionTrackingFeature__EARSessionTrackingFeature_MAX6                        = 6
};

/// Enum /Script/AugmentedReality.EARSceneReconstruction
/// Size: 0x04
enum EARSceneReconstruction : uint8_t
{
	EARSceneReconstruction__None0                                                    = 0,
	EARSceneReconstruction__MeshOnly1                                                = 1,
	EARSceneReconstruction__MeshWithClassification2                                  = 2,
	EARSceneReconstruction__EARSceneReconstruction_MAX3                              = 3
};

/// Enum /Script/AugmentedReality.EARTextureType
/// Size: 0x09
enum EARTextureType : uint8_t
{
	EARTextureType__Unknown0                                                         = 0,
	EARTextureType__CameraImage1                                                     = 1,
	EARTextureType__CameraDepth2                                                     = 2,
	EARTextureType__EnvironmentCapture3                                              = 3,
	EARTextureType__PersonSegmentationImage4                                         = 4,
	EARTextureType__PersonSegmentationDepth5                                         = 5,
	EARTextureType__SceneDepthMap6                                                   = 6,
	EARTextureType__SceneDepthConfidenceMap7                                         = 7,
	EARTextureType__EARTextureType_MAX8                                              = 8
};

/// Enum /Script/AugmentedReality.EARDepthQuality
/// Size: 0x04
enum EARDepthQuality : uint8_t
{
	EARDepthQuality__Unkown0                                                         = 0,
	EARDepthQuality__Low1                                                            = 1,
	EARDepthQuality__High2                                                           = 2,
	EARDepthQuality__EARDepthQuality_MAX3                                            = 3
};

/// Enum /Script/AugmentedReality.EARDepthAccuracy
/// Size: 0x04
enum EARDepthAccuracy : uint8_t
{
	EARDepthAccuracy__Unkown0                                                        = 0,
	EARDepthAccuracy__Approximate1                                                   = 1,
	EARDepthAccuracy__Accurate2                                                      = 2,
	EARDepthAccuracy__EARDepthAccuracy_MAX3                                          = 3
};

/// Enum /Script/AugmentedReality.EARFaceTrackingDirection
/// Size: 0x03
enum EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative0                                          = 0,
	EARFaceTrackingDirection__FaceMirrored1                                          = 1,
	EARFaceTrackingDirection__EARFaceTrackingDirection_MAX2                          = 2
};

/// Enum /Script/AugmentedReality.EARFaceBlendShape
/// Size: 0x62
enum EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft0                                                 = 0,
	EARFaceBlendShape__EyeLookDownLeft1                                              = 1,
	EARFaceBlendShape__EyeLookInLeft2                                                = 2,
	EARFaceBlendShape__EyeLookOutLeft3                                               = 3,
	EARFaceBlendShape__EyeLookUpLeft4                                                = 4,
	EARFaceBlendShape__EyeSquintLeft5                                                = 5,
	EARFaceBlendShape__EyeWideLeft6                                                  = 6,
	EARFaceBlendShape__EyeBlinkRight7                                                = 7,
	EARFaceBlendShape__EyeLookDownRight8                                             = 8,
	EARFaceBlendShape__EyeLookInRight9                                               = 9,
	EARFaceBlendShape__EyeLookOutRight10                                             = 10,
	EARFaceBlendShape__EyeLookUpRight11                                              = 11,
	EARFaceBlendShape__EyeSquintRight12                                              = 12,
	EARFaceBlendShape__EyeWideRight13                                                = 13,
	EARFaceBlendShape__JawForward14                                                  = 14,
	EARFaceBlendShape__JawLeft15                                                     = 15,
	EARFaceBlendShape__JawRight16                                                    = 16,
	EARFaceBlendShape__JawOpen17                                                     = 17,
	EARFaceBlendShape__MouthClose18                                                  = 18,
	EARFaceBlendShape__MouthFunnel19                                                 = 19,
	EARFaceBlendShape__MouthPucker20                                                 = 20,
	EARFaceBlendShape__MouthLeft21                                                   = 21,
	EARFaceBlendShape__MouthRight22                                                  = 22,
	EARFaceBlendShape__MouthSmileLeft23                                              = 23,
	EARFaceBlendShape__MouthSmileRight24                                             = 24,
	EARFaceBlendShape__MouthFrownLeft25                                              = 25,
	EARFaceBlendShape__MouthFrownRight26                                             = 26,
	EARFaceBlendShape__MouthDimpleLeft27                                             = 27,
	EARFaceBlendShape__MouthDimpleRight28                                            = 28,
	EARFaceBlendShape__MouthStretchLeft29                                            = 29,
	EARFaceBlendShape__MouthStretchRight30                                           = 30,
	EARFaceBlendShape__MouthRollLower31                                              = 31,
	EARFaceBlendShape__MouthRollUpper32                                              = 32,
	EARFaceBlendShape__MouthShrugLower33                                             = 33,
	EARFaceBlendShape__MouthShrugUpper34                                             = 34,
	EARFaceBlendShape__MouthPressLeft35                                              = 35,
	EARFaceBlendShape__MouthPressRight36                                             = 36,
	EARFaceBlendShape__MouthLowerDownLeft37                                          = 37,
	EARFaceBlendShape__MouthLowerDownRight38                                         = 38,
	EARFaceBlendShape__MouthUpperUpLeft39                                            = 39,
	EARFaceBlendShape__MouthUpperUpRight40                                           = 40,
	EARFaceBlendShape__BrowDownLeft41                                                = 41,
	EARFaceBlendShape__BrowDownRight42                                               = 42,
	EARFaceBlendShape__BrowInnerUp43                                                 = 43,
	EARFaceBlendShape__BrowOuterUpLeft44                                             = 44,
	EARFaceBlendShape__BrowOuterUpRight45                                            = 45,
	EARFaceBlendShape__CheekPuff46                                                   = 46,
	EARFaceBlendShape__CheekSquintLeft47                                             = 47,
	EARFaceBlendShape__CheekSquintRight48                                            = 48,
	EARFaceBlendShape__NoseSneerLeft49                                               = 49,
	EARFaceBlendShape__NoseSneerRight50                                              = 50,
	EARFaceBlendShape__TongueOut51                                                   = 51,
	EARFaceBlendShape__HeadYaw52                                                     = 52,
	EARFaceBlendShape__HeadPitch53                                                   = 53,
	EARFaceBlendShape__HeadRoll54                                                    = 54,
	EARFaceBlendShape__LeftEyeYaw55                                                  = 55,
	EARFaceBlendShape__LeftEyePitch56                                                = 56,
	EARFaceBlendShape__LeftEyeRoll57                                                 = 57,
	EARFaceBlendShape__RightEyeYaw58                                                 = 58,
	EARFaceBlendShape__RightEyePitch59                                               = 59,
	EARFaceBlendShape__RightEyeRoll60                                                = 60,
	EARFaceBlendShape__MAX61                                                         = 61
};

/// Enum /Script/AugmentedReality.EAREye
/// Size: 0x03
enum EAREye : uint8_t
{
	EAREye__LeftEye0                                                                 = 0,
	EAREye__RightEye1                                                                = 1,
	EAREye__EAREye_MAX2                                                              = 2
};

/// Enum /Script/AugmentedReality.EARCaptureType
/// Size: 0x06
enum EARCaptureType : uint8_t
{
	EARCaptureType__Camera0                                                          = 0,
	EARCaptureType__QRCode1                                                          = 1,
	EARCaptureType__SpatialMapping2                                                  = 2,
	EARCaptureType__SceneUnderstanding3                                              = 3,
	EARCaptureType__HandMesh4                                                        = 4,
	EARCaptureType__EARCaptureType_MAX5                                              = 5
};

/// Enum /Script/AugmentedReality.EARLineTraceChannels
/// Size: 0x06
enum EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None0                                                      = 0,
	EARLineTraceChannels__FeaturePoint1                                              = 1,
	EARLineTraceChannels__GroundPlane2                                               = 2,
	EARLineTraceChannels__PlaneUsingExtent3                                          = 4,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon4                                 = 8,
	EARLineTraceChannels__EARLineTraceChannels_MAX5                                  = 9
};

/// Enum /Script/AugmentedReality.EARTrackingQuality
/// Size: 0x04
enum EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking0                                                 = 0,
	EARTrackingQuality__OrientationOnly1                                             = 1,
	EARTrackingQuality__OrientationAndPosition2                                      = 2,
	EARTrackingQuality__EARTrackingQuality_MAX3                                      = 3
};

/// Enum /Script/AugmentedReality.EARTrackingQualityReason
/// Size: 0x08
enum EARTrackingQualityReason : uint8_t
{
	EARTrackingQualityReason__None0                                                  = 0,
	EARTrackingQualityReason__Initializing1                                          = 1,
	EARTrackingQualityReason__Relocalizing2                                          = 2,
	EARTrackingQualityReason__ExcessiveMotion3                                       = 3,
	EARTrackingQualityReason__InsufficientFeatures4                                  = 4,
	EARTrackingQualityReason__InsufficientLight5                                     = 5,
	EARTrackingQualityReason__BadState6                                              = 6,
	EARTrackingQualityReason__EARTrackingQualityReason_MAX7                          = 7
};

/// Enum /Script/AugmentedReality.EARSessionStatus
/// Size: 0x08
enum EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted0                                                    = 0,
	EARSessionStatus__Running1                                                       = 1,
	EARSessionStatus__NotSupported2                                                  = 2,
	EARSessionStatus__FatalError3                                                    = 3,
	EARSessionStatus__PermissionNotGranted4                                          = 4,
	EARSessionStatus__UnsupportedConfiguration5                                      = 5,
	EARSessionStatus__Other6                                                         = 6,
	EARSessionStatus__EARSessionStatus_MAX7                                          = 7
};

/// Enum /Script/AugmentedReality.EARWorldMappingState
/// Size: 0x05
enum EARWorldMappingState : uint8_t
{
	EARWorldMappingState__NotAvailable0                                              = 0,
	EARWorldMappingState__StillMappingNotRelocalizable1                              = 1,
	EARWorldMappingState__StillMappingRelocalizable2                                 = 2,
	EARWorldMappingState__Mapped3                                                    = 3,
	EARWorldMappingState__EARWorldMappingState_MAX4                                  = 4
};

/// Enum /Script/AugmentedReality.EARPlaneOrientation
/// Size: 0x04
enum EARPlaneOrientation : uint8_t
{
	EARPlaneOrientation__Horizontal0                                                 = 0,
	EARPlaneOrientation__Vertical1                                                   = 1,
	EARPlaneOrientation__Diagonal2                                                   = 2,
	EARPlaneOrientation__EARPlaneOrientation_MAX3                                    = 3
};

/// Enum /Script/AugmentedReality.EARObjectClassification
/// Size: 0x15
enum EARObjectClassification : uint8_t
{
	EARObjectClassification__NotApplicable0                                          = 0,
	EARObjectClassification__Unknown1                                                = 1,
	EARObjectClassification__Wall2                                                   = 2,
	EARObjectClassification__Ceiling3                                                = 3,
	EARObjectClassification__Floor4                                                  = 4,
	EARObjectClassification__Table5                                                  = 5,
	EARObjectClassification__Seat6                                                   = 6,
	EARObjectClassification__Face7                                                   = 7,
	EARObjectClassification__Image8                                                  = 8,
	EARObjectClassification__World9                                                  = 9,
	EARObjectClassification__SceneObject10                                           = 10,
	EARObjectClassification__HandMesh11                                              = 11,
	EARObjectClassification__Door12                                                  = 12,
	EARObjectClassification__Window13                                                = 13,
	EARObjectClassification__EARObjectClassification_MAX14                           = 14
};

/// Enum /Script/AugmentedReality.EARSpatialMeshUsageFlags
/// Size: 0x04
enum EARSpatialMeshUsageFlags : uint8_t
{
	EARSpatialMeshUsageFlags__NotApplicable0                                         = 0,
	EARSpatialMeshUsageFlags__Visible1                                               = 1,
	EARSpatialMeshUsageFlags__Collision2                                             = 2,
	EARSpatialMeshUsageFlags__EARSpatialMeshUsageFlags_MAX3                          = 3
};

/// Enum /Script/AugmentedReality.EARJointTransformSpace
/// Size: 0x03
enum EARJointTransformSpace : uint8_t
{
	EARJointTransformSpace__Model0                                                   = 0,
	EARJointTransformSpace__ParentJoint1                                             = 1,
	EARJointTransformSpace__EARJointTransformSpace_MAX2                              = 2
};

/// Enum /Script/AugmentedReality.EARAltitudeSource
/// Size: 0x05
enum EARAltitudeSource : uint8_t
{
	EARAltitudeSource__Precise0                                                      = 0,
	EARAltitudeSource__Coarse1                                                       = 1,
	EARAltitudeSource__UserDefined2                                                  = 2,
	EARAltitudeSource__Unknown3                                                      = 3,
	EARAltitudeSource__EARAltitudeSource_MAX4                                        = 4
};

/// Enum /Script/AugmentedReality.EARCandidateImageOrientation
/// Size: 0x03
enum EARCandidateImageOrientation : uint8_t
{
	EARCandidateImageOrientation__Landscape0                                         = 0,
	EARCandidateImageOrientation__Portrait1                                          = 1,
	EARCandidateImageOrientation__EARCandidateImageOrientation_MAX2                  = 2
};

