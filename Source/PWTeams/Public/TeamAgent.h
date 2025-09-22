// copyright mkurtt96

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TeamAgent.generated.h"

UINTERFACE(BlueprintType)
class PWTEAMS_API UTeamAgent : public UInterface
{
	GENERATED_BODY()
};

class PWTEAMS_API ITeamAgent
{
	GENERATED_BODY()

public:
	virtual int32 GetTeamId() const = 0;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Team")
	int32 GetTeamId_BP() const;
	virtual int32 GetTeamId_BP_Implementation() const { return GetTeamId(); }
};
