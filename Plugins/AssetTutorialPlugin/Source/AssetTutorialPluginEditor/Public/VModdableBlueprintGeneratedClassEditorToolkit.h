#pragma once

#include "CoreMinimal.h"
#include "VModdableBlueprintGeneratedClass.h"
#include "Toolkits/AssetEditorToolkit.h"

class FVModdableBlueprintGeneratedClassEditorToolkit : public FAssetEditorToolkit
{
public:
	void InitEditor(const TArray<UObject*>& InObjects);

	void RegisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;
	void UnregisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;

	FName GetToolkitFName() const override { return "VModdableBlueprintGeneratedClassEditor"; }
	FText GetBaseToolkitName() const override { return INVTEXT("VModdableBlueprintGeneratedClass Editor"); }
	FString GetWorldCentricTabPrefix() const override { return "VModdableBlueprintGeneratedClass"; }
	FLinearColor GetWorldCentricTabColorScale() const override { return {}; }

private:
	UVModdableBlueprintGeneratedClass* VModdableBlueprintGeneratedClass;
};
