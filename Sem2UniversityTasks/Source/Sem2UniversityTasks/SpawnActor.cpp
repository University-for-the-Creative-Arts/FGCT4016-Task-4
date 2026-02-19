#include "SpawnActor.h"
#include "Engine/World.h"      // For GetWorld(), SpawnActor

ASpawnActor::ASpawnActor()
{
    // Constructor, any default initialization here
}

void ASpawnActor::BeginPlay()
{
    Super::BeginPlay();

    if (IsValid(TestActor))
    {
        UWorld* World = GetWorld();
        if (IsValid(World))
        {
            FVector SpawnLocation(0.f, 0.f, 0.f);
            FRotator SpawnRotation(0.f, 0.f, 0.f);
            FTransform SpawnTransform(SpawnRotation, SpawnLocation);

            ATestActor* SpawnedActor = World->SpawnActor<ATestActor>(TestActor, SpawnTransform);

            if (IsValid(SpawnedActor))
            {
                UE_LOG(LogTemp, Log, TEXT("Spawned TestActor successfully: %s"), *SpawnedActor->GetName());
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Failed to spawn TestActor."));
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Invalid World context."));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("TestActor is not set or invalid."));
    }
}