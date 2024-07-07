// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class SIMPLESHOOTER_API AGun : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AGun();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent)
	void PullTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USkeletalMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxRange = 1000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage = 10;

private:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;
};
