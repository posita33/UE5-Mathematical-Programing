// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP05Number.h"

// Sets default values
ACPP05Number::ACPP05Number()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP05Number::BeginPlay()
{
	Super::BeginPlay();

	float A = 0.0f;
	float B = 0.0f;
	float x = 1.0f;
	float n = 0.0f;
	float answerF = 0.0f;

	// (1) A=3x−5,B=5−2xのとき、3A−2Bを計算しなさい。
	A = (3.0f * x) - 5.0f;
	B = 5.0f - (2.0f * x);
	
	answerF = (3 * A) - (2 * B);

	// (2)
	// ② n番目の図形で使う黒丸の個数を、nを使った式で表しなさい。 
	// ① n = 4の時の個数
	n = 4.0f;
	answerF = (3 * n) + 2;

}

// Called every frame
void ACPP05Number::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

