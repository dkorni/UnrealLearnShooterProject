// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGeometry.h"
#include "Engine/Engine.h"

DEFINE_LOG_CATEGORY_STATIC(LogBaseGeometry, Display, All)

// Sets default values
ABaseGeometry::ABaseGeometry()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseGeometry::BeginPlay()
{
	Super::BeginPlay();
	
	// printStringTypes();

	printTypes();

}

// Called every frame
void ABaseGeometry::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseGeometry::printTypes()
{
	UE_LOG(LogBaseGeometry, Warning, TEXT("Name: %s"), *GetName());
	UE_LOG(LogBaseGeometry, Warning, TEXT("Weapon num: %d, kills num %i"), WeaponNum, KillsNum);
	UE_LOG(LogBaseGeometry, Warning, TEXT("Health: %f"), Health);
	UE_LOG(LogBaseGeometry, Warning, TEXT("IsDead: %d"), IsDead);
	UE_LOG(LogBaseGeometry, Warning, TEXT("HasWeapon: %d"), static_cast<int>(HasWeapon));
}

void ABaseGeometry::printStringTypes()
{
	FString WeaponNumStr = "Weapon num = " + FString::FromInt(WeaponNum);
	FString HealthStr = "Health = " + FString::SanitizeFloat(Health);
	FString IsDeadStr = "Is dead = " + FString(IsDead ? "true" : "false");

	FString Stat = FString::Printf(TEXT(" \n -- ALL stat -- \n %s \n %s \n %s"), *WeaponNumStr, *HealthStr, *IsDeadStr);
	UE_LOG(LogBaseGeometry, Warning, TEXT("%s"), *Stat);

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, Stat, true, FVector2D(1.5f, 1.5f));
}

