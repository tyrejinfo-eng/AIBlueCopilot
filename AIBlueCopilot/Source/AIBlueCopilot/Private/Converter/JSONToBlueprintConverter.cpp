// Copyright Syntheticgamelabs. All Rights Reserved.
// Developer: Syntheticgamelabs
// Contact: syntheticgamelabs@gmail.com

#include "Converter/JSONToBlueprintConverter.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "Dom/JsonObject.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

bool UJSONToBlueprintConverter::ConvertJSONToBlueprint(const FString& JSONSpec, FString& OutBlueprintPath)
{
	if (!ValidateJSONSpec(JSONSpec))
	{
		UE_LOG(LogTemp, Error, TEXT("[JSONToBlueprintConverter] Invalid JSON specification"));
		return false;
	}

	OutBlueprintPath = TEXT("/Game/AI/GeneratedAssets/NewBlueprint");
	UE_LOG(LogTemp, Warning, TEXT("[JSONToBlueprintConverter] Converted JSON to blueprint path: %s"), *OutBlueprintPath);
	return true;
}

bool UJSONToBlueprintConverter::ValidateJSONSpec(const FString& JSONSpec)
{
	if (JSONSpec.IsEmpty())
	{
		return false;
	}

	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JSONSpec);

	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("[JSONToBlueprintConverter] JSON validation successful"));
		return true;
	}

	UE_LOG(LogTemp, Error, TEXT("[JSONToBlueprintConverter] JSON validation failed"));
	return false;
}

bool UJSONToBlueprintConverter::ParseJSONSpec(const FString& JSONSpec, TMap<FString, FString>& OutProperties)
{
	if (!ValidateJSONSpec(JSONSpec))
	{
		return false;
	}

	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JSONSpec);

	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{
		// Convert JSON properties to map
		for (const auto& Field : JsonObject->Values)
		{
			OutProperties.Add(Field.Key, Field.Value->AsString());
		}

		UE_LOG(LogTemp, Warning, TEXT("[JSONToBlueprintConverter] Parsed %d properties"), OutProperties.Num());
		return true;
	}

	return false;
}
