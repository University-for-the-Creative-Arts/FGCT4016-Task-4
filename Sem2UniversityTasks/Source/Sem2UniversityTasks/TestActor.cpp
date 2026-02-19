// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"


ATestActor::ATestActor()
{

	PrimaryActorTick.bCanEverTick = true;

}


void ATestActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("I'm constructing it"));
}



void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("I am playing it"));
}


void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	;	Greeting();
}

void ATestActor::Greeting()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Hello there!"));
}

