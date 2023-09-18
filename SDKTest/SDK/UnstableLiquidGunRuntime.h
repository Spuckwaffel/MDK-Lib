/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package UnstableLiquidGunRuntime.

/// Struct /Script/UnstableLiquidGunRuntime.LiquidRibbonSplineSegment
/// Size: 0x0078 (0x000000 - 0x000078)
class FLiquidRibbonSplineSegment : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   A                                                           ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   B                                                           ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   C                                                           ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   D                                                           ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	DMember(float)                                     DirectLength                                                ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      bHasDetachment                                              ___ OFFSET(get<bool>, {0x64, 1, 0, 0})
	CMember(TArray<FVector>)                           PointPositions                                              ___ OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/UnstableLiquidGunRuntime.LiquidRibbonSplineDetachment
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FLiquidRibbonSplineDetachment : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(int32_t)                                   FirstRibbonID                                               ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SecondRibbonID                                              ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     TimeDetached                                                ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FLiquidRibbonSplineSegment)                Segment                                                     ___ OFFSET(get<T>, {0x10, 120, 0, 0})
	SMember(FVector)                                   SegmentStartPoint                                           ___ OFFSET(get<T>, {0x88, 24, 0, 0})
	SMember(FVector)                                   SegmentEndPoint                                             ___ OFFSET(get<T>, {0xA0, 24, 0, 0})
};

/// Class /Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile
/// Size: 0x0150 (0x000A88 - 0x000BD8)
class AFortLiquidGunProjectile : public AFortProjectileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3032;

public:
	CMember(USceneComponent*)                          AttachComponent                                             ___ OFFSET(get<T>, {0xA88, 8, 0, 0})
	SMember(FVector)                                   AttachOffset                                                ___ OFFSET(get<T>, {0xA90, 24, 0, 0})
	DMember(int32_t)                                   ProjectileIndex                                             ___ OFFSET(get<int32_t>, {0xAA8, 4, 0, 0})
	SMember(FVector)                                   StopNormal                                                  ___ OFFSET(get<T>, {0xAB0, 24, 0, 0})
	CMember(ALiquidRibbonManager*)                     RibbonManager                                               ___ OFFSET(get<T>, {0xAC8, 8, 0, 0})
	SMember(FScalableFloat)                            MinDistBetweenProjectilesForSplineCollisionTest             ___ OFFSET(get<T>, {0xAD0, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistBetweenInLineProjectilesForSplineCollisionTest       ___ OFFSET(get<T>, {0xAF8, 40, 0, 0})
	SMember(FScalableFloat)                            MinProjectileVelocityAngleToBeInLine                        ___ OFFSET(get<T>, {0xB20, 40, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            BroadSphereOverlapTraceChannel                              ___ OFFSET(get<T>, {0xB48, 1, 0, 0})
	SMember(FName)                                     CapsuleTraceProfileName                                     ___ OFFSET(get<T>, {0xB4C, 4, 0, 0})
	DMember(bool)                                      bCapsuleTraceComplex                                        ___ OFFSET(get<bool>, {0xB50, 1, 0, 0})
	SMember(FVector_NetQuantize)                       RandomDetachmentAngleFirstHalf                              ___ OFFSET(get<T>, {0xB58, 24, 0, 0})
	SMember(FVector_NetQuantize)                       RandomDetachmentAngleSecondHalf                             ___ OFFSET(get<T>, {0xB70, 24, 0, 0})
	DMember(bool)                                      bDrawDebugCollision                                         ___ OFFSET(get<bool>, {0xB88, 1, 0, 0})
	DMember(bool)                                      bDrawDebugCollisionOnlyCapsuleTraceHits                     ___ OFFSET(get<bool>, {0xB89, 1, 0, 0})
	CMember(ELiquidRibbonDetachmentReason)             DetachmentReason                                            ___ OFFSET(get<T>, {0xB8A, 1, 0, 0})
};

/// Class /Script/UnstableLiquidGunRuntime.LiquidRibbonManager
/// Size: 0x01B8 (0x000290 - 0x000448)
class ALiquidRibbonManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	DMember(int32_t)                                   PointsPerSegment                                            ___ OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	SMember(FScalableFloat)                            MaxSegmentLengthBeforeBreak                                 ___ OFFSET(get<T>, {0x298, 40, 0, 0})
	DMember(float)                                     SplineCurveTension                                          ___ OFFSET(get<float>, {0x2C0, 4, 0, 0})
	DMember(float)                                     MinPointSize                                                ___ OFFSET(get<float>, {0x2C4, 4, 0, 0})
	DMember(float)                                     MaxPointSize                                                ___ OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(int32_t)                                   NumPointsAtMinPointSize                                     ___ OFFSET(get<int32_t>, {0x2CC, 4, 0, 0})
	DMember(int32_t)                                   NumPointsAtMaxPointSize                                     ___ OFFSET(get<int32_t>, {0x2D0, 4, 0, 0})
	DMember(float)                                     SplineLengthForSizeCalculation                              ___ OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(int32_t)                                   NumPointsToTaperDownSplineEndSize                           ___ OFFSET(get<int32_t>, {0x2D8, 4, 0, 0})
	DMember(float)                                     MinSplineEndTaperSize                                       ___ OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     TaperSizeAtDetachment_RemapClosenessToBreakageOldMin        ___ OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(float)                                     TaperSizeAtDetachment_RemapClosenessToBreakageOldMax        ___ OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(float)                                     MinPointSizePercentForFlashIntensity                        ___ OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(float)                                     MaxPointSizePercentForFlashIntensity                        ___ OFFSET(get<float>, {0x2EC, 4, 0, 0})
	SMember(FName)                                     PositionsNiagaraParamName                                   ___ OFFSET(get<T>, {0x2F0, 4, 0, 0})
	SMember(FName)                                     RibbonIDsNiagaraParamName                                   ___ OFFSET(get<T>, {0x2F4, 4, 0, 0})
	SMember(FName)                                     RibbonVisibilitiesNiagaraParamName                          ___ OFFSET(get<T>, {0x2F8, 4, 0, 0})
	SMember(FName)                                     FlashIntensitiesNiagaraParamName                            ___ OFFSET(get<T>, {0x2FC, 4, 0, 0})
	SMember(FName)                                     RibbonSizesNiagaraParamName                                 ___ OFFSET(get<T>, {0x300, 4, 0, 0})
	SMember(FScalableFloat)                            CalculateBaseCurlOffset_MaxSegmentLength                    ___ OFFSET(get<T>, {0x308, 40, 0, 0})
	SMember(FScalableFloat)                            CalculateBaseCurlOffset_MaxTimeSinceDetachment              ___ OFFSET(get<T>, {0x330, 40, 0, 0})
	SMember(FScalableFloat)                            CalculateBaseCurlOffset_TowardPerpendicularMult             ___ OFFSET(get<T>, {0x358, 40, 0, 0})
	SMember(FScalableFloat)                            CalculateBaseCurlOffset_TowardEndMult                       ___ OFFSET(get<T>, {0x380, 40, 0, 0})
	SMember(FScalableFloat)                            CalculateBaseCurlOffset_TowardRandomMult                    ___ OFFSET(get<T>, {0x3A8, 40, 0, 0})
	CMember(UCurveFloat*)                              TimeSinceDetachmentCurlCurve                                ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	SMember(FScalableFloat)                            TimeSinceDetachmentCurlCurve_MaxTime                        ___ OFFSET(get<T>, {0x3D8, 40, 0, 0})
	DMember(float)                                     CurlingMaxClosenessToBreakage                               ___ OFFSET(get<float>, {0x400, 4, 0, 0})
	CMember(TArray<float>)                             SegmentLengths                                              ___ OFFSET(get<T>, {0x408, 16, 0, 0})
	CMember(TArray<FLiquidRibbonSplineDetachment>)     Detachments                                                 ___ OFFSET(get<T>, {0x418, 16, 0, 0})
	CMember(TArray<FLiquidRibbonSplineSegment>)        SplineSegments                                              ___ OFFSET(get<T>, {0x428, 16, 0, 0})
	CMember(TArray<AFortLiquidGunProjectile*>)         Projectiles_Native                                          ___ OFFSET(get<T>, {0x438, 16, 0, 0})
};

/// Enum /Script/UnstableLiquidGunRuntime.ELiquidRibbonDetachmentReason
/// Size: 0x04
enum ELiquidRibbonDetachmentReason : uint8_t
{
	ELiquidRibbonDetachmentReason__NotDetached0                                      = 0,
	ELiquidRibbonDetachmentReason__ByDistance1                                       = 1,
	ELiquidRibbonDetachmentReason__ByAngle2                                          = 2,
	ELiquidRibbonDetachmentReason__ELiquidRibbonDetachmentReason_MAX3                = 3
};

