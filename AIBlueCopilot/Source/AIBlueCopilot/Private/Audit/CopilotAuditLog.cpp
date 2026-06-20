#include "Audit/CopilotAuditLog.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Misc/PackageName.h"
#include "Engine/Engine.h"
#include "UObject/Package.h"
#include "Serialization/BufferArchive.h"

UCopilotAuditLog::UCopilotAuditLog()
{
}

void UCopilotAuditLog::AddEntry(const FString& Action, const FString& AssetPath, const FString& Details)
{
	FAuditEntry E;
	E.Action = Action;
	E.AssetPath = AssetPath;
	E.Details = Details;
	E.Timestamp = FDateTime::UtcNow().ToUnixTimestamp();
	Entries.Add(E);

	// mark package dirty
	if (GetOutermost())
	{
		GetOutermost()->MarkPackageDirty();
		FAssetRegistryModule::AssetCreated(this);
	}
}
