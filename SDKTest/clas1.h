#pragma once
#include "MDK.h"

struct World3 : MDKStruct
{
	friend MDKBase;

	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	Member(int) x ___ OFFSET(get<T>,{ 0, 4 })
	Member(world) world() const { return get<T>({ 12, 8 }); }
};

class World5 : public MDKBase
{
	friend MDKHandler;

	static inline constexpr uint64_t __MDKClassSize = 0x330;

public:
	Member(UWorl4*) level4() const { return get<T>({ 0x30, 8 }); }
	Member(UWoassdrl4*) level5() const { return get<T>({ 0x30, 8 }); }
	Member(UWorl4*) level7() const { return get<T>({ 0x30, 8 }); }
	Member(UWorl4*) level6() const { return get<T>({ 0x30, 8 }); }
};

class World6 : public World5
{
	friend MDKHandler;

	static inline constexpr uint64_t __MDKClassSize = 0x330;

public:
	Member(UWorladad*) level4_a() const { return get<T>({ 0x30, 8 }); }
	Member(<f<f<sdf<*) level5_a() const { return get<T>({ 0x30, 8 }); }
	Member(ffafasda*) level7_a() const { return get<T>({ 0x30, 8 }); }
	Member(asdasdasd*) level6_a() const { return get<T>({ 0x30, 8 }); }
};