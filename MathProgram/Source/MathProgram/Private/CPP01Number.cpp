// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP01Number.h"

// Sets default values
ACPP01Number::ACPP01Number()
{

}

// Called when the game starts or when spawned
void ACPP01Number::BeginPlay()
{
	Super::BeginPlay();
	
	int answer = 0;
	
	// (1) (+2) + (+5)
	answer = (+2) + (+5);

	// (2) (-8) + (-3)
	answer = (-8) + (-3);

	// (3) (+4) - (-5)
	answer = (+4) - (-5);

	// (4) (-6) - (+8) + (-7) - (-4)
	answer = (-6) - (+8) + (-7) - (-4);

    
	// (1) (+4) * (-8)
	answer = (+4) * (-8);
	
	// (2) (-5) * (-7)
	answer = (-5) * (-7);

	// (3) (+3) * (-6) * (-5)
	answer = (+3) * (-6) * (-5);
	
	// (4) (−3^2)×(−5)^2
	answer = -(FMath::Pow(3.0f, 2.0f)) * FMath::Pow(-5.0f, 2.0f);

	float answerF = 0.0f;

	// (1) (-8) ÷ (+2)
	answerF = (-8.0f) / (+2.0f);

	// (2) (-3/5) ÷ (+5/9)
	answerF = (-3.0f/5.0f) / (5.0f/9.0f);

	// (3) (-4/5) ÷ (+1.6) ÷ (-3/10) × (-0.5)
	answerF = (-4.0f/5.0f) / (1.6f) / (-3.0f/10.0f) * (-0.5f);

	// (4) (-3)^4 ÷ (+3)^6 × (-3)^3
	answerF = FMath::Pow(-3.0f,4.0f) / FMath::Pow(3.0f,6.0f) * FMath::Pow(-3.0f, 3.0f);

	// 四則の混じった計算
	
	// (1) (−8)×(+4)−(+27)÷(−3)
	answerF = (-8.0f) * (+4.0f) - (27.0f) / (-3.0f);

	// (2) (+3.6)−{(−3)^2 −4×(0.2−1.6)}
	answerF = (+3.6f) - (FMath::Pow(-3.0f, 2.0f) - 4.0f * (0.2f - 1.6f));

	// (3) (3/4 - 2/3)÷6/8 - (6/4 + 1/3) × 36
	answerF = (3.0f/4.0f - 2.0f/3.0f) / (6.0f/8.0f) - (6.0f/4.0f + 1.0f/3.0f) * 36.0f;

	// 正の数・負の数の利用
	answerF = 760.0f + ((-110.0f) + (+23.0f) + 0.0f + (-40.0f) + (+86.0f) + (-10.0f) + (+100.0f)) / 7.0f;


	answerF = FMath::Abs(400.0f);


}



