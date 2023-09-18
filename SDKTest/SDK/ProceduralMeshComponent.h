/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ProceduralMeshComponent.

/// Struct /Script/ProceduralMeshComponent.ProcMeshTangent
/// Size: 0x0020 (0x000000 - 0x000020)
class FProcMeshTangent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   TangentX                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      bFlipTangentY                                               ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshVertex
/// Size: 0x0098 (0x000000 - 0x000098)
class FProcMeshVertex : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FProcMeshTangent)                          Tangent                                                     ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FColor)                                    Color                                                       ___ OFFSET(get<T>, {0x50, 4, 0, 0})
	SMember(FVector2D)                                 UV0                                                         ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FVector2D)                                 UV1                                                         ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FVector2D)                                 UV2                                                         ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FVector2D)                                 UV3                                                         ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshSection
/// Size: 0x0060 (0x000000 - 0x000060)
class FProcMeshSection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FProcMeshVertex>)                   ProcVertexBuffer                                            ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<uint32_t>)                          ProcIndexBuffer                                             ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FBox)                                      SectionLocalBox                                             ___ OFFSET(get<T>, {0x20, 56, 0, 0})
	DMember(bool)                                      bEnableCollision                                            ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bSectionVisible                                             ___ OFFSET(get<bool>, {0x59, 1, 0, 0})
};

/// Class /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ProceduralMeshComponent.ProceduralMeshComponent
/// Size: 0x0080 (0x0005A0 - 0x000620)
class UProceduralMeshComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
	DMember(bool)                                      bUseComplexAsSimpleCollision                                ___ OFFSET(get<bool>, {0x5A8, 1, 0, 0})
	DMember(bool)                                      bUseAsyncCooking                                            ___ OFFSET(get<bool>, {0x5A9, 1, 0, 0})
	CMember(UBodySetup*)                               ProcMeshBodySetup                                           ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(TArray<FProcMeshSection>)                  ProcMeshSections                                            ___ OFFSET(get<T>, {0x5B8, 16, 0, 0})
	CMember(TArray<FKConvexElem>)                      CollisionConvexElems                                        ___ OFFSET(get<T>, {0x5C8, 16, 0, 0})
	SMember(FBoxSphereBounds)                          LocalBounds                                                 ___ OFFSET(get<T>, {0x5D8, 56, 0, 0})
	CMember(TArray<UBodySetup*>)                       AsyncBodySetupQueue                                         ___ OFFSET(get<T>, {0x610, 16, 0, 0})
};

/// Enum /Script/ProceduralMeshComponent.EProcMeshSliceCapOption
/// Size: 0x04
enum EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap0                                                  = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap1                                 = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap2                                   = 2,
	EProcMeshSliceCapOption__EProcMeshSliceCapOption_MAX3                            = 3
};

