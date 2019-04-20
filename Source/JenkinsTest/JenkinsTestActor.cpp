// Fill out your copyright notice in the Description page of Project Settings.


#include "JenkinsTestActor.h"

// Sets default values
AJenkinsTestActor::AJenkinsTestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJenkinsTestActor::BeginPlay()
{
	Super::BeginPlay();
	//This is fun!
}

// Called every frame
void AJenkinsTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

