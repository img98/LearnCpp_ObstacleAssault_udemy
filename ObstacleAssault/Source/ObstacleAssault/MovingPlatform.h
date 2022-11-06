// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void MovePlatform(float DeltaTime);
	void RotatePlatform(float DeltaTime);
	float GetDistanceMoved() const;

	//클래스 속성, 그런데 여길건들면(ex.이름바꾸기 등) ue에디터에서 설정한 값이 사라지는데, 거긴 안건들고 수정할수 있는 방법 없나?
	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	FVector MoveVelocity = FVector(0, 0, 0);
	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	float MoveDistance;

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	FRotator RotateVelocity;

	UPROPERTY(EditAnywhere, Category = "Enable MovingFunc")
	bool EnableMoveVector = false;
	UPROPERTY(EditAnywhere, Category = "Enable MovingFunc")
	bool EnableRotate = false;
	
	FVector StartLocation;
};
