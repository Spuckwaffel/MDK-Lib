
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Tweening.TweenSplineInfo
/// Size: 0x0010 (0x000028 - 0x000038)
class UTweenSplineInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<USplineComponent*>)         Spline                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(ETweenSplineAlignmentOption)               Alignment                                                   OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(bool)                                      bIgnorePitch                                                OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bIgnoreYaw                                                  OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bIgnoreRoll                                                 OFFSET(get<bool>, {0x33, 1, 0, 0})
};

/// Class /Script/Tweening.ActorTweening
/// Size: 0x0000 (0x000028 - 0x000028)
class UActorTweening : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Tweening.TweenMaterialParameterInfo
/// Size: 0x0008 (0x000028 - 0x000030)
class UTweenMaterialParameterInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Class /Script/Tweening.MaterialTweening
/// Size: 0x0000 (0x000028 - 0x000028)
class UMaterialTweening : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Tweening.TweenManager
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UTweenManager : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TMap<int32_t, UObject*>)                   TweenContexts                                               OFFSET(get<T>, {0x38, 80, 0, 0})
};



	/// Functions
	// Function /Script/Tweening.TweenManager.StopTweens
	// void StopTweens(TArray<int32_t> InTweenIds);                                                                             // [0xa254884] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.StopTween
	// bool StopTween(int32_t InTweenId);                                                                                       // [0xa2547f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.SetTweenTiming
	// bool SetTweenTiming(int32_t InTweenId, float InDuration, float InDelayAtBeginning, float InDelayAtEnd);                  // [0xa2546a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Tweening.TweenManager.ResetTweens
	// void ResetTweens(TArray<int32_t> InTweenIds, ETweenResetDestination InDestination);                                      // [0xa254594] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.ResetTween
	// bool ResetTween(int32_t InTweenId, ETweenResetDestination InDestination);                                                // [0xa2544d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.PlayTweenWithLooping
	// bool PlayTweenWithLooping(int32_t InTweenId, ETweenLoopType InLoopType, int32_t InLoopCount, ETweenPlayDirection InPlayDirection); // [0xa254288] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.PlayTweens
	// void PlayTweens(TArray<int32_t> InTweenIds, ETweenPlayDirection InPlayDirection);                                        // [0xa2543c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.PlayTween
	// bool PlayTween(int32_t InTweenId, ETweenPlayDirection InPlayDirection);                                                  // [0xa2541c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.KillTweens
	// void KillTweens(TArray<int32_t> InTweenIds);                                                                             // [0xa25406c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.KillTween
	// bool KillTween(int32_t InTweenId);                                                                                       // [0xa253fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.HasTween
	// bool HasTween(int32_t InTweenId);                                                                                        // [0xa253f54] Final|Native|Public|BlueprintCallable|BlueprintPure 
/// Class /Script/Tweening.TweenSequence
/// Size: 0x0068 (0x000028 - 0x000090)
class UTweenSequence : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FTweenSequenceEntry>)               SequenceEntries                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UTweenManager*)                            TweenManager                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<FTimerHandle>)                      TimerHandles                                                OFFSET(get<T>, {0x40, 16, 0, 0})
};



	/// Functions
	// Function /Script/Tweening.TweenSequence.Stop
	// void Stop();                                                                                                             // [0xa2547e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenSequence.Play
	// void Play(ETweenPlayDirection InPlayDirection);                                                                          // [0xa254148] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenSequence.BP_JoinTween
	// void BP_JoinTween(int32_t& TweenId, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, UTweenSequence*& OutSequence); // [0xa24d25c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Tweening.TweenSequence.BP_JoinSequence
	// void BP_JoinSequence(UTweenSequence*& SequenceToAppend, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, UTweenSequence*& OutSequence); // [0xa24cf90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Tweening.TweenSequence.BP_AppendTween
	// void BP_AppendTween(int32_t& TweenId, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, UTweenSequence*& OutSequence); // [0xa24c148] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Tweening.TweenSequence.BP_AppendSequence
	// void BP_AppendSequence(UTweenSequence*& SequenceToAppend, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, UTweenSequence*& OutSequence); // [0xa24be7c] Final|Native|Public|HasOutParms|BlueprintCallable 
/// Class /Script/Tweening.WidgetTweening
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetTweening : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/Tweening.TweenOptionalFloat
/// Size: 0x0008 (0x000000 - 0x000008)
class FTweenOptionalFloat : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bUseSpecificValue                                           OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/Tweening.TweenOptionalVector2D
/// Size: 0x0018 (0x000000 - 0x000018)
class FTweenOptionalVector2D : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector2D)                                 Value                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bUseSpecificValue                                           OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/Tweening.TweenOptionalVector
/// Size: 0x0020 (0x000000 - 0x000020)
class FTweenOptionalVector : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Value                                                       OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      bUseSpecificValue                                           OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/Tweening.TweenOptionalVector4
/// Size: 0x0030 (0x000000 - 0x000030)
class FTweenOptionalVector4 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector4)                                  Value                                                       OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(bool)                                      bUseSpecificValue                                           OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/Tweening.TweenOptionalLinearColor
/// Size: 0x0014 (0x000000 - 0x000014)
class FTweenOptionalLinearColor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FLinearColor)                              Value                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bUseSpecificValue                                           OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/Tweening.TweenOptionalRotator
/// Size: 0x0020 (0x000000 - 0x000020)
class FTweenOptionalRotator : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRotator)                                  Value                                                       OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      bUseSpecificValue                                           OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/Tweening.TweenDelayOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FTweenDelayOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     DelayAtBeginning                                            OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DelayAtEnd                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(ETweenInitializationPoint)                 InitializationPoint                                         OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/Tweening.TweenLoopOptions
/// Size: 0x0008 (0x000000 - 0x000008)
class FTweenLoopOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(ETweenLoopType)                            LoopType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   LoopCount                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Tweening.TweenSequenceEntry
/// Size: 0x0020 (0x000000 - 0x000020)
class FTweenSequenceEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UTweenSequence*)                           EntrySequence                                               OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Enum /Script/Tweening.ETweenSplineAlignmentOption
/// Size: 0x04
enum ETweenSplineAlignmentOption : uint8_t
{
	ETweenSplineAlignmentOption__NoAlignment0                                        = 0,
	ETweenSplineAlignmentOption__AlignWithSpline1                                    = 1,
	ETweenSplineAlignmentOption__AlignWithTween2                                     = 2,
	ETweenSplineAlignmentOption__ETweenSplineAlignmentOption_MAX3                    = 3
};

/// Enum /Script/Tweening.ETweenPlayDirection
/// Size: 0x03
enum ETweenPlayDirection : uint8_t
{
	ETweenPlayDirection__Forward0                                                    = 0,
	ETweenPlayDirection__Backward1                                                   = 1,
	ETweenPlayDirection__ETweenPlayDirection_MAX2                                    = 2
};

/// Enum /Script/Tweening.ETweenInitializationPoint
/// Size: 0x03
enum ETweenInitializationPoint : uint8_t
{
	ETweenInitializationPoint__AfterDelay0                                           = 0,
	ETweenInitializationPoint__OnPlay1                                               = 1,
	ETweenInitializationPoint__ETweenInitializationPoint_MAX2                        = 2
};

/// Enum /Script/Tweening.ETweenLoopType
/// Size: 0x04
enum ETweenLoopType : uint8_t
{
	ETweenLoopType__None0                                                            = 0,
	ETweenLoopType__Repeat1                                                          = 1,
	ETweenLoopType__PingPong2                                                        = 2,
	ETweenLoopType__ETweenLoopType_MAX3                                              = 3
};

/// Enum /Script/Tweening.ETweenResetDestination
/// Size: 0x03
enum ETweenResetDestination : uint8_t
{
	ETweenResetDestination__Beginning0                                               = 0,
	ETweenResetDestination__End1                                                     = 1,
	ETweenResetDestination__ETweenResetDestination_MAX2                              = 2
};

/// Enum /Script/Tweening.ETweenBuiltInEasing
/// Size: 0x32
enum ETweenBuiltInEasing : uint8_t
{
	ETweenBuiltInEasing__Linear0                                                     = 0,
	ETweenBuiltInEasing__SinIn1                                                      = 1,
	ETweenBuiltInEasing__SinOut2                                                     = 2,
	ETweenBuiltInEasing__SinInOut3                                                   = 3,
	ETweenBuiltInEasing__QuadIn4                                                     = 4,
	ETweenBuiltInEasing__QuadOut5                                                    = 5,
	ETweenBuiltInEasing__QuadInOut6                                                  = 6,
	ETweenBuiltInEasing__CubicIn7                                                    = 7,
	ETweenBuiltInEasing__CubicOut8                                                   = 8,
	ETweenBuiltInEasing__CubicInOut9                                                 = 9,
	ETweenBuiltInEasing__QuartIn10                                                   = 10,
	ETweenBuiltInEasing__QuartOut11                                                  = 11,
	ETweenBuiltInEasing__QuartInOut12                                                = 12,
	ETweenBuiltInEasing__QuintIn13                                                   = 13,
	ETweenBuiltInEasing__QuintOut14                                                  = 14,
	ETweenBuiltInEasing__QuintInOut15                                                = 15,
	ETweenBuiltInEasing__ExpoIn16                                                    = 16,
	ETweenBuiltInEasing__ExpoOut17                                                   = 17,
	ETweenBuiltInEasing__ExpoInOut18                                                 = 18,
	ETweenBuiltInEasing__CircIn19                                                    = 19,
	ETweenBuiltInEasing__CircOut20                                                   = 20,
	ETweenBuiltInEasing__CircInOut21                                                 = 21,
	ETweenBuiltInEasing__BackIn22                                                    = 22,
	ETweenBuiltInEasing__BackOut23                                                   = 23,
	ETweenBuiltInEasing__BackInOut24                                                 = 24,
	ETweenBuiltInEasing__ElasticIn25                                                 = 25,
	ETweenBuiltInEasing__ElasticOut26                                                = 26,
	ETweenBuiltInEasing__ElasticInOut27                                              = 27,
	ETweenBuiltInEasing__BounceIn28                                                  = 28,
	ETweenBuiltInEasing__BounceOut29                                                 = 29,
	ETweenBuiltInEasing__BounceInOut30                                               = 30,
	ETweenBuiltInEasing__ETweenBuiltInEasing_MAX31                                   = 31
};

