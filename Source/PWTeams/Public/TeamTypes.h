#pragma once

#include "CoreMinimal.h"
#include "TeamTypes.generated.h" 

USTRUCT(BlueprintType)
struct PWTEAMS_API FTeamColor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor Primary = FLinearColor::White;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor Secondary = FLinearColor::Black;
};

USTRUCT(BlueprintType)
struct PWTEAMS_API FTeamPalette
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTeamColor TeamBase;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FLinearColor> PlayerSwatch;
};
