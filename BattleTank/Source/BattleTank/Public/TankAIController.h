// Noah Surprenant - UnrealCourse.com

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

class ATank;

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	ATank* GetControlledTank() const;

	ATank* GetPlayerTank() const;
};
