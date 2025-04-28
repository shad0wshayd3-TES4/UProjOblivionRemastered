#include "TESSyncActions.h"
#include "TESSync.h"
#include "TESSyncEditorToolkit.h"

UClass* FTESSyncAssetTypeActions::GetSupportedClass() const
{
    return UTESSync::StaticClass();
}

FText FTESSyncAssetTypeActions::GetName() const
{
    return INVTEXT("TESSync");
}

FColor FTESSyncAssetTypeActions::GetTypeColor() const
{
    return FColor::Cyan;
}

uint32 FTESSyncAssetTypeActions::GetCategories()
{
    return EAssetTypeCategories::Misc;
}

void FTESSyncAssetTypeActions::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor)
{
    MakeShared<FTESSyncEditorToolkit>()->InitEditor(InObjects);
}
