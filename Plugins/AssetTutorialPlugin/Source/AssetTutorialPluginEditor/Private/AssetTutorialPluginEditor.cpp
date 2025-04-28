#include "AssetTutorialPluginEditor.h"

#define HELPER_MODULE_STARTUP(NAME, TYPE)  \
	NAME = MakeShared<TYPE>();             \
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(NAME.ToSharedRef());

#define HELPER_MODULE_SHUTDOWN(NAME)  \
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(NAME.ToSharedRef());

void FAssetTutorialPluginEditorModule::StartupModule()
{
	HELPER_MODULE_STARTUP(TESObjectWEAPTypeActions, FTESObjectWEAPAssetTypeActions);
	HELPER_MODULE_STARTUP(TESSyncAssetTypeActions, FTESSyncAssetTypeActions);
	HELPER_MODULE_STARTUP(VModdableBlueprintGeneratedClassAssetTypeActions, FVModdableBlueprintGeneratedClassAssetTypeActions);
}

void FAssetTutorialPluginEditorModule::ShutdownModule()
{
	if (!FModuleManager::Get().IsModuleLoaded("AssetTools")) return;
	HELPER_MODULE_SHUTDOWN(TESObjectWEAPTypeActions);
	HELPER_MODULE_SHUTDOWN(TESSyncAssetTypeActions);
	HELPER_MODULE_SHUTDOWN(VModdableBlueprintGeneratedClassAssetTypeActions);
}

IMPLEMENT_MODULE(FAssetTutorialPluginEditorModule, AssetTutorialPluginEditor)

#undef HELPER_MODULE_STARTUP
#undef HELPER_MODULE_SHUTDOWN
