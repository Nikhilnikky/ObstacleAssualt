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
	// Myint = MyVector.X;
	// Myfloat = MyVector.Y;

	// // SetActorLocation(FVector(1,2,3));
	// SetActorLocation(MyVector);
	
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MyVector = GetActorLocation();
	MyVector.X += 5;
	SetActorLocation(MyVector);

}

