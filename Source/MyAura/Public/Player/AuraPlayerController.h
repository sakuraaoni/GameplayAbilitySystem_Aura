// Copyright Return

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerController.generated.h"


class UInputAction;
class UInputMappingContext;
struct FInputActionValue;
class IEnemyInterface;


/**
 * 
 */
UCLASS()
class MYAURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	 AAuraPlayerController();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	virtual void SetupInputComponent() override;


private:
	UPROPERTY(EditAnywhere,Category="Input")
	TObjectPtr<UInputMappingContext> AuraContext;
	
	UPROPERTY(EditAnywhere,Category="Input")
	TObjectPtr<UInputAction> AuraInputAction;

	TScriptInterface<IEnemyInterface> LastActor;
	TScriptInterface<IEnemyInterface> ThisActor;

	void Move(const struct FInputActionValue& InputActionValue);

	void CursorTrace();
	
	
};
