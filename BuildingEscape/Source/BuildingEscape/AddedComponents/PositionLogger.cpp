// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionLogger.h"

#include <GameFramework/Actor.h>

// Sets default values for this component's properties
UPositionLogger::UPositionLogger()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UPositionLogger::BeginPlay()
{
	Super::BeginPlay();

  auto name = GetOwner()->GetName();
  UE_LOG(LogTemp, Warning, TEXT("My name is: %s"), *name);

	elapsedTime = 0;
	refreshTime = 5;
}


// Called every frame
void UPositionLogger::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	elapsedTime += DeltaTime;

	if(elapsedTime > refreshTime)
	{
		LogCurrentPosition();
		elapsedTime = 0;
	}
}

void UPositionLogger::LogCurrentPosition() {
  FVector objectLocation = GetOwner()->GetActorLocation();
  UE_LOG(LogTemp, Warning, TEXT("My position is: X(%d), Y(%d), Z(%d)"), objectLocation.X, objectLocation.Y, objectLocation.Z);
}

