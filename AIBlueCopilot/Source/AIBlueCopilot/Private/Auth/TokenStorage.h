#pragma once

#include "CoreMinimal.h"

namespace TokenStorage
{
	// Protect a UTF-8 string using platform secure APIs; outputs Base64 of protected bytes.
	bool ProtectString(const FString& InPlainUtf8, FString& OutProtectedBase64);
	// Unprotect a Base64 string back into UTF-8 plain string
	bool UnprotectString(const FString& InProtectedBase64, FString& OutPlainUtf8);
}
