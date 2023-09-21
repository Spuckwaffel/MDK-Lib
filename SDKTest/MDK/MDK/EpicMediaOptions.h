
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/EpicMediaOptions.EpicMediaOptions
/// Size: 0x0108 (0x000000 - 0x000108)
class FEpicMediaOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(int32_t)                                   FrameRate                                                   ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxResolutionForMediaStreaming                              ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxElectraVerticalResolutionOf60fpsVideos                   ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaxElectraVerticalResolutionOfWindowsSWD                    ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bElectraLiveUseConservativePresentationOffset               ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bElectraUseDedicatedMediaSegmentDownloadThreads             ___ OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(double)                                    ElectraLivePresentationOffset                               ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    ElectraLiveAudioPresentationOffset                          ___ OFFSET(get<double>, {0x20, 8, 0, 0})
	DMember(bool)                                      bDisableBlastURLStreamSource                                ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bIsCN                                                       ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
	CMember(TArray<FString>)                           VideoEVMap                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<float>)                             CDNDistribution                                             ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FString>)                           VODHostNames                                                ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FString>)                           VODHostNamesCN                                              ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FString>)                           LiveHostNames                                               ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FString>)                           LiveHostNamesCN                                             ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FString>)                           VODHostNamesDev                                             ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FString>)                           LiveHostNamesDev                                            ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FString>)                           VODHostNamesHF                                              ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FString>)                           LiveHostNamesHF                                             ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FString>)                           VODHostNamesCNHF                                            ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FString>)                           LiveHostNamesCNHF                                           ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	DMember(bool)                                      bUseQuicksilverEntryPoint                                   ___ OFFSET(get<bool>, {0xF0, 1, 0, 0})
};

