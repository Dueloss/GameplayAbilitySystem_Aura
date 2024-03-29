// Copyright Kim Bjerge Johansson

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "InterAction/TargetInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public ITargetInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;

	UPROPERTY(BlueprintReadOnly)
	bool bHighLight = false;
};
