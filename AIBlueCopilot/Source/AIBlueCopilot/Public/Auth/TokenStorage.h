#pragma once

#include "CoreMinimal.h"
#include "Misc/Base64.h"

#if PLATFORM_WINDOWS
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>
#include <wincrypt.h>
#pragma comment(lib, "crypt32.lib")
#endif

namespace TokenStorage
{
	// Protect a UTF-8 string using platform secure APIs; outputs Base64 of protected bytes.
	inline bool ProtectString(const FString& InPlainUtf8, FString& OutProtectedBase64)
	{
#if PLATFORM_WINDOWS
		FTCHARToUTF8 Conv(*InPlainUtf8);
		DATA_BLOB InBlob;
		InBlob.pbData = (BYTE*)Conv.Get();
		InBlob.cbData = (DWORD)Conv.Length();

		DATA_BLOB OutBlob;
		ZeroMemory(&OutBlob, sizeof(OutBlob));

		if (!::CryptProtectData(&InBlob, nullptr, nullptr, nullptr, nullptr, 0, &OutBlob))
		{
			return false;
		}

		TArray<uint8> Bytes;
		Bytes.AddUninitialized(OutBlob.cbData);
		FMemory::Memcpy(Bytes.GetData(), OutBlob.pbData, OutBlob.cbData);
		::LocalFree(OutBlob.pbData);

		OutProtectedBase64 = FBase64::Encode(Bytes);
		return true;
#else
		// Fallback: simple obfuscation
		FTCHARToUTF8 Conv(*InPlainUtf8);
		TArray<uint8> Bytes; Bytes.Append((const uint8*)Conv.Get(), Conv.Length());
		FString Machine = FPlatformMisc::GetMachineId();
		FTCHARToUTF8 Mid(*Machine);
		if (Mid.Length() > 0)
		{
			for (int32 i = 0; i < Bytes.Num(); ++i) Bytes[i] ^= Mid[i % Mid.Length()];
		}
		OutProtectedBase64 = FBase64::Encode(Bytes);
		return true;
#endif
	}

	// Unprotect a Base64 string back into UTF-8 plain string
	inline bool UnprotectString(const FString& InProtectedBase64, FString& OutPlainUtf8)
	{
#if PLATFORM_WINDOWS
		TArray<uint8> Bytes;
		if (!FBase64::Decode(InProtectedBase64, Bytes)) return false;

		DATA_BLOB InBlob;
		InBlob.pbData = Bytes.GetData();
		InBlob.cbData = (DWORD)Bytes.Num();

		DATA_BLOB OutBlob;
		ZeroMemory(&OutBlob, sizeof(OutBlob));

		if (!::CryptUnprotectData(&InBlob, nullptr, nullptr, nullptr, nullptr, 0, &OutBlob))
		{
			return false;
		}

		FUTF8ToTCHAR Conv((char*)OutBlob.pbData, OutBlob.cbData);
		OutPlainUtf8 = FString(Conv.Length(), Conv.Get());
		::LocalFree(OutBlob.pbData);
		return true;
#else
		TArray<uint8> Bytes;
		if (!FBase64::Decode(InProtectedBase64, Bytes)) return false;
		FString Machine = FPlatformMisc::GetMachineId();
		FTCHARToUTF8 Mid(*Machine);
		if (Mid.Length() > 0)
		{
			for (int32 i = 0; i < Bytes.Num(); ++i) Bytes[i] ^= Mid[i % Mid.Length()];
		}
		FString Result(UTF8_TO_TCHAR((const char*)Bytes.GetData()));
		OutPlainUtf8 = Result;
		return true;
#endif
	}
}
