#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CopilotAuditLog.generated.h"

USTRUCT(BlueprintType)
struct FAuditEntry
{
	GENERATED_BODY()

	FAuditEntry() : Timestamp(0)
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Action;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AssetPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Details;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 Timestamp; // unix epoch
};

UCLASS(BlueprintType)
class AIBLUECOPILOT_API UCopilotAuditLog : public UObject
{
	GENERATED_BODY()

public:
	UCopilotAuditLog();

	UFUNCTION(BlueprintCallable, Category="Copilot Audit")
	void AddEntry(const FString& Action, const FString& AssetPath, const FString& Details);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Copilot Audit")
	TArray<FAuditEntry> Entries;
};
