// Fill out your copyright notice in the Description page of Project Settings.

#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();

	FString MyString = GetName();
	UE_LOG(LogTemp, Warning, TEXT("Actor's Name: %s / Configured MoveDistance: %f"), *MyString, MoveDistance); // 문자열에는 *를 붙여야한다.
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (EnableMoveVector)
		MovePlatform(DeltaTime);
	if (EnableRotate)
		RotatePlatform(DeltaTime);
}

void AMovingPlatform::MovePlatform(float DeltaTime)
{
	FVector CurrentLocation = GetActorLocation();
	CurrentLocation += MoveVelocity * DeltaTime;
	SetActorLocation(CurrentLocation);

	if (GetDistanceMoved() >= MoveDistance)
	{
		FVector MoveDirection = MoveVelocity.GetSafeNormal();
		StartLocation += MoveDistance * MoveDirection;
		MoveVelocity = -MoveVelocity;
	}
}

void AMovingPlatform::RotatePlatform(float DeltaTime)
{
	AddActorLocalRotation(RotateVelocity * DeltaTime);
}

float AMovingPlatform::GetDistanceMoved() const
{
	return FVector::Dist(StartLocation, GetActorLocation());
}
