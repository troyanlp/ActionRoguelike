// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/SAIController.h"

#include "Kismet/GameplayStatics.h"

void ASAIController::BeginPlay()
{
	Super::BeginPlay();

	if(ensureMsgf(BehaviorTree, TEXT("Behavior Tree is nullptr! Please assign BehaviorTree in you AI Controller.")))
	{
		RunBehaviorTree(BehaviorTree);
	}
}
