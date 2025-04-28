#include "VModdableBlueprintGeneratedClassEditorToolkit.h"
#include "Modules/ModuleManager.h"

void FVModdableBlueprintGeneratedClassEditorToolkit::InitEditor(const TArray<UObject*>& InObjects)
{
	VModdableBlueprintGeneratedClass = Cast<UVModdableBlueprintGeneratedClass>(InObjects[0]);

	const TSharedRef<FTabManager::FLayout> Layout = FTabManager::NewLayout("VModdableBlueprintGeneratedClassEditorLayout")
		->AddArea
		(
			FTabManager::NewPrimaryArea()->SetOrientation(Orient_Horizontal)
			->Split
			(
				FTabManager::NewStack()
				->SetSizeCoefficient(1.0f)
				->AddTab("VModdableBlueprintGeneratedClassDetailsTab", ETabState::OpenedTab)
			)
		);
	FAssetEditorToolkit::InitAssetEditor(EToolkitMode::Standalone, {}, "VModdableBlueprintGeneratedClassEditor", Layout, true, true, InObjects);
}

void FVModdableBlueprintGeneratedClassEditorToolkit::RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	FAssetEditorToolkit::RegisterTabSpawners(InTabManager);

	WorkspaceMenuCategory = InTabManager->AddLocalWorkspaceMenuCategory(INVTEXT("VModdableBlueprintGeneratedClass Editor"));

	FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FDetailsViewArgs DetailsViewArgs;
	DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
	TSharedRef<IDetailsView> DetailsView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
	DetailsView->SetObjects(TArray<UObject*>{ VModdableBlueprintGeneratedClass });
	InTabManager->RegisterTabSpawner("VModdableBlueprintGeneratedClassDetailsTab", FOnSpawnTab::CreateLambda([=](const FSpawnTabArgs&)
		{
			return SNew(SDockTab)
				[
					DetailsView
				];
		}))
		.SetDisplayName(INVTEXT("Details"))
		.SetGroup(WorkspaceMenuCategory.ToSharedRef());
}

void FVModdableBlueprintGeneratedClassEditorToolkit::UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);
	InTabManager->UnregisterTabSpawner("VModdableBlueprintGeneratedClassDetailsTab");
}
