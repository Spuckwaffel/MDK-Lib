
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/EpicCMSUIFramework.EpicCMSImage
/// Size: 0x00F0 (0x0003B0 - 0x0004A0)
class UEpicCMSImage : public UCommonLazyImage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	SMember(FMulticastInlineDelegate)                  OnImageLoadingComplete                                      OFFSET(get<T>, {0x3B0, 16, 0, 0})
	DMember(bool)                                      bMatchImageSize                                             OFFSET(get<bool>, {0x3C0, 1, 0, 0})
	SMember(FSlateBrush)                               LoadingFailFallback                                         OFFSET(get<T>, {0x3D0, 192, 0, 0})
	CMember(UTexture2D*)                               ExternalMedia                                               OFFSET(get<T>, {0x490, 8, 0, 0})
	DMember(bool)                                      bDownloadingExternalMedia                                   OFFSET(get<bool>, {0x498, 1, 0, 0})


	/// Functions
	// Function /Script/EpicCMSUIFramework.EpicCMSImage.SetMediaURL
	// void SetMediaURL(FString MediaUrl);                                                                                      // [0x6c7b760] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EpicCMSUIFramework.EpicCMSLayoutBase
/// Size: 0x0068 (0x0002A8 - 0x000310)
class UEpicCMSLayoutBase : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(TArray<FSlotDescription>)                  CarouselSlotDescriptions                                    OFFSET(get<T>, {0x2A8, 16, 0, 0})
	CMember(UClass*)                                   CarouselClass                                               OFFSET(get<T>, {0x2B8, 8, 0, 0})
};

/// Class /Script/EpicCMSUIFramework.EpicCMSManager
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UEpicCMSManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/EpicCMSUIFramework.EpicCMSScreenBase
/// Size: 0x0078 (0x000520 - 0x000598)
class UEpicCMSScreenBase : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1432;

public:
	SMember(FString)                                   TileSetFieldName                                            OFFSET(get<T>, {0x520, 16, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               TileTypeToTileClassDataTable                                OFFSET(get<T>, {0x530, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   LayoutErrorClass                                            OFFSET(get<T>, {0x550, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               LayoutTypeToLayoutClassDataTable                            OFFSET(get<T>, {0x570, 32, 0, 0})
};

/// Class /Script/EpicCMSUIFramework.EpicCMSSimpleMessage
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class UEpicCMSSimpleMessage : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(UCommonTextBlock*)                         TitleText                                                   OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BodyText                                                    OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UEpicCMSImage*)                            PrimaryImage                                                OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Script/EpicCMSUIFramework.EpicCMSTileBase
/// Size: 0x0110 (0x0014C0 - 0x0015D0)
class UEpicCMSTileBase : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5584;

public:
	CMember(UClass*)                                   DefaultTitleTextStyle                                       OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UClass*)                                   FeaturedTitleTextStyle                                      OFFSET(get<T>, {0x14D0, 8, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(get<T>, {0x14D8, 24, 0, 0})
	SMember(FString)                                   Link                                                        OFFSET(get<T>, {0x14F0, 16, 0, 0})
	DMember(bool)                                      bDownloadingExternalMedia                                   OFFSET(get<bool>, {0x1500, 1, 0, 0})
	DMember(bool)                                      bRefreshingMcpCatalog                                       OFFSET(get<bool>, {0x1501, 1, 0, 0})
	CMember(UTexture2D*)                               ExternalMedia                                               OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UCommonLazyImage*)                         LazyImage_Icon                                              OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TitleTextBlock                                              OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UCommonTextBlock*)                         SubtitleTextBlock                                           OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UCommonTextBlock*)                         EyebrowTextBlock                                            OFFSET(get<T>, {0x1540, 8, 0, 0})


	/// Functions
	// Function /Script/EpicCMSUIFramework.EpicCMSTileBase.Launch
	// void Launch();                                                                                                           // [0x6c7b6a0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/EpicCMSUIFramework.EpicCMSTileCarousel
/// Size: 0x0050 (0x0002A8 - 0x0002F8)
class UEpicCMSTileCarousel : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FSlateSound)                               PreviousButtonSound                                         OFFSET(get<T>, {0x2A8, 24, 0, 0})
	SMember(FSlateSound)                               NextButtonSound                                             OFFSET(get<T>, {0x2C0, 24, 0, 0})
	CMember(UCommonWidgetCarousel*)                    Carousel                                                    OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UWidget*)                                  NextPageButton                                              OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UWidget*)                                  PreviousPageButton                                          OFFSET(get<T>, {0x2E8, 8, 0, 0})
	DMember(bool)                                      bShouldShowNavigationOnlyOnHover                            OFFSET(get<bool>, {0x2F0, 1, 0, 0})
	DMember(bool)                                      bInputActionsForPaging                                      OFFSET(get<bool>, {0x2F1, 1, 0, 0})
	DMember(bool)                                      bIsShowingNavigation                                        OFFSET(get<bool>, {0x2F2, 1, 0, 0})


	/// Functions
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
	// void SetCurrentPageByIndex(int32_t PageIndex);                                                                           // [0x6c7b6dc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
	// void PreviousPage();                                                                                                     // [0x6c7b6c8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
	// void NextPage();                                                                                                         // [0x6c7b6b4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
	// void NavigationVisibilityChanged(bool bShowNavigation);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
	// void HandleTilePageAdded(UWidget* TileWidget);                                                                           // [0x6c7b61c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
	// int32_t GetCurrentPageIndex();                                                                                           // [0x6c7b5f4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling
	// void BeginAutoScrolling();                                                                                               // [0x6c7b5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage
	// void AddTilePage(UWidget* TilePageWidget);                                                                               // [0x6c7b470] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/EpicCMSUIFramework.EpicCMSTileTypeMapping
/// Size: 0x0020 (0x000008 - 0x000028)
class FEpicCMSTileTypeMapping : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UClass*>)                   TileClass                                                   OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/EpicCMSUIFramework.SlotDescription
/// Size: 0x0010 (0x000000 - 0x000010)
class FSlotDescription : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     SlotName                                                    OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ColumnCount                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   RowCount                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bUseFeaturedTextStyle                                       OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bEnableAutoScroll                                           OFFSET(get<bool>, {0xD, 1, 0, 0})
};

/// Struct /Script/EpicCMSUIFramework.EpicCMSPage
/// Size: 0x0070 (0x000000 - 0x000070)
class FEpicCMSPage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/EpicCMSUIFramework.EpicCMSLayoutTypeMapping
/// Size: 0x0020 (0x000008 - 0x000028)
class FEpicCMSLayoutTypeMapping : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UClass*>)                   LayoutType                                                  OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/EpicCMSUIFramework.TileDefinition
/// Size: 0x0088 (0x000000 - 0x000088)
class FTileDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   TypeString                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Subtitle                                                    OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   Eyebrow                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Link                                                        OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   GroupId                                                     OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FDateTime)                                 Countdown                                                   OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(EDateType)                                 CountdownType                                               OFFSET(get<T>, {0x68, 1, 0, 0})
	SMember(FString)                                   MediaUrl                                                    OFFSET(get<T>, {0x70, 16, 0, 0})
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

