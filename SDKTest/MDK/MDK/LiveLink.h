
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LiveLinkInterface
/// dependency: TimeManagement

/// Class /Script/LiveLink.LiveLinkBasicFrameInterpolationProcessor
/// Size: 0x0018 (0x000028 - 0x000040)
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bInterpolatePropertyValues                                  ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkAnimationFrameInterpolationProcessor
/// Size: 0x0010 (0x000040 - 0x000050)
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/LiveLink.LiveLinkAnimationVirtualSubject
/// Size: 0x0008 (0x000158 - 0x000160)
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	DMember(bool)                                      bAppendSubjectNameToBones                                   ___ OFFSET(get<bool>, {0x159, 1, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLink.LiveLinkComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class ULiveLinkComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FMulticastInlineDelegate)                  OnLiveLinkUpdated                                           ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkDrivenComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class ULiveLinkDrivenComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FLiveLinkSubjectName)                      SubjectName                                                 ___ OFFSET(get<T>, {0xA0, 4, 0, 0})
	SMember(FName)                                     ActorTransformBone                                          ___ OFFSET(get<T>, {0xA4, 4, 0, 0})
	DMember(bool)                                      bModifyActorTransform                                       ___ OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bSetRelativeLocation                                        ___ OFFSET(get<bool>, {0xA9, 1, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkMessageBusFinder
/// Size: 0x0058 (0x000028 - 0x000080)
class ULiveLinkMessageBusFinder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/LiveLink.LiveLinkPreset
/// Size: 0x0028 (0x000028 - 0x000050)
class ULiveLinkPreset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FLiveLinkSourcePreset>)             Sources                                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FLiveLinkSubjectPreset>)            Subjects                                                    ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkUserSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class ULiveLinkUserSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FDirectoryPath)                            PresetSaveDir                                               ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkSettings
/// Size: 0x0090 (0x000028 - 0x0000B8)
class ULiveLinkSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<FLiveLinkRoleProjectSetting>)       DefaultRoleSettings                                         ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UClass*)                                   FrameInterpolationProcessor                                 ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TWeakObjectPtr<ULiveLinkPreset*>)          DefaultLiveLinkPreset                                       ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	DMember(float)                                     ClockOffsetCorrectionStep                                   ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	CMember(ELiveLinkSourceMode)                       DefaultMessageBusSourceMode                                 ___ OFFSET(get<T>, {0x64, 1, 0, 0})
	DMember(double)                                    MessageBusPingRequestFrequency                              ___ OFFSET(get<double>, {0x68, 8, 0, 0})
	DMember(double)                                    MessageBusHeartbeatFrequency                                ___ OFFSET(get<double>, {0x70, 8, 0, 0})
	DMember(double)                                    MessageBusHeartbeatTimeout                                  ___ OFFSET(get<double>, {0x78, 8, 0, 0})
	DMember(double)                                    MessageBusTimeBeforeRemovingInactiveSource                  ___ OFFSET(get<double>, {0x80, 8, 0, 0})
	DMember(double)                                    TimeWithoutFrameToBeConsiderAsInvalid                       ___ OFFSET(get<double>, {0x88, 8, 0, 0})
	SMember(FLinearColor)                              ValidColor                                                  ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FLinearColor)                              InvalidColor                                                ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(char)                                      TextSizeSource                                              ___ OFFSET(get<char>, {0xB0, 1, 0, 0})
	DMember(char)                                      TextSizeSubject                                             ___ OFFSET(get<char>, {0xB1, 1, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkTimecodeProvider
/// Size: 0x0090 (0x000030 - 0x0000C0)
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FLiveLinkSubjectKey)                       SubjectKey                                                  ___ OFFSET(get<T>, {0x30, 20, 0, 0})
	CMember(ELiveLinkTimecodeProviderEvaluationType)   Evaluation                                                  ___ OFFSET(get<T>, {0x44, 4, 0, 0})
	DMember(bool)                                      bOverrideFrameRate                                          ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FFrameRate)                                OverrideFrameRate                                           ___ OFFSET(get<T>, {0x4C, 8, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  ___ OFFSET(get<int32_t>, {0x54, 4, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkTimeSynchronizationSource
/// Size: 0x0050 (0x000030 - 0x000080)
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FLiveLinkSubjectName)                      SubjectName                                                 ___ OFFSET(get<T>, {0x30, 4, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkVirtualSubjectSourceSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     SourceName                                                  ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor
/// Size: 0x0048 (0x000028 - 0x000070)
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(ELiveLinkAxis)                             FrontAxis                                                   ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(ELiveLinkAxis)                             RightAxis                                                   ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(ELiveLinkAxis)                             UpAxis                                                      ___ OFFSET(get<T>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bUseOffsetPosition                                          ___ OFFSET(get<bool>, {0x2B, 1, 0, 0})
	DMember(bool)                                      bUseOffsetOrientation                                       ___ OFFSET(get<bool>, {0x2C, 1, 0, 0})
	SMember(FVector)                                   OffsetPosition                                              ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FRotator)                                  OffsetOrientation                                           ___ OFFSET(get<T>, {0x48, 24, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
/// Size: 0x0000 (0x000070 - 0x000070)
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/LiveLink.LiveLinkAnimationRoleToTransform
/// Size: 0x0018 (0x000028 - 0x000040)
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     BoneName                                                    ___ OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkBlueprintVirtualSubject
/// Size: 0x0028 (0x000158 - 0x000180)
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
};

/// Struct /Script/LiveLink.LiveLinkRetargetAssetReference
/// Size: 0x0001 (0x000000 - 0x000001)
class FLiveLinkRetargetAssetReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/LiveLink.ProviderPollResult
/// Size: 0x0040 (0x000000 - 0x000040)
class FProviderPollResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   MachineName                                                 ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(double)                                    MachineTimeOffset                                           ___ OFFSET(get<double>, {0x30, 8, 0, 0})
	DMember(bool)                                      bIsValidProvider                                            ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/LiveLink.LiveLinkRoleProjectSetting
/// Size: 0x0028 (0x000000 - 0x000028)
class FLiveLinkRoleProjectSetting : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UClass*)                                   Role                                                        ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   SettingClass                                                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UClass*)                                   FrameInterpolationProcessor                                 ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TArray<UClass*>)                           FramePreProcessors                                          ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Enum /Script/LiveLink.ELiveLinkTimecodeProviderEvaluationType
/// Size: 0x04
enum ELiveLinkTimecodeProviderEvaluationType : uint8_t
{
	ELiveLinkTimecodeProviderEvaluationType__Lerp0                                   = 0,
	ELiveLinkTimecodeProviderEvaluationType__Nearest1                                = 1,
	ELiveLinkTimecodeProviderEvaluationType__Latest2                                 = 2,
	ELiveLinkTimecodeProviderEvaluationType__ELiveLinkTimecodeProviderEvaluationType_MAX3 = 3
};

/// Enum /Script/LiveLink.ELiveLinkAxis
/// Size: 0x07
enum ELiveLinkAxis : uint8_t
{
	ELiveLinkAxis__X0                                                                = 0,
	ELiveLinkAxis__Y1                                                                = 1,
	ELiveLinkAxis__Z2                                                                = 2,
	ELiveLinkAxis__XNeg3                                                             = 3,
	ELiveLinkAxis__YNeg4                                                             = 4,
	ELiveLinkAxis__ZNeg5                                                             = 5,
	ELiveLinkAxis__ELiveLinkAxis_MAX6                                                = 6
};

