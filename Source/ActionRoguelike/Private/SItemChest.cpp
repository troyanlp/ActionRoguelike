// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionRoguelike/Public/SItemChest.h"


void ASItemChest::Interact_Implementation(APawn* InstigatorPawn)
{
	ISGameplayInterface::Interact_Implementation(InstigatorPawn);

	LidMesh->SetRelativeRotation(FRotator(TargetPitch, 0, 0));
}

ASItemChest::ASItemChest()
{
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	RootComponent = BaseMesh;

	LidMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LidMesh"));
	LidMesh->SetupAttachment(BaseMesh);

	TargetPitch = 110;
}

