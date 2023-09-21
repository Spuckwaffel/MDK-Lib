
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/AscenderCodeRuntime.FortCheatManager_AscenderZipline
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCheatManager_AscenderZipline : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AscenderCodeRuntime.FortAscenderZipline
/// Size: 0x0358 (0x000C90 - 0x000FE8)
class AFortAscenderZipline : public AFortAthenaSplineZipline
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4072;

public:
	SMember(FMulticastInlineDelegate)                  OnAscenderSetupComplete                                     ___ OFFSET(get<T>, {0xC90, 16, 0, 0})
	SMember(FName)                                     SplineTopAttachPointName                                    ___ OFFSET(get<T>, {0xCA0, 4, 0, 0})
	DMember(bool)                                      bAutoFindSplineEndLocation                                  ___ OFFSET(get<bool>, {0xCA4, 1, 0, 0})
	DMember(float)                                     SplineOffsetFromGround                                      ___ OFFSET(get<float>, {0xCA8, 4, 0, 0})
	DMember(float)                                     CableOffsetFromSplineEnd                                    ___ OFFSET(get<float>, {0xCAC, 4, 0, 0})
	DMember(float)                                     SplineLength                                                ___ OFFSET(get<float>, {0xCB0, 4, 0, 0})
	CMember(UStaticMesh*)                              SplineStaticMesh                                            ___ OFFSET(get<T>, {0xCB8, 8, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              MeshForwardAxis                                             ___ OFFSET(get<T>, {0xCC0, 1, 0, 0})
	DMember(bool)                                      bHandleReturning                                            ___ OFFSET(get<bool>, {0xCC1, 1, 0, 0})
	DMember(float)                                     HandleReturnSpeed                                           ___ OFFSET(get<float>, {0xCC4, 4, 0, 0})
	DMember(bool)                                      bCableDropping                                              ___ OFFSET(get<bool>, {0xCC8, 1, 0, 0})
	DMember(float)                                     CableDropSpeed                                              ___ OFFSET(get<float>, {0xCCC, 4, 0, 0})
	DMember(float)                                     YawRotationOffsetWhileUsingHandle                           ___ OFFSET(get<float>, {0xCD0, 4, 0, 0})
	DMember(float)                                     YawRotationOffsetWhileSlidingDown                           ___ OFFSET(get<float>, {0xCD4, 4, 0, 0})
	DMember(bool)                                      bUseComplexSplineCollision                                  ___ OFFSET(get<bool>, {0xCD8, 1, 0, 0})
	DMember(float)                                     SimpleSplineCollisionRadius                                 ___ OFFSET(get<float>, {0xCDC, 4, 0, 0})
	DMember(float)                                     SimpleSplineCollisionHeightExtension                        ___ OFFSET(get<float>, {0xCE0, 4, 0, 0})
	SMember(FScalableFloat)                            DescendMinDistanceFromBottom                                ___ OFFSET(get<T>, {0xCE8, 40, 0, 0})
	SMember(FScalableFloat)                            AscendReachedEndHorizontalLaunchSpeed                       ___ OFFSET(get<T>, {0xD10, 40, 0, 0})
	SMember(FScalableFloat)                            AscendReachedEndVerticalLaunchSpeed                         ___ OFFSET(get<T>, {0xD38, 40, 0, 0})
	SMember(FScalableFloat)                            AscendJumpedOffHorizontalLaunchSpeed                        ___ OFFSET(get<T>, {0xD60, 40, 0, 0})
	SMember(FScalableFloat)                            AscendJumpedOffVerticalLaunchSpeed                          ___ OFFSET(get<T>, {0xD88, 40, 0, 0})
	SMember(FScalableFloat)                            DescendReachedEndHorizontalLaunchSpeed                      ___ OFFSET(get<T>, {0xDB0, 40, 0, 0})
	SMember(FScalableFloat)                            DescendReachedEndVerticalLaunchSpeed                        ___ OFFSET(get<T>, {0xDD8, 40, 0, 0})
	SMember(FScalableFloat)                            DescendJumpedOffHorizontalLaunchSpeed                       ___ OFFSET(get<T>, {0xE00, 40, 0, 0})
	SMember(FScalableFloat)                            DescendJumpedOffVerticalLaunchSpeed                         ___ OFFSET(get<T>, {0xE28, 40, 0, 0})
	SMember(FScalableFloat)                            HandleActorHitPlayerHorizontalLaunchSpeed                   ___ OFFSET(get<T>, {0xE50, 40, 0, 0})
	SMember(FScalableFloat)                            HandleActorHitPlayerVerticalLaunchSpeed                     ___ OFFSET(get<T>, {0xE78, 40, 0, 0})
	SMember(FVector)                                   HandleDestroyBuildingsOverlapExtents                        ___ OFFSET(get<T>, {0xEA0, 24, 0, 0})
	SMember(FVector)                                   PlayerDestroyBuildingsOverlapExtents                        ___ OFFSET(get<T>, {0xEB8, 24, 0, 0})
	SMember(FVector)                                   InitialSplineEndLocation                                    ___ OFFSET(get<T>, {0xED0, 24, 0, 0})
	SMember(FVector)                                   CurrentSplineEndLocation                                    ___ OFFSET(get<T>, {0xEE8, 24, 0, 0})
	SMember(FVector)                                   TargetSplineEndLocation                                     ___ OFFSET(get<T>, {0xF00, 24, 0, 0})
	SMember(FVector)                                   CurrentHandleLocation                                       ___ OFFSET(get<T>, {0xF18, 24, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      CurrentInteractComponent                                    ___ OFFSET(get<T>, {0xF30, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          PawnUsingHandle                                             ___ OFFSET(get<T>, {0xF38, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          PreviousPawnUsingHandle                                     ___ OFFSET(get<T>, {0xF40, 8, 0, 0})
	CMember(USplineMeshComponent*)                     SplineMesh                                                  ___ OFFSET(get<T>, {0xF48, 8, 0, 0})
	CMember(UCapsuleComponent*)                        SimpleSplineMeshCollision                                   ___ OFFSET(get<T>, {0xF50, 8, 0, 0})
	CMember(TWeakObjectPtr<ABuildingActor*>)           FloorActor                                                  ___ OFFSET(get<T>, {0xF58, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    RotationLockedPawns                                         ___ OFFSET(get<T>, {0xF60, 16, 0, 0})
	CMember(UFortLinkToActorComponent*)                LinkToActorComponent                                        ___ OFFSET(get<T>, {0xFD8, 8, 0, 0})
	CMember(UFortZiplineLinkComponent*)                ZiplineLinkComponent                                        ___ OFFSET(get<T>, {0xFE0, 8, 0, 0})
};

