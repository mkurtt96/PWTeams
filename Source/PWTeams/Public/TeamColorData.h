// copyright mkurtt96

#pragma once

#include "CoreMinimal.h"
#include "TeamTypes.h"
#include "Engine/DataAsset.h"
#include "TeamColorData.generated.h"

/**
 * 
 */
UCLASS()
class PWTEAMS_API UTeamColorData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<int32, FTeamPalette> Teams;
};
