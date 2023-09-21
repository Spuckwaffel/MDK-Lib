
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/PictureInPictureDescriptors.PictureInPicturePartnerDataAsset
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UPictureInPicturePartnerDataAsset : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   PartnerName                                                 ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UImage*)                                   ClientImage                                                 ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(int32_t)                                   MediaHeight                                                 ___ OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   MediaWidth                                                  ___ OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	CMember(UClass*)                                   MetadataOverlayClass                                        ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TArray<FPictureInPictureActionConfig>)     Actions                                                     ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FPIPVideoPlayerAssetConfig)                AssetConfig                                                 ___ OFFSET(get<T>, {0x68, 136, 0, 0})
};

/// Class /Script/PictureInPictureDescriptors.PictureInPictureActionData
/// Size: 0x0148 (0x000028 - 0x000170)
class UPictureInPictureActionData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FString)                                   PartnerName                                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FSlateBrush)                               ActionBrush                                                 ___ OFFSET(get<T>, {0x40, 192, 0, 0})
	SMember(FText)                                     ActionText                                                  ___ OFFSET(get<T>, {0x100, 24, 0, 0})
	CMember(PictureInPictureAction)                    ActionType                                                  ___ OFFSET(get<T>, {0x118, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  ActionEvent                                                 ___ OFFSET(get<T>, {0x120, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  ActionFiredEvent                                            ___ OFFSET(get<T>, {0x130, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  CallbackEvent                                               ___ OFFSET(get<T>, {0x158, 16, 0, 0})
};

/// Class /Script/PictureInPictureDescriptors.PictureInPictureSourceActionData
/// Size: 0x0020 (0x000170 - 0x000190)
class UPictureInPictureSourceActionData : public UPictureInPictureActionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FString)                                   SourceName                                                  ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SourceActionEvent                                           ___ OFFSET(get<T>, {0x178, 16, 0, 0})
};

/// Class /Script/PictureInPictureDescriptors.PictureInPictureAnalyticsManager
/// Size: 0x0050 (0x000028 - 0x000078)
class UPictureInPictureAnalyticsManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FString, FPictureInPictureAnalyticsPayload>) PartnerAnalytics                                     ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Struct /Script/PictureInPictureDescriptors.PiPPartnerSource
/// Size: 0x01E8 (0x000000 - 0x0001E8)
class FPiPPartnerSource : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	CMember(PictureInPictureSourceType)                SourceType                                                  ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FDateTime)                                 StartTime                                                   ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	SMember(FDateTime)                                 EndTime                                                     ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FFortMediaEventsStreamAssets)              AssetConfig                                                 ___ OFFSET(get<T>, {0x70, 96, 0, 0})
	SMember(FString)                                   EventIconUrl                                                ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(UEpicCMSImage*)                            CMSImage                                                    ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(UPictureInPictureSourceActionData*)        ActionData                                                  ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(TSet<FString>)                             PlatformDenylist                                            ___ OFFSET(get<T>, {0xF0, 80, 0, 0})
	CMember(TSet<FString>)                             GameplayTagDenylist                                         ___ OFFSET(get<T>, {0x140, 80, 0, 0})
	CMember(TSet<FString>)                             GameplayTagAllowlist                                        ___ OFFSET(get<T>, {0x190, 80, 0, 0})
	DMember(bool)                                      bManual                                                     ___ OFFSET(get<bool>, {0x1E0, 1, 0, 0})
};

/// Struct /Script/PictureInPictureDescriptors.PIPVideoPlayerAssetConfig
/// Size: 0x0088 (0x000000 - 0x000088)
class FPIPVideoPlayerAssetConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(UMediaTexture*)                            VideoTexture                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UMediaPlayer*)                             VideoPlayer                                                 ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UMaterialInterface*)                       VideoMaterial                                               ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UMaterialInterface*)                       ThumbnailMaterial                                           ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FVector2D)                                 LoadingScreenSize                                           ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FVector2D)                                 LoadingScreenPosition                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UFortStreamMediaSource*)                   MediaSource                                                 ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UMediaSoundComponent*)                     SoundComponent                                              ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(USoundClass*)                              SoundClass                                                  ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(USoundMix*)                                ActiveSoundMix                                              ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(USoundSubmixBase*)                         DefaultSubmix                                               ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(USoundSubmixBase*)                         LicensedSubmix                                              ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UFortMediaSubtitlesPlayer*)                SubtitlePlayer                                              ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(ULocalizedOverlays*)                       SubtitleOverlays                                            ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(USubtitleDisplayOptions*)                  SubtitleDisplayOptions                                      ___ OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Struct /Script/PictureInPictureDescriptors.PIPVideoPlayerConfig
/// Size: 0x0048 (0x000000 - 0x000048)
class FPIPVideoPlayerConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   MimeType                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   BlurlVUID                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bLoopEnabled                                                ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bAutoPlay                                                   ___ OFFSET(get<bool>, {0x21, 1, 0, 0})
	SMember(FString)                                   VideoURL                                                    ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bShareBlocked                                               ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FDateTime)                                 EventStartTime                                              ___ OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/PictureInPictureDescriptors.PictureInPictureActionConfig
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FPictureInPictureActionConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(PictureInPictureAction)                    ActionType                                                  ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FSlateBrush)                               ActionBrush                                                 ___ OFFSET(get<T>, {0x10, 192, 0, 0})
	SMember(FText)                                     ActionText                                                  ___ OFFSET(get<T>, {0xD0, 24, 0, 0})
};

/// Struct /Script/PictureInPictureDescriptors.PictureInPictureAnalyticsPayload
/// Size: 0x0098 (0x000000 - 0x000098)
class FPictureInPictureAnalyticsPayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TMap<PictureInPictureAction, int32_t>)     PartnerActionTally                                          ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Enum /Script/PictureInPictureDescriptors.PictureInPictureAction
/// Size: 0x13
enum PictureInPictureAction : uint8_t
{
	PictureInPictureAction__NEXT0                                                    = 0,
	PictureInPictureAction__PREVIOUS1                                                = 1,
	PictureInPictureAction__PLAY2                                                    = 2,
	PictureInPictureAction__PAUSE3                                                   = 3,
	PictureInPictureAction__PLAYPAUSE4                                               = 4,
	PictureInPictureAction__LIKE5                                                    = 5,
	PictureInPictureAction__REPORT6                                                  = 6,
	PictureInPictureAction__EXIT7                                                    = 7,
	PictureInPictureAction__UNLIKE8                                                  = 8,
	PictureInPictureAction__TOGGLELIKE9                                              = 9,
	PictureInPictureAction__TOGGLEFULLSCREEN10                                       = 10,
	PictureInPictureAction__Count11                                                  = 11,
	PictureInPictureAction__PictureInPictureAction_MAX12                             = 12
};

/// Enum /Script/PictureInPictureDescriptors.PictureInPictureSourceType
/// Size: 0x05
enum PictureInPictureSourceType : uint8_t
{
	PictureInPictureSourceType__NONE0                                                = 0,
	PictureInPictureSourceType__URL1                                                 = 1,
	PictureInPictureSourceType__BLURL2                                               = 2,
	PictureInPictureSourceType__EXTERNAL_ASSETS3                                     = 3,
	PictureInPictureSourceType__PictureInPictureSourceType_MAX4                      = 4
};

