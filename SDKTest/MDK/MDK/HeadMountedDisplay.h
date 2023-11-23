
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/HeadMountedDisplay.HandKeypointConversion
/// Size: 0x0000 (0x000028 - 0x000028)
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x0170 (0x000580 - 0x0006F0)
class UMotionControllerComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1776;

public:
	DMember(int32_t)                                   PlayerIndex                                                 OFFSET(get<int32_t>, {0x578, 4, 0, 0})
	SMember(FName)                                     MotionSource                                                OFFSET(getStruct<T>, {0x57C, 4, 0, 0})
	DMember(bool)                                      bDisableLowLatencyUpdate                                    OFFSET(get<bool>, {0x580, 1, 1, 0})
	CMember(ETrackingStatus)                           CurrentTrackingStatus                                       OFFSET(get<T>, {0x584, 1, 0, 0})
	DMember(bool)                                      bDisplayDeviceModel                                         OFFSET(get<bool>, {0x585, 1, 0, 0})
	SMember(FName)                                     DisplayModelSource                                          OFFSET(getStruct<T>, {0x588, 4, 0, 0})
	CMember(UStaticMesh*)                              CustomDisplayMesh                                           OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               DisplayMeshMaterialOverrides                                OFFSET(get<T>, {0x598, 16, 0, 0})
	CMember(UPrimitiveComponent*)                      DisplayComponent                                            OFFSET(get<T>, {0x5A8, 8, 0, 0})


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	// void SetTrackingSource(EControllerHand NewSource);                                                                       // [0x5360f04] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	// void SetTrackingMotionSource(FName NewSource);                                                                           // [0x5360e84] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	// void SetShowDeviceModel(bool bShowControllerModel);                                                                      // [0x5360de0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	// void SetDisplayModelSource(FName NewDisplayModelSource);                                                                 // [0x5360d54] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	// void SetCustomDisplayMesh(UStaticMesh* NewDisplayMesh);                                                                  // [0x5360c68] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	// void SetAssociatedPlayerIndex(int32_t NewPlayer);                                                                        // [0x5360be8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	// void OnMotionControllerUpdated();                                                                                        // [0x101681c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked
	// bool IsTracked();                                                                                                        // [0x5360bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	// EControllerHand GetTrackingSource();                                                                                     // [0x5360b98] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	// float GetParameterValue(FName InName, bool& bValueFound);                                                                // [0x5360aa0] Final|RequiredAPI|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetLinearVelocity
	// bool GetLinearVelocity(FVector& OutLinearVelocity);                                                                      // [0x53609cc] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetLinearAcceleration
	// bool GetLinearAcceleration(FVector& OutLinearAcceleration);                                                              // [0x53608f8] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	// FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);                                                     // [0x53607e4] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetAngularVelocity
	// bool GetAngularVelocity(FRotator& OutAngularVelocity);                                                                   // [0x5360750] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/HeadMountedDisplay.XRHMDData
/// Size: 0x0060 (0x000000 - 0x000060)
class FXRHMDData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     DeviceName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FGuid)                                     ApplicationInstanceID                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(ETrackingStatus)                           TrackingStatus                                              OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/HeadMountedDisplay.XRMotionControllerData
/// Size: 0x0120 (0x000000 - 0x000120)
class FXRMotionControllerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     DeviceName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FGuid)                                     ApplicationInstanceID                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(EXRVisualType)                             DeviceVisualType                                            OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(EControllerHand)                           HandIndex                                                   OFFSET(get<T>, {0x19, 1, 0, 0})
	CMember(ETrackingStatus)                           TrackingStatus                                              OFFSET(get<T>, {0x1A, 1, 0, 0})
	SMember(FVector)                                   GripPosition                                                OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FQuat)                                     GripRotation                                                OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FVector)                                   AimPosition                                                 OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FQuat)                                     AimRotation                                                 OFFSET(getStruct<T>, {0x80, 32, 0, 0})
	SMember(FVector)                                   PalmPosition                                                OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FQuat)                                     PalmRotation                                                OFFSET(getStruct<T>, {0xC0, 32, 0, 0})
	CMember(TArray<FVector>)                           HandKeyPositions                                            OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<FQuat>)                             HandKeyRotations                                            OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<float>)                             HandKeyRadii                                                OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      bIsGrasped                                                  OFFSET(get<bool>, {0x110, 1, 0, 0})
};

/// Struct /Script/HeadMountedDisplay.XRGestureConfig
/// Size: 0x0006 (0x000000 - 0x000006)
class FXRGestureConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(bool)                                      bTap                                                        OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bHold                                                       OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(ESpatialInputGestureAxis)                  AxisGesture                                                 OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(bool)                                      bNavigationAxisX                                            OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bNavigationAxisY                                            OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bNavigationAxisZ                                            OFFSET(get<bool>, {0x5, 1, 0, 0})
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x0008 (0x000000 - 0x000008)
class FXRDeviceId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     SystemName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DeviceID                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x04
enum EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation0                                            = 0,
	EOrientPositionSelector__Position1                                               = 1,
	EOrientPositionSelector__OrientationAndPosition2                                 = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX3                            = 3
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x04
enum EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor0                                                       = 0,
	EHMDTrackingOrigin__Eye1                                                         = 1,
	EHMDTrackingOrigin__Stage2                                                       = 2,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX3                                      = 3
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x04
enum EHMDWornState : uint8_t
{
	EHMDWornState__Unknown0                                                          = 0,
	EHMDWornState__Worn1                                                             = 1,
	EHMDWornState__NotWorn2                                                          = 2,
	EHMDWornState__EHMDWornState_MAX3                                                = 3
};

/// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
/// Size: 0x06
enum EXRDeviceConnectionResult : uint8_t
{
	EXRDeviceConnectionResult__NoTrackingSystem0                                     = 0,
	EXRDeviceConnectionResult__FeatureNotSupported1                                  = 1,
	EXRDeviceConnectionResult__NoValidViewport2                                      = 2,
	EXRDeviceConnectionResult__MiscFailure3                                          = 3,
	EXRDeviceConnectionResult__Success4                                              = 4,
	EXRDeviceConnectionResult__EXRDeviceConnectionResult_MAX5                        = 5
};

/// Enum /Script/HeadMountedDisplay.EXRSystemFlags
/// Size: 0x06
enum EXRSystemFlags : uint8_t
{
	EXRSystemFlags__NoFlags0                                                         = 0,
	EXRSystemFlags__IsAR1                                                            = 1,
	EXRSystemFlags__IsTablet2                                                        = 2,
	EXRSystemFlags__IsHeadMounted3                                                   = 4,
	EXRSystemFlags__SupportsHandTracking4                                            = 8,
	EXRSystemFlags__EXRSystemFlags_MAX5                                              = 9
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x09
enum ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled0                                                  = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed1                                      = 1,
	ESpectatorScreenMode__Undistorted2                                               = 2,
	ESpectatorScreenMode__Distorted3                                                 = 3,
	ESpectatorScreenMode__SingleEye4                                                 = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill5                                    = 5,
	ESpectatorScreenMode__Texture6                                                   = 6,
	ESpectatorScreenMode__TexturePlusEye7                                            = 7,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX8                                  = 8
};

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x08
enum EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay0                                        = 0,
	EXRTrackedDeviceType__Controller1                                                = 1,
	EXRTrackedDeviceType__TrackingReference2                                         = 2,
	EXRTrackedDeviceType__Tracker3                                                   = 3,
	EXRTrackedDeviceType__Other4                                                     = 4,
	EXRTrackedDeviceType__Invalid5                                                   = 254,
	EXRTrackedDeviceType__Any6                                                       = 255,
	EXRTrackedDeviceType__EXRTrackedDeviceType_MAX7                                  = 256
};

/// Enum /Script/HeadMountedDisplay.EHandKeypoint
/// Size: 0x27
enum EHandKeypoint : uint8_t
{
	EHandKeypoint__Palm0                                                             = 0,
	EHandKeypoint__Wrist1                                                            = 1,
	EHandKeypoint__ThumbMetacarpal2                                                  = 2,
	EHandKeypoint__ThumbProximal3                                                    = 3,
	EHandKeypoint__ThumbDistal4                                                      = 4,
	EHandKeypoint__ThumbTip5                                                         = 5,
	EHandKeypoint__IndexMetacarpal6                                                  = 6,
	EHandKeypoint__IndexProximal7                                                    = 7,
	EHandKeypoint__IndexIntermediate8                                                = 8,
	EHandKeypoint__IndexDistal9                                                      = 9,
	EHandKeypoint__IndexTip10                                                        = 10,
	EHandKeypoint__MiddleMetacarpal11                                                = 11,
	EHandKeypoint__MiddleProximal12                                                  = 12,
	EHandKeypoint__MiddleIntermediate13                                              = 13,
	EHandKeypoint__MiddleDistal14                                                    = 14,
	EHandKeypoint__MiddleTip15                                                       = 15,
	EHandKeypoint__RingMetacarpal16                                                  = 16,
	EHandKeypoint__RingProximal17                                                    = 17,
	EHandKeypoint__RingIntermediate18                                                = 18,
	EHandKeypoint__RingDistal19                                                      = 19,
	EHandKeypoint__RingTip20                                                         = 20,
	EHandKeypoint__LittleMetacarpal21                                                = 21,
	EHandKeypoint__LittleProximal22                                                  = 22,
	EHandKeypoint__LittleIntermediate23                                              = 23,
	EHandKeypoint__LittleDistal24                                                    = 24,
	EHandKeypoint__LittleTip25                                                       = 25,
	EHandKeypoint__EHandKeypoint_MAX26                                               = 26
};

/// Enum /Script/HeadMountedDisplay.EXRVisualType
/// Size: 0x03
enum EXRVisualType : uint8_t
{
	EXRVisualType__Controller0                                                       = 0,
	EXRVisualType__Hand1                                                             = 1,
	EXRVisualType__EXRVisualType_MAX2                                                = 2
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x04
enum ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked0                                                     = 0,
	ETrackingStatus__InertialOnly1                                                   = 1,
	ETrackingStatus__Tracked2                                                        = 2,
	ETrackingStatus__ETrackingStatus_MAX3                                            = 3
};

/// Enum /Script/HeadMountedDisplay.ESpatialInputGestureAxis
/// Size: 0x05
enum ESpatialInputGestureAxis : uint8_t
{
	ESpatialInputGestureAxis__None0                                                  = 0,
	ESpatialInputGestureAxis__Manipulation1                                          = 1,
	ESpatialInputGestureAxis__Navigation2                                            = 2,
	ESpatialInputGestureAxis__NavigationRails3                                       = 3,
	ESpatialInputGestureAxis__ESpatialInputGestureAxis_MAX4                          = 4
};

