#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.h"         // Make sure this header defines ATestActor
#include "SpawnActor.generated.h"

UCLASS()
class SEM2UNIVERSITYTASKS_API ASpawnActor : public AActor
{
    GENERATED_BODY()

public:
    ASpawnActor();

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(EditAnywhere, Category = "Spawning")
    TSubclassOf<ATestActor> TestActor;
};