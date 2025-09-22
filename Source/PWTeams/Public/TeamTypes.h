#pragma once


USTRUCT(BlueprintType)
struct FTeamColor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor Primary = FLinearColor::White;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor Secondary = FLinearColor::Black;
};

USTRUCT(BlueprintType)
struct FTeamPalette
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTeamColor TeamBase;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FLinearColor> PlayerSwatches; // per-player colors within team
};
