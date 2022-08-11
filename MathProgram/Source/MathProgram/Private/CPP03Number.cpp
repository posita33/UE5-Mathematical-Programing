// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP03Number.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ACPP03Number::ACPP03Number()
{

}

// Called when the game starts or when spawned
void ACPP03Number::BeginPlay()
{
	Super::BeginPlay();

	int a = 1;
	int b = 1;
	int x = 1;
	int y = 1;
	int r = 1;
	int answerI = 0;
	int answerF = 0.0f;

	// (1) (130Å~a)+((300ÅÄ6)Å~b)+((250ÅÄ5)Å~3)
	answerI = (130 * a) + ((300 / 6) * b) + ((250 / 5) * 3);

	// (2) (x / 40) + (y / 30)
	answerI = (x / 40) + (y / 30);

	// (3) x - (xy / 10)
	answerI = x - (x * y / 10);

	// (4) (xy / 2) - ÉŒr^2
	answerF = (x * y / 2.0f) - (r * r * PI);

	answerF = (x * y / 2.0f) - (r * r * UKismetMathLibrary::GetPI());

	answerF = (x * y / 2.0f) - (UKismetMathLibrary::MultiplyByPi(r * r));
}

