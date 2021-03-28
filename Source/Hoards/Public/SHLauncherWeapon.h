// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SHWeapon.h"
#include "SHLauncherWeapon.generated.h"

/**
 * 
 */
UCLASS()
class HOARDS_API ASHLauncherWeapon : public ASHWeapon
{
	GENERATED_BODY()
	

protected:
	virtual void Fire() override;

	UPROPERTY(EditDefaultsOnly, Category = "ProjectileWeapon")
	TSubclassOf<AActor> ProjectileClass;

};
