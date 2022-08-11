// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP02Number.generated.h"

UCLASS()
class MATHPROGRAM_API ACPP02Number : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP02Number();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
