
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ProceduralMeshComponent.ProceduralMeshComponent
/// Size: 0x0080 (0x0005B0 - 0x000630)
class UProceduralMeshComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	DMember(bool)                                      bUseComplexAsSimpleCollision                                OFFSET(get<bool>, {0x5B8, 1, 0, 0})
	DMember(bool)                                      bUseAsyncCooking                                            OFFSET(get<bool>, {0x5B9, 1, 0, 0})
	CMember(UBodySetup*)                               ProcMeshBodySetup                                           OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(TArray<FProcMeshSection>)                  ProcMeshSections                                            OFFSET(get<T>, {0x5C8, 16, 0, 0})
	CMember(TArray<FKConvexElem>)                      CollisionConvexElems                                        OFFSET(get<T>, {0x5D8, 16, 0, 0})
	SMember(FBoxSphereBounds)                          LocalBounds                                                 OFFSET(getStruct<T>, {0x5E8, 56, 0, 0})
	CMember(TArray<UBodySetup*>)                       AsyncBodySetupQueue                                         OFFSET(get<T>, {0x620, 16, 0, 0})


	/// Functions
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	// void UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bSRGBConversion); // [0xaae1f28] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	// void UpdateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents); // [0xaae122c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	// void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);                                                   // [0xaae0be4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	// bool IsMeshSectionVisible(int32_t SectionIndex);                                                                         // [0xaae0b3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	// int32_t GetNumSections();                                                                                                // [0xaadefac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	// void CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision, bool bSRGBConversion); // [0xaadd680] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	// void CreateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision); // [0xaadc82c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	// void ClearMeshSection(int32_t SectionIndex);                                                                             // [0xaadba68] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	// void ClearCollisionConvexMeshes();                                                                                       // [0xaadba54] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	// void ClearAllMeshSections();                                                                                             // [0xaadb9d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
	// void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);                                                                // [0xaadac60] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshTangent
/// Size: 0x0020 (0x000000 - 0x000020)
class FProcMeshTangent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   TangentX                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      bFlipTangentY                                               OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshVertex
/// Size: 0x0098 (0x000000 - 0x000098)
class FProcMeshVertex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FProcMeshTangent)                          Tangent                                                     OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	SMember(FVector2D)                                 UV0                                                         OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FVector2D)                                 UV1                                                         OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FVector2D)                                 UV2                                                         OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FVector2D)                                 UV3                                                         OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshSection
/// Size: 0x0060 (0x000000 - 0x000060)
class FProcMeshSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FProcMeshVertex>)                   ProcVertexBuffer                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<uint32_t>)                          ProcIndexBuffer                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FBox)                                      SectionLocalBox                                             OFFSET(getStruct<T>, {0x20, 56, 0, 0})
	DMember(bool)                                      bEnableCollision                                            OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bSectionVisible                                             OFFSET(get<bool>, {0x59, 1, 0, 0})
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

