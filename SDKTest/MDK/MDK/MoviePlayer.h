
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/MoviePlayer.MoviePlayerSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UMoviePlayerSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bWaitForMoviesToComplete                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bMoviesAreSkippable                                         OFFSET(get<bool>, {0x29, 1, 0, 0})
	CMember(TArray<FString>)                           StartupMovies                                               OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Enum /Script/MoviePlayer.EMoviePlaybackType
/// Size: 0x04
enum EMoviePlaybackType : uint8_t
{
	MT_Normal0                                                                       = 0,
	MT_Looped1                                                                       = 1,
	MT_LoadingLoop2                                                                  = 2,
	MT_MAX3                                                                          = 3
};

