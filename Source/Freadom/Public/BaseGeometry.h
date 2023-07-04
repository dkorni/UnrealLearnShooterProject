// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseGeometry.generated.h"

UCLASS()
class FREADOM_API ABaseGeometry : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseGeometry();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Weapon") // macros and specificator
	int32 WeaponNum = 4;

	UPROPERTY(EditDefaultsOnly, Category = "Stat")
	int32 KillsNum = 7;

	UPROPERTY(EditInstanceOnly, Category = "Health")
	float Health = 34.43f;

	UPROPERTY(EditAnywhere, Category = "Health")
	bool IsDead = false;

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
	bool HasWeapon = true;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void printTypes();
	void printStringTypes();
};
