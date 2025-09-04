// Copyright Return

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class MYAURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface

{
	GENERATED_BODY()
public:
	virtual void HightLightActor() override;
	virtual void UnHightLightActor() override;
};
