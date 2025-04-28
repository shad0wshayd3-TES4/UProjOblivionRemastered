#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "TESObjectWEAPActions.h"
#include "TESSyncActions.h"
#include "VModdableBlueprintGeneratedClassActions.h"

class FAssetTutorialPluginEditorModule : public IModuleInterface
{
public:
	void StartupModule() override;
	void ShutdownModule() override;
private:
	TSharedPtr<FTESObjectWEAPAssetTypeActions> TESObjectWEAPTypeActions;
	TSharedPtr<FTESSyncAssetTypeActions> TESSyncAssetTypeActions;
	TSharedPtr<FVModdableBlueprintGeneratedClassAssetTypeActions> VModdableBlueprintGeneratedClassAssetTypeActions;
};
