#include "PositionReporter.h"

#include <GameFramework/Actor.h>

// Sets default values for this component's properties
UPositionReporter::UPositionReporter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReporter::BeginPlay()
{
	Super::BeginPlay();

	//auto objectName = GetOwner()->GetName();

	//UE_LOG(LogTemp, Display, TEXT("Info log: reporter <-- %d -->"), 678>>1);
	//UE_LOG(LogTemp, Warning, TEXT("Position reporter for object: %s"), *objectName);
	//UE_LOG(LogTemp, Error, TEXT("My name is Tarzan, I'm a jungle man %s"), *FString("asdasd"));

}


// Called every frame
void UPositionReporter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

