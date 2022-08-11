// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP04Number.h"

// Sets default values
ACPP04Number::ACPP04Number()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP04Number::BeginPlay()
{
	Super::BeginPlay();

	float x = 1;
	float answerF = 0.0f;

	// (1) 5x - 8 - 2x + 4
	answerF = (5.0f * x) - 8.0f - (2.0f * x) + 4.0f;

	// (2)  (8x - 5) - (-7x + 3)
	answerF = ((8.0f * x) - 5.0f) - ((-7.0f * x) + 3.0f);

	// (3)  3(4x - 3) - 4(2x - 2)
	answerF = (3.0f * ((4.0f * x) - 3.0f)) - (4.0f * ((2.0f * x) - 2.0f));

	// (4) (3x + 5) / 4 - (x - 3) / 3
	answerF = (((3.0f * x) + 5.0f) / 4.0f) - ((x - 3.0f) / 3.0f);

	
}

// Called every frame
void ACPP04Number::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

