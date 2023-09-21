
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C
/// Size: 0x02E0 (0x000290 - 0x000570)
class ABP_FluidSim_01_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     DebugPlane                                                  ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 RippleSimMID                                                ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 RenderNormalsMID                                            ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 DisplayMID                                                  ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 DisplayBottomMID                                            ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 CrossSectionMID                                             ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TArray<UTextureRenderTarget2D*>)           RippleRTs                                                   ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(UMaterialInterface*)                       Display_Material                                            ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(double)                                    Virtual_FPS                                                 ___ OFFSET(get<double>, {0x2E8, 8, 0, 0})
	DMember(int32_t)                                   Passes                                                      ___ OFFSET(get<int32_t>, {0x2F0, 4, 0, 0})
	DMember(double)                                    TimeAccumulator                                             ___ OFFSET(get<double>, {0x2F8, 8, 0, 0})
	DMember(double)                                    FixedStep                                                   ___ OFFSET(get<double>, {0x300, 8, 0, 0})
	DMember(bool)                                      Enabled                                                     ___ OFFSET(get<bool>, {0x308, 1, 0, 0})
	DMember(double)                                    Fluid_Size                                                  ___ OFFSET(get<double>, {0x310, 8, 0, 0})
	DMember(int32_t)                                   Resolution                                                  ___ OFFSET(get<int32_t>, {0x318, 4, 0, 0})
	CMember(TEnumAsByte<FluidBoundary>)                Boundary_Condition                                          ___ OFFSET(get<T>, {0x31C, 1, 0, 0})
	DMember(double)                                    Travel_Speed                                                ___ OFFSET(get<double>, {0x320, 8, 0, 0})
	DMember(double)                                    Damping                                                     ___ OFFSET(get<double>, {0x328, 8, 0, 0})
	CMember(UTextureRenderTarget2D*)                   NormalRT                                                    ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	SMember(FVector)                                   CutPos                                                      ___ OFFSET(get<T>, {0x338, 24, 0, 0})
	SMember(FVector)                                   PrevLoc                                                     ___ OFFSET(get<T>, {0x350, 24, 0, 0})
	SMember(FVector)                                   PrecLoc2                                                    ___ OFFSET(get<T>, {0x368, 24, 0, 0})
	SMember(FVector)                                   PrevOffset                                                  ___ OFFSET(get<T>, {0x380, 24, 0, 0})
	SMember(FVector)                                   PrevOffset2                                                 ___ OFFSET(get<T>, {0x398, 24, 0, 0})
	SMember(FVector)                                   GridCenter                                                  ___ OFFSET(get<T>, {0x3B0, 24, 0, 0})
	CMember(UTextureRenderTarget2D*)                   TempRT                                                      ___ OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(UTextureRenderTarget2D*)                   ForcesRT                                                    ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	DMember(double)                                    ApplyForces                                                 ___ OFFSET(get<double>, {0x3D8, 8, 0, 0})
	CMember(ALandscapeWaterInfo_C*)                    LandscapeWaterInfo                                          ___ OFFSET(get<T>, {0x3E0, 8, 0, 0})
	DMember(int32_t)                                   Renders_Per_Frame                                           ___ OFFSET(get<int32_t>, {0x3E8, 4, 0, 0})
	DMember(bool)                                      Show_Cross_Section                                          ___ OFFSET(get<bool>, {0x3EC, 1, 0, 0})
	DMember(bool)                                      Perf_Test_Mode                                              ___ OFFSET(get<bool>, {0x3ED, 1, 0, 0})
	CMember(UTextureRenderTarget2D*)                   PerfRT                                                      ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(TArray<FFluidForceImpulsePerInstanceData>) ImpulseForces                                               ___ OFFSET(get<T>, {0x3F8, 16, 0, 0})
	CMember(TMap<UActorComponent*, FFluidForceDynamicPerInstanceData>) DynamicForces                               ___ OFFSET(get<T>, {0x408, 80, 0, 0})
	CMember(TMap<UMaterialInterface*, UMaterialInstanceDynamic*>) ForceParentAndMIDMap                             ___ OFFSET(get<T>, {0x458, 80, 0, 0})
	DMember(bool)                                      Show_Simulation_Mesh                                        ___ OFFSET(get<bool>, {0x4A8, 1, 0, 0})
	CMember(UStaticMeshComponent*)                     Fluid_Display_Mesh                                          ___ OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Cross_Section_Mesh                                          ___ OFFSET(get<T>, {0x4B8, 8, 0, 0})
	DMember(double)                                    FluidSizeSquared                                            ___ OFFSET(get<double>, {0x4C0, 8, 0, 0})
	DMember(bool)                                      LocalPawnRef                                                ___ OFFSET(get<bool>, {0x4C8, 1, 0, 0})
	DMember(bool)                                      Debug_Text                                                  ___ OFFSET(get<bool>, {0x4C9, 1, 0, 0})
	DMember(int32_t)                                   Pawn_Check_Every_N_Frames                                   ___ OFFSET(get<int32_t>, {0x4CC, 4, 0, 0})
	CMember(TMap<UActorComponent*, FFluidForceDynamicPerInstanceData>) ProjectileForces                            ___ OFFSET(get<T>, {0x4D0, 80, 0, 0})
	DMember(bool)                                      Follow_Player_                                              ___ OFFSET(get<bool>, {0x520, 1, 0, 0})
	DMember(int32_t)                                   Frames_Since_Last_Active_Force                              ___ OFFSET(get<int32_t>, {0x524, 4, 0, 0})
	DMember(bool)                                      Use_Terrain_Water_System                                    ___ OFFSET(get<bool>, {0x528, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 PhysicsForceMID                                             ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	DMember(bool)                                      Add_Physics_Forces                                          ___ OFFSET(get<bool>, {0x538, 1, 0, 0})
	CMember(UTexture*)                                 WaterVelocityTexture                                        ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	DMember(bool)                                      UpdateForcesInFixedTimeStep                                 ___ OFFSET(get<bool>, {0x548, 1, 0, 0})
	DMember(bool)                                      UpdateSimInFixedTimeStep                                    ___ OFFSET(get<bool>, {0x549, 1, 0, 0})
	DMember(bool)                                      UpdateNormalInFixedTimeStep                                 ___ OFFSET(get<bool>, {0x54A, 1, 0, 0})
	DMember(bool)                                      ShowDebugWaterPlane                                         ___ OFFSET(get<bool>, {0x54B, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 DebugWaterPlaneMID                                          ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UTextureRenderTarget2D*)                   DebugRippleRT1                                              ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UTextureRenderTarget2D*)                   DebugRippleRT2                                              ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UTextureRenderTarget2D*)                   DebugRippleRTCurrent                                        ___ OFFSET(get<T>, {0x568, 8, 0, 0})
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceSocketInfo.FluidForceSocketInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FFluidForceSocketInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, FName>)                        SocketsandEndpoints_6_B3EDD8FC43A7C681151F46BE0AA158C5      ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceDynamic.FluidForceDynamic
/// Size: 0x0070 (0x000000 - 0x000070)
class FFluidForceDynamic : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TEnumAsByte<FluidDynamicForceMeshType>)    ForceType_28_DDC16EE543D2DFD3BA29C49D32198C9C               ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     ForceRadius_32_C31B527C4C367A5CA5E1DF8E49E76234             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ForceStrength_33_2CAA30794D1EFF60AE1C3491D011CECF           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(USceneComponent*)                          ForceComponent_34_ABF6640F40D37677EF6F809E09046055          ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UMaterialInterface*)                       MaterialOverride_25_5A792CE8489A59E5D9B24F9E4DCFE94A        ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FFluidForceSocketInfo)                     SkeletalMeshSetup_31_51A4130440BAFFBA1DA0FE83E942A30A       ___ OFFSET(get<T>, {0x20, 80, 0, 0})
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceDynamicPerInstanceData.FluidForceDynamicPerInstanceData
/// Size: 0x0148 (0x000000 - 0x000148)
class FFluidForceDynamicPerInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FFluidForceDynamic)                        ForceInfo_2_A6A35E3243FAF59D161A5FBAA2F6F2B1                ___ OFFSET(get<T>, {0x0, 112, 0, 0})
	SMember(FVector)                                   ComponentLocation_13_959307184C8E5CCACA55FC8378D92CFD       ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   ComponentVelocity_5_4F6589474918826DF8A6468CF0F2C361        ___ OFFSET(get<T>, {0x88, 24, 0, 0})
	DMember(float)                                     BoundsRadius_30_ADFF818743BE39AC4A481D995CB50D03            ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     WaterLevel_34_A4E505D148073B883CA7B1B09A3E34A8              ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	CMember(TMap<FName, FVector>)                      SocketLocationMap_21_ABF6AA244A5F84728A5E83BE2328C7FA       ___ OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TMap<FName, FVector>)                      SocketVelocityMap_26_82B0E24B45935A12E1949F918A59A537       ___ OFFSET(get<T>, {0xF8, 80, 0, 0})
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceImpulseTimedEffects.FluidForceImpulseTimedEffects
/// Size: 0x0028 (0x000000 - 0x000028)
class FFluidForceImpulseTimedEffects : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      EnableWaterDropsEffect_39_0A7932284406807D62695D8E0927BD70  ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     EffectRadius_30_C9A94C02422D8BF40DF6B1BB2A0D8CBC            ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Strength_29_2CAA30794D1EFF60AE1C3491D011CECF                ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WaterDropsperSquareMeter_27_C31B527C4C367A5CA5E1DF8E49E76234 ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     StartTimeOffset_33_5A792CE8489A59E5D9B24F9E4DCFE94A         ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Lifetime_35_C2749C1449C41D4F236BCBAF6ED34113                ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     StrengthoverLifePower_37_4FA6941A4AD024828AFEB782783DD01C   ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(UMaterialInterface*)                       MaterialOverride_42_FB856A244A1713590BB76EAA7CC7A0DF        ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceImpulse.FluidForceImpulse
/// Size: 0x0058 (0x000000 - 0x000058)
class FFluidForceImpulse : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   WorldPosition_32_C9A94C02422D8BF40DF6B1BB2A0D8CBC           ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     ForceRadius_31_C31B527C4C367A5CA5E1DF8E49E76234             ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ForceStrength_30_2CAA30794D1EFF60AE1C3491D011CECF           ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(UMaterialInterface*)                       MaterialOverride_24_5A792CE8489A59E5D9B24F9E4DCFE94A        ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(float)                                     Lifetime_34_C2749C1449C41D4F236BCBAF6ED34113                ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     StrengthoverLifePower_41_85B52C994A7ED323A34BF4BBCB0DFA0F   ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FFluidForceImpulseTimedEffects)            TimedWaterDropSplashes_38_2CB1456B483AEF3A52677AAF4152E31E  ___ OFFSET(get<T>, {0x30, 40, 0, 0})
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceImpulsePerInstanceData.FluidForceImpulsePerInstanceData
/// Size: 0x0061 (0x000000 - 0x000061)
class FFluidForceImpulsePerInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 97;

public:
	SMember(FFluidForceImpulse)                        ImpulseSettings_41_C9A94C02422D8BF40DF6B1BB2A0D8CBC         ___ OFFSET(get<T>, {0x0, 88, 0, 0})
	DMember(float)                                     ElapsedTime_44_12C387C1450456E47FC74BBD11EEAE4F             ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     StartOffset_48_78EF0E3F4B05F70C5679F9B9F41D590F             ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      IsSplashEffect_54_4A5B178940D26E71D6FCDF84584A5284          ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Enum /FortWater/FluidSimulation/Blueprints/Enums/FluidDynamicForceMeshType.FluidDynamicForceMeshType
/// Size: 0x03
enum FluidDynamicForceMeshType : uint8_t
{
	FluidDynamicForceMeshType__NewEnumerator00                                       = 0,
	FluidDynamicForceMeshType__NewEnumerator11                                       = 1,
	FluidDynamicForceMeshType__FluidDynamicForceMeshType_MAX2                        = 2
};

/// Enum /FortWater/FluidSimulation/Blueprints/Enums/FluidBoundary.FluidBoundary
/// Size: 0x03
enum FluidBoundary : uint8_t
{
	FluidBoundary__NewEnumerator00                                                   = 0,
	FluidBoundary__NewEnumerator11                                                   = 1,
	FluidBoundary__FluidBoundary_MAX2                                                = 2
};

