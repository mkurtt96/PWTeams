// copyright mkurtt96

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TeamFunctions.generated.h"

UENUM(BlueprintType)
enum class ERelation : uint8 { Unknown, Self, Ally, Enemy };

/**
 * 
 */
UCLASS()
class PWTEAMS_API UTeamFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category="Team")
	static int32 GetTeamId(const AActor* Actor);

	UFUNCTION(BlueprintPure, Category="Team")
	static bool AreFriendly(const AActor* A, const AActor* B);

	UFUNCTION(BlueprintPure, Category="Team")
	static bool AreEnemies(const AActor* A, const AActor* B);

	UFUNCTION(BlueprintPure, Category="Team")
	static bool EnumMaskHas(ERelationMask Mask, ERelationMask Flag);

	UFUNCTION(BlueprintPure, Category="Team")
	static ERelation GetRelation(const AActor* A, const AActor* B);

	UFUNCTION(BlueprintPure, Category="Team")
	static bool MatchesMask(const AActor* A, const AActor* B, uint8 MaskByte);
};
