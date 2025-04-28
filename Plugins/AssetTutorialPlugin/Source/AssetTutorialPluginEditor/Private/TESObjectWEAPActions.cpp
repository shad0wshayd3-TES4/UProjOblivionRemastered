#include "TESObjectWEAPActions.h"
#include "TESObjectWEAP.h"
#include "TESObjectWEAPEditorToolkit.h"

UClass* FTESObjectWEAPAssetTypeActions::GetSupportedClass() const
{
    return UTESObjectWEAP::StaticClass();
}

FText FTESObjectWEAPAssetTypeActions::GetName() const
{
    return INVTEXT("TESObjectWEAP");
}

FColor FTESObjectWEAPAssetTypeActions::GetTypeColor() const
{
    return FColor::Cyan;
}

uint32 FTESObjectWEAPAssetTypeActions::GetCategories()
{
    return EAssetTypeCategories::Misc;
}

void FTESObjectWEAPAssetTypeActions::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor)
{
    MakeShared<FTESObjectWEAPEditorToolkit>()->InitEditor(InObjects);
}
