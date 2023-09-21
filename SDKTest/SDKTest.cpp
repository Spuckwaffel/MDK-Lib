// SDKTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


#include "MDK/MDKImports.h"



#include "clas1.h"

struct s
{
    int e = 12;
    char unk1[0x08C0] = { 0 };
};

void f(int i = 0)
{
	
}

int main()
{

    f();
    s d{};
    printf("base pointer: %p\n", &d);
    MDKHandler::newFrame();
    AFortWeapon world = MDKHandler::get<AFortWeapon>(&d);
    printf("%d\n", world.bIsReloadingWeapon());
    //UWorld world = MDKHandler::get<UWorld>(&d);
    //
    //printf("%d\n", world.bAreConstraintsDirty());
    //
    //MDKHandler::write<UWorld, bool>(world, &UWorld::bAreConstraintsDirty, true);
    //MDKHandler::write<UWorld, int>(world, &UWorld::StreamingLevelsToConsider, 333);
    //
    //printf("%d\n", world.StreamingLevelsToConsider<int>());
    //printf("%d\n", world.bAreConstraintsDirty());
    //
    //MDKHandler::newFrame();
    //
    //world = MDKHandler::get<UWorld>(&d);
    //printf("%d\n", world.StreamingLevelsToConsider<int>());
    //printf("%d\n", world.bAreConstraintsDirty());
    //MDKHandler::write<int>(UWorld::StreamingLevelsToConsider<int>, 4555);
    
    //UWorld* _persistentlevel = world.persistentLevel<UWorld*>();
    //World3 struc = world.st<World3>();
    //World3* river = world.river<World3*>();
    //printf("%d\n", struc.x<int>());
    //printf("%d\n", struc.y<int>());
    //printf("%d\n", struc.z<int>());
    //printf("%p\n", struc.world<UWorld*>());

    //const UWorld worldagain = MDKHandler::get<UWorld>(&d);
    //water = world.water<UWorld*>();
    //printf("%p\n", water);

    //UWorld persistentlevel= MDKHandler::get<UWorld>(_persistentlevel);

    //UShieldBarrierInterface bar;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
