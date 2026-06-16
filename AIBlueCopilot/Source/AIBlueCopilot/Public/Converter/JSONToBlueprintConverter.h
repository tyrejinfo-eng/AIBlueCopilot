// Copyright Syntheticgamelabs. All Rights Reserved.
// Developer: Syntheticgamelabs
// Contact: syntheticgamelabs@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Dom/JsonObject.h"
#include "JSONToBlueprintConverter.generated.h"

/**
 * JSON to Blueprint Converter
 * Converts JSON specifications to blueprint instructions
 */
UCLASS(BlueprintType, Blueprintable)
class AIBLUECOPILOT_API UJSONToBlueprintConverter : public UObject
{
	GENERATED_BODY()

public:
	/** Convert JSON spec to blueprint commands */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Conversion")
	bool ConvertJSONToBlueprint(const FString& JSONSpec, FString& OutBlueprintPath);

	/** Validate JSON structure */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Conversion")
	bool ValidateJSONSpec(const FString& JSONSpec);

	/** Parse JSON to structured data */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Conversion")
	bool ParseJSONSpec(const FString& JSONSpec, TMap<FString, FString>& OutProperties);
};
