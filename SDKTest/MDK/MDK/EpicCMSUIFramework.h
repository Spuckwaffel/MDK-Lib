
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/EpicCMSUIFramework.EpicCMSImage
/// Size: 0x0030 (0x000220 - 0x000250)
class UEpicCMSImage : public UCommonLazyImage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(UMulticastDelegate)                        OnImageLoadingComplete                                      OFFSET(get<T>, {0x220, 16, 0, 0})
	DMember(bool)                                      bDownloadingExternalMedia                                   OFFSET(get<bool>, {0x240, 1, 0, 0})
};

/// Class /Script/EpicCMSUIFramework.EpicCMSLayoutBase
/// Size: 0x0068 (0x000208 - 0x000270)
class UEpicCMSLayoutBase : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(TArray<FSlotDescription>)                  CarouselSlotDescriptions                                    OFFSET(get<T>, {0x208, 16, 0, 0})
	CMember(UClass*)                                   CarouselClass                                               OFFSET(get<T>, {0x218, 8, 0, 0})
};

/// Class /Script/EpicCMSUIFramework.EpicCMSManager
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UEpicCMSManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   CmsEndpointOverride                                         OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(bool)                                      bRefreshing                                                 OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/EpicCMSUIFramework.EpicCMSScreenBase
/// Size: 0x0090 (0x0003C0 - 0x000450)
class UEpicCMSScreenBase : public UCommonActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FString)                                   TileSetFieldName                                            OFFSET(getStruct<T>, {0x3C0, 16, 0, 0})
	CMember(UDataTable*)                               TileTypeToTileClassDataTable                                OFFSET(get<T>, {0x3D0, 40, 0, 0})
	CMember(UClass*)                                   LayoutErrorClass                                            OFFSET(get<T>, {0x3F8, 40, 0, 0})
	CMember(UDataTable*)                               LayoutTypeToLayoutClassDataTable                            OFFSET(get<T>, {0x420, 40, 0, 0})
};

/// Class /Script/EpicCMSUIFramework.EpicCMSTileBase
/// Size: 0x0118 (0x000800 - 0x000918)
class UEpicCMSTileBase : public UCommonButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2328;

public:
	CMember(UClass*)                                   DefaultTitleTextStyle                                       OFFSET(get<T>, {0x808, 8, 0, 0})
	CMember(UClass*)                                   FeaturedTitleTextStyle                                      OFFSET(get<T>, {0x810, 8, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x818, 24, 0, 0})
	SMember(FString)                                   Link                                                        OFFSET(getStruct<T>, {0x830, 16, 0, 0})
	DMember(bool)                                      bDownloadingExternalMedia                                   OFFSET(get<bool>, {0x840, 1, 0, 0})
	DMember(bool)                                      bRefreshingMcpCatalog                                       OFFSET(get<bool>, {0x841, 1, 0, 0})
	CMember(UCommonLazyImage*)                         LazyImage_Icon                                              OFFSET(get<T>, {0x8F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TitleTextBlock                                              OFFSET(get<T>, {0x900, 8, 0, 0})
	CMember(UCommonTextBlock*)                         SubtitleTextBlock                                           OFFSET(get<T>, {0x908, 8, 0, 0})
	CMember(UCommonTextBlock*)                         EyebrowTextBlock                                            OFFSET(get<T>, {0x910, 8, 0, 0})


	/// Functions
	// Function /Script/EpicCMSUIFramework.EpicCMSTileBase.Launch
	// void Launch();                                                                                                           // [0x324370] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileBase.DynamicHandleIconLoadingStateChanged
	// void DynamicHandleIconLoadingStateChanged(bool bIsLoading);                                                              // [0x3242b0] Final|Native|Private 
};

/// Class /Script/EpicCMSUIFramework.EpicCMSTileCarousel
/// Size: 0x0050 (0x000208 - 0x000258)
class UEpicCMSTileCarousel : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	SMember(FSlateSound)                               PreviousButtonSound                                         OFFSET(getStruct<T>, {0x208, 24, 0, 0})
	SMember(FSlateSound)                               NextButtonSound                                             OFFSET(getStruct<T>, {0x220, 24, 0, 0})
	CMember(UCommonWidgetCarousel*)                    Carousel                                                    OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(UWidget*)                                  NextPageButton                                              OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(UWidget*)                                  PreviousPageButton                                          OFFSET(get<T>, {0x248, 8, 0, 0})
	DMember(bool)                                      bShouldShowNavigationOnlyOnHover                            OFFSET(get<bool>, {0x250, 1, 0, 0})
	DMember(bool)                                      bIsShowingNavigation                                        OFFSET(get<bool>, {0x251, 1, 0, 0})


	/// Functions
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
	// void SetCurrentPageByIndex(int32_t PageIndex);                                                                           // [0x3243d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
	// void PreviousPage();                                                                                                     // [0x3243b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
	// void NextPage();                                                                                                         // [0x324390] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
	// void NavigationVisibilityChanged(bool bShowNavigation);                                                                  // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
	// void HandleTilePageAdded(UWidget* TileWidget);                                                                           // [0x2bf9be0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
	// int32_t GetCurrentPageIndex();                                                                                           // [0x324340] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/EpicCMSUIFramework.SlotDescription
/// Size: 0x0018 (0x000000 - 0x000018)
class FSlotDescription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     SlotName                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   ColumnCount                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   RowCount                                                    OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bUseFeaturedTextStyle                                       OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bEnableAutoScroll                                           OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/EpicCMSUIFramework.EpicCMSTileTypeMapping
/// Size: 0x0028 (0x000008 - 0x000030)
class FEpicCMSTileTypeMapping : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UClass*)                                   TileClass                                                   OFFSET(get<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/EpicCMSUIFramework.EpicCMSLayoutTypeMapping
/// Size: 0x0028 (0x000008 - 0x000030)
class FEpicCMSLayoutTypeMapping : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UClass*)                                   LayoutType                                                  OFFSET(get<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/EpicCMSUIFramework.TileDefinition
/// Size: 0x0088 (0x000000 - 0x000088)
class FTileDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   TypeString                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Subtitle                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   Eyebrow                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Link                                                        OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   GroupID                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FDateTime)                                 Countdown                                                   OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	CMember(EDateType)                                 CountdownType                                               OFFSET(get<T>, {0x68, 1, 0, 0})
	SMember(FString)                                   MediaUrl                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      IsVisible                                                   OFFSET(get<bool>, {0x80, 1, 0, 0})
};

/// Enum /Script/EpicCMSUIFramework.EDateType
/// Size: 0x04
enum EDateType : uint8_t
{
	EDateType__None0                                                                 = 0,
	EDateType__Coming1                                                               = 1,
	EDateType__Ending2                                                               = 2,
	EDateType__EDateType_MAX3                                                        = 3
};

