// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP06Number.h"

// Sets default values
ACPP06Number::ACPP06Number()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP06Number::BeginPlay()
{
	Super::BeginPlay();
	
	float x = 1.0f;
	float y = 2.0f;
	float z = 0.0f;

	// (1) 3000−(5x+3y)=z
	if (3000 - ((5 * x) + (3 * y)) == z)
	{ }

	// (2) 3000−(5x+3y)≦z
	if (3000 - ((5 * x) + (3 * y)) <= z)
	{ }
}

// Called every frame
void ACPP06Number::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

