// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS()
class SEM2UNIVERSITYTASKS_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	

	ATestActor();

protected:
	
	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;


public:
	UFUNCTION(BlueprintCallable)
	virtual void Greeting();

public:
	virtual void OnConstruction(const FTransform& Transform) override;
};
