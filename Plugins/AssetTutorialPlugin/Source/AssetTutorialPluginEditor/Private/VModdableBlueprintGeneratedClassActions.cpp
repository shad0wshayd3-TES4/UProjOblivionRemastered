#include "VModdableBlueprintGeneratedClassActions.h"
#include "VModdableBlueprintGeneratedClass.h"
#include "VModdableBlueprintGeneratedClassEditorToolkit.h"

UClass* FVModdableBlueprintGeneratedClassAssetTypeActions::GetSupportedClass() const
{
    return UVModdableBlueprintGeneratedClass::StaticClass();
}

FText FVModdableBlueprintGeneratedClassAssetTypeActions::GetName() const
{
    return INVTEXT("VModdableBlueprintGeneratedClass");
}

FColor FVModdableBlueprintGeneratedClassAssetTypeActions::GetTypeColor() const
{
    return FColor::Cyan;
}

uint32 FVModdableBlueprintGeneratedClassAssetTypeActions::GetCategories()
{
    return EAssetTypeCategories::Misc;
}

void FVModdableBlueprintGeneratedClassAssetTypeActions::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor)
{
    MakeShared<FVModdableBlueprintGeneratedClassEditorToolkit>()->InitEditor(InObjects);
}
