
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameFeatures
/// dependency: UMG

/// Class /Script/StyleSheets.GameFeatureAction_ActivateStyleTheme
/// Size: 0x0008 (0x000028 - 0x000030)
class UGameFeatureAction_ActivateStyleTheme : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     ThemeName                                                   ___ OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Class /Script/StyleSheets.GameFeatureAction_RegisterStyleThemes
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameFeatureAction_RegisterStyleThemes : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UStyleThemeConfig*>)        StyleThemeConfig                                            ___ OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Class /Script/StyleSheets.PropertyTweenContext
/// Size: 0x0008 (0x000028 - 0x000030)
class UPropertyTweenContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     PropertyPath                                                ___ OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Class /Script/StyleSheets.StyleAnimationProvider
/// Size: 0x0050 (0x000028 - 0x000078)
class UStyleAnimationProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/StyleSheets.StyleProvider
/// Size: 0x01C8 (0x000028 - 0x0001F0)
class UStyleProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(TWeakObjectPtr<UStyleRuleTree*>)           StyleRuleTree                                               ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TWeakObjectPtr<UStyleAnimationProvider*>)  StyleAnimationProvider                                      ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/StyleSheets.StyleRule
/// Size: 0x0138 (0x000028 - 0x000160)
class UStyleRule : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(TArray<UStyleRule*>)                       Children                                                    ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FStyleSelectorItem)                        StyleSelectorItem                                           ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TWeakObjectPtr<UStyleRule*>)               Parent                                                      ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FStyleClass)                               style                                                       ___ OFFSET(get<T>, {0x50, 264, 0, 0})
};

/// Class /Script/StyleSheets.StyleRuleTree
/// Size: 0x0040 (0x000028 - 0x000068)
class UStyleRuleTree : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/StyleSheets.StyleSheet
/// Size: 0x0010 (0x000028 - 0x000038)
class UStyleSheet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UStyleRule*>)                       StyleRules                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/StyleSheets.StyleSheetCollection
/// Size: 0x0010 (0x000030 - 0x000040)
class UStyleSheetCollection : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<UStyleSheet*>)                      StyleSheets                                                 ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/StyleSheets.StyleTagFinder
/// Size: 0x0000 (0x000028 - 0x000028)
class UStyleTagFinder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/StyleSheets.StyleThemeConfig
/// Size: 0x0010 (0x000030 - 0x000040)
class UStyleThemeConfig : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FStyleThemeConfigEntry>)            Entries                                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/StyleSheets.StyleThemeProvider
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UStyleThemeProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<UStyleRuleTree*>)           StyleRuleTree                                               ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TMap<TWeakObjectPtr, UStyleThemeConfig*>)  ThemeConfigSourceMap                                        ___ OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TSet<FName>)                               ActiveThemeNames                                            ___ OFFSET(get<T>, {0x80, 80, 0, 0})
};

/// Class /Script/StyleSheets.WidgetBlueprintGeneratedClassExtension_StyleClass
/// Size: 0x0050 (0x000028 - 0x000078)
class UWidgetBlueprintGeneratedClassExtension_StyleClass : public UWidgetBlueprintGeneratedClassExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FName, FStyleTag>)                    WidgetStyleTagMap                                           ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/StyleSheets.StyleSheetsSettings
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UStyleSheetsSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<UClass*>)                           AllowedWidgetClasses                                        ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FWidgetTypeEntry>)                  WidgetTypes                                                 ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TMap<UClass*, FGameplayTag>)               WidgetTypeMap                                               ___ OFFSET(get<T>, {0x48, 80, 0, 0})
	CMember(TWeakObjectPtr<UStyleThemeConfig*>)        StyleThemeConfig                                            ___ OFFSET(get<T>, {0x98, 32, 0, 0})
};

/// Class /Script/StyleSheets.StyleSheetsSubsystem
/// Size: 0x0030 (0x000030 - 0x000060)
class UStyleSheetsSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UStyleTagFinder*)                          EditorStyleTagFinder                                        ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UStyleRuleTree*)                           StyleRuleTree                                               ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UStyleAnimationProvider*)                  StyleAnimationProvider                                      ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UStyleProvider*)                           StyleProvider                                               ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UStyleThemeProvider*)                      StyleThemeProvider                                          ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(UStyleTagFinder*)                          StyleTagFinder                                              ___ OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Struct /Script/StyleSheets.WidgetProperty
/// Size: 0x000C (0x000000 - 0x00000C)
class FWidgetProperty : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<UWidget*>)                  Widget                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     PropertyPath                                                ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/StyleSheets.StyleAnimationData
/// Size: 0x000C (0x000000 - 0x00000C)
class FStyleAnimationData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Delay                                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(ETweenBuiltInEasing)                       Easing                                                      ___ OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/StyleSheets.StyleClass
/// Size: 0x0108 (0x000000 - 0x000108)
class FStyleClass : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FInstancedPropertyBag)                     StylePropertyBag                                            ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FName, FStyleAnimationData>)          PropertyAnimations                                          ___ OFFSET(get<T>, {0x10, 80, 0, 0})
	CMember(TMap<FName, FInstancedPropertyBag>)        MaterialParameters                                          ___ OFFSET(get<T>, {0x60, 80, 0, 0})
};

/// Struct /Script/StyleSheets.StylePropertyStore
/// Size: 0x0050 (0x000000 - 0x000050)
class FStylePropertyStore : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<UWidget*, FInstancedPropertyBag>)     WidgetToPropertyBagMap                                      ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/StyleSheets.StyleRulePreviewInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FStyleRulePreviewInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UClass*)                                   PreviewWidgetClass                                          ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FInstancedPropertyBag)                     PreviewPropertyBag                                          ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/StyleSheets.StyleSelectorItem
/// Size: 0x0010 (0x000000 - 0x000010)
class FStyleSelectorItem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGameplayTag>)                      Targets                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/StyleSheets.StyleTag
/// Size: 0x0000 (0x000010 - 0x000010)
class FStyleTag : public FStyleSelectorItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/StyleSheets.StyleThemeConfigEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FStyleThemeConfigEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     ThemeName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UStyleSheetCollection*>)    Theme                                                       ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(UStyleSheetCollection*)                    ThemeInstance                                               ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/StyleSheets.WidgetTypeEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FWidgetTypeEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              WidgetType                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<UClass*>)                           WidgetClasses                                               ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

