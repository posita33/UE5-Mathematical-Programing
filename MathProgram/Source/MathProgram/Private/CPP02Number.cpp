// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP02Number.h"

// Sets default values
ACPP02Number::ACPP02Number()
{
}

// Called when the game starts or when spawned
void ACPP02Number::BeginPlay()
{
	Super::BeginPlay();

	float x = 1.0f;
	float y = 1.0f;
	int p = 1;
	int q = 1;
	int a = 1;

	float answerF = 0.0f;
	int answerI = 0;

	// (1) x × 3 × y
	answerF = x * 3 * y;

	// (2) (p - q) ÷ 5
	answerI = (p - q) / 5;

	// (3) (−4) × a × a + 3 × a
	answerI = (4) * a * a + 3 * a;

	// (4) x = - 3/4
	x = -3 / 4;

	// (4) 式1： x - (2 / 3)
	answerF = x - (2 / 3);

	// (4) 式2： x^2 - 2x
	answerF = FMath::Pow(x, 2) - 2 * x;






}



