// SDKTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdint>
#include <Windows.h>
#include <tlhelp32.h>
#include "MDK/MDKImports.h"

#include "Memory.h"



int main()
{
    Memory::Memory();

    Memory::load("FortniteClient-Win64-Shipping.exe");

    printf("base: 0x%llX\n", Memory::getBaseAddress());

    if (Memory::getStatus() != Memory::loaded)
        DebugBreak();

    while(true)
    {
	    //cheat logic

        //first make a new frame

        MDKHandler::newFrame();

        //get UWorld, obviously we need to read the address in the .data section fist ._.
        UWorld world = MDKHandler::get<UWorld>(Memory::read<DWORD64>(Memory::getBaseAddress() + 0xE762638));

        if (!world)
        {
            puts("world not initialized!");
            DebugBreak();
        }
        //dDO NOT write anything into the function parameters, they are there for other purposes
        //(check write logic if you really wanna know)
        printf("VTable: %p\n", world.vtable());

        //follow the function to see the type the sdk defined
        //the type in these CMember or DMember or SMember
        //ignore these macros, they are there for the MDK
        const auto gameInstancePtr = world.OwningGameInstance<UGameInstance*>();
        printf("gameinstance: %p\n", gameInstancePtr);
        if(gameInstancePtr)
        {
            UGameInstance gameInstance = MDKHandler::get<UGameInstance>(gameInstancePtr);
            TArray<ULocalPlayer*> localPlayer = gameInstance.LocalPlayers<TArray<ULocalPlayer*>>();
            printf("Localplayer count: %d\n", localPlayer.Count);
            printf("Data: %p\n", localPlayer.Data);
        }

        getchar();
    }
    
    

    
    
    
    //UWorld world = MDKHandler::get<UWorld>(&d);
    //
    //
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
