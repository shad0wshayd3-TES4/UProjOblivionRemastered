#pragma once

#include "CoreMinimal.h"
#include "TESSync.h"
#include "Toolkits/AssetEditorToolkit.h"

class FTESSyncEditorToolkit : public FAssetEditorToolkit
{
public:
	void InitEditor(const TArray<UObject*>& InObjects);

	void RegisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;
	void UnregisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;

	FName GetToolkitFName() const override { return "TESSyncEditor"; }
	FText GetBaseToolkitName() const override { return INVTEXT("TESSync Editor"); }
	FString GetWorldCentricTabPrefix() const override { return "TESSync"; }
	FLinearColor GetWorldCentricTabColorScale() const override { return {}; }

private:
	UTESSync* TESSync;
};
