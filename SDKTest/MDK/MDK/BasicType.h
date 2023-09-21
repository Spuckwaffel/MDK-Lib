
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Custom/FName
/// Size: 0x0008 (0x000000 - 0x000008)
class FName : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int)                                       ComparisonIndex                                             OFFSET(get<int>, {0x0, 4, 0, 0})
	DMember(int)                                       Number                                                      OFFSET(get<int>, {0x4, 4, 0, 0})
};

/// Struct /Custom/TArray
/// Size: 0x0010 (0x000000 - 0x000010)
template <class T>
struct TArray
{
    friend struct FString;


public:
    inline TArray()
    {
        Data = nullptr;
        Count = Max = 0;
    };

    inline int Num() const
    {
        return Count;
    };

    inline T& operator[](int i)
    {
        return Data[i];
    };

    inline const T& operator[](int i) const
    {
        return Data[i];
    };

    inline bool IsValidIndex(int i) const
    {
        return i < Num();
    }

    inline int Slack() const
    {
        return Max - Count;
    }

    FORCEINLINE bool RemoveSingle(const int Index)
    {
        if (Index < Count)
        {
            if (Index != Count - 1)
                Data[Index] = Data[Count - 1];

            --Count;

            return true;
        }
        return false;
    }

    FORCEINLINE void RemoveAt(int Index, int Length = 1)
    {
        for (; Length != 0; --Length)
        {
            if (!RemoveSingle(Index++))
                break;
        }
    }

public:
    T* Data;
    int32_t Count;
    int32_t Max;
};