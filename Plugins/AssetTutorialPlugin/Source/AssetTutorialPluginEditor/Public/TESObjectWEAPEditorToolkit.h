#pragma once

#include "CoreMinimal.h"
#include "TESObjectWEAP.h"
#include "Toolkits/AssetEditorToolkit.h"

class FTESObjectWEAPEditorToolkit : public FAssetEditorToolkit
{
public:
	void InitEditor(const TArray<UObject*>& InObjects);

	void RegisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;
	void UnregisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;

	FName GetToolkitFName() const override { return "TESObjectWEAPEditor"; }
	FText GetBaseToolkitName() const override { return INVTEXT("TESObjectWEAP Editor"); }
	FString GetWorldCentricTabPrefix() const override { return "TESObjectWEAP"; }
	FLinearColor GetWorldCentricTabColorScale() const override { return {}; }

private:
	UTESObjectWEAP* TESObjectWEAP;
};
