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
        //the secont param in the template is the class + lower we want to disclude
        //it will just cache UWorld without UObect and all classes below, meaning that uobject is empty
        //also its your job to set a good lowerbound, if you try to read something from uobject, its 0
        //its no problem rereading somewhere in the loop the pointer again with a lower lowerbound, it will read those bytes then
        //e.g now you choose uobject as lowerbound but later you need uobject, you reread and specify MDKBase as lowerbound, or leave empty
        UWorld world = MDKHandler::get<UWorld, UObject>(Memory::read<DWORD64>(Memory::getBaseAddress() + 0xE938D58));

        if (!world)
        {
            puts("world not initialized!");
            DebugBreak();
        }
        //DO NOT write anything into the function parameters, they are there for other purposes
        //(check write logic if you really wanna know)
        printf("VTable: %p\n", world.vtable());

        //follow the function to see the type the sdk defined
        //the type in these CMember or DMember or SMember
        //ignore these macros, they are there for the MDK
        auto gameInstancePtr = world.OwningGameInstance<UGameInstance*>();
        printf("gameinstance: %p\n", gameInstancePtr);
        if (!gameInstancePtr)
            continue;


        const TArray<ULocalPlayer*> tlocalPlayer =
            MDKHandler::readSingle<UGameInstance, TArray<ULocalPlayer*>>(gameInstancePtr, &UGameInstance::LocalPlayers);

        printf("Localplayer count: %d\n", tlocalPlayer.Count);
        printf("Data: %p\n", tlocalPlayer.Data);
        if (!tlocalPlayer.Data)
            continue;

        //data contains a pointer, nothing we can really cache
        ULocalPlayer* player = Memory::read<ULocalPlayer*>(tlocalPlayer.Data);

        printf("player: %p\n", player);
        if (!player)
            continue;

        //we dont need the entire ULocalPlayer class, just read the playerController
        //first specify the base class where the member is in, in our case its the playerController
        //and then specify the type you wanna read, in our case its AFortPlayerControllerAthena*
        //in the params specify the pointer to the ULocalPlayer class and then the member
        AFortPlayerControllerAthena* playerControllerPtr =
            MDKHandler::readSingle<ULocalPlayer, AFortPlayerControllerAthena*>(player, &ULocalPlayer::PlayerController);



        printf("playerControllerPtr: %p\n", playerControllerPtr);

        if (!playerControllerPtr)
            continue;

        //we dont need the uobject and larger data, more would be waste
        //i just showed above a example with AAthena_PlayerController_C, but theres no data we really need, we just need
        //APlayerController
        auto playerController = MDKHandler::get<APlayerController, UObject>(playerControllerPtr);

        const auto acknowledgedPawnPtr = playerController.AcknowledgedPawn<APlayerPawn_Athena_C*>();

        printf("acknowledgedPawnPtr: %p\n", acknowledgedPawnPtr);

        if (!acknowledgedPawnPtr)
            continue;

        //get the acknowledged pawn
        auto acknowlededPawn = MDKHandler::get<APlayerPawn_Athena_Generic_C>(acknowledgedPawnPtr);

        auto rootComp = acknowlededPawn.RootComponent<USceneComponent*>();

        struct _FVectorCopy
        {
            double x;
            double y;
            double z;
        };

        //types of reading single items of a class that you used readsingle on:

        //use the classic readSingle
        const _FVectorCopy loc = MDKHandler::readSingle<USceneComponent, _FVectorCopy>(rootComp, &USceneComponent::RelativeLocation);
        printf("loc: %.f %.f %.f\n", loc.x, loc.y, loc.z);

        //or use your memory. read, but i would prefer the readsingle
        const auto off = MDKHandler::getOffset<USceneComponent>(&USceneComponent::RelativeLocation);
        const auto loc2 = Memory::read<_FVectorCopy>(rootComp + off.offset);
        printf("loc2: %.f %.f %.f\n", loc2.x, loc2.y, loc2.z);
        //auto parent = MDKHandler::readSingle<USceneComponent, USceneComponent*>(rootComp, &USceneComponent::AttachParent);

        const auto weaponPtr = acknowlededPawn.CurrentWeapon<AFortWeapon*>();

        if (!weaponPtr)
            continue;

        //and the weapon
        auto weapon = MDKHandler::get<AFortWeapon, AActor>(weaponPtr);


        // example of casting to a regular struct
        // wanna cast it to your own struct or any struct that is not from MDK?



        //get the MDKClass 
        const auto _velocity = acknowlededPawn.PreviousVelocityXY<FVector>();

        //now cast it using dataCast
        const auto velocity = MDKHandler::dataCast<_FVectorCopy>(_velocity);

        printf("velocity: x: %.f y: %.f z: %.f\n", velocity.x, velocity.y, velocity.z);


        // example of writing

        auto pool = world.PSCPool<FWorldPSCPool>();
        auto member = pool.WorldParticleSystemPools<int>();
        // you call this function, in the template you define the Class, specify the datatype
        // as param you specify your object where the write should be, the member (dont forget the &)
        // and then the value

        MDKHandler::write<FWorldPSCPool, int>(pool, &FWorldPSCPool::WorldParticleSystemPools, 4555);

        //or

        //use writesilent so it will just write in the cache to queue many small writes
        //this is effective when writing an entire vector and not wasting 3 reads

        //example use:
        // in a class exists a FVector, lets say location
        // you first get the FVector, auto vec = class.Location<FVector>();
        // now you wanna write xyz coords
        // you specify in the template args (<>) the class, and the value type you write
        // in the args, you specify the class instance we created, then specify the member and add the value type there again
        // and lastly the value
        // of course you can also use your own custom structs in the template args
        // MDKHandler::writeSilent<FVector, float>(vec, &FVector::X<float>, 123.f);
        // MDKHandler::writeSilent<FVector, float>(vec, &FVector::X<float>, 456.f);
        // MDKHandler::writeSilent<FVector, float>(vec, &FVector::X<float>, 789.f);

        MDKHandler::writeSilent<FWorldPSCPool, int>(pool, &FWorldPSCPool::WorldParticleSystemPools, 4555);
        MDKHandler::writeSilent<FWorldPSCPool, int>(pool, &FWorldPSCPool::WorldParticleSystemPools, 283);
        MDKHandler::writeSilent<FWorldPSCPool, int>(pool, &FWorldPSCPool::WorldParticleSystemPools, 444);

        // and then write the entire bulk. DONT FORGET!
        MDKHandler::writeBulk(pool);

        //dont do this with too large structs, it could corrupt other possible data in race conditions!
        //and dont do it with classes, use small simple structs. If you write to classes, use the normal write

        getchar();
    }
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
