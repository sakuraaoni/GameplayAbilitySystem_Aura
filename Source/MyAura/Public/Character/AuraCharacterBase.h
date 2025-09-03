// Copyright Return

#pragma once

 #include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

UCLASS(Abstract)
class MYAURA_API AAuraCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AAuraCharacterBase();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere,category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;


};
