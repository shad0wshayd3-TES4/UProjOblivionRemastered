#include "TESSyncEditorToolkit.h"
#include "Modules/ModuleManager.h"

void FTESSyncEditorToolkit::InitEditor(const TArray<UObject*>& InObjects)
{
	TESSync = Cast<UTESSync>(InObjects[0]);

	const TSharedRef<FTabManager::FLayout> Layout = FTabManager::NewLayout("TESSyncEditorLayout")
		->AddArea
		(
			FTabManager::NewPrimaryArea()->SetOrientation(Orient_Horizontal)
			->Split
			(
				FTabManager::NewStack()
				->SetSizeCoefficient(1.0f)
				->AddTab("TESSyncDetailsTab", ETabState::OpenedTab)
			)
		);
	FAssetEditorToolkit::InitAssetEditor(EToolkitMode::Standalone, {}, "TESSyncEditor", Layout, true, true, InObjects);
}

void FTESSyncEditorToolkit::RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	FAssetEditorToolkit::RegisterTabSpawners(InTabManager);

	WorkspaceMenuCategory = InTabManager->AddLocalWorkspaceMenuCategory(INVTEXT("TESSync Editor"));

	FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FDetailsViewArgs DetailsViewArgs;
	DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
	TSharedRef<IDetailsView> DetailsView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
	DetailsView->SetObjects(TArray<UObject*>{ TESSync });
	InTabManager->RegisterTabSpawner("TESSyncDetailsTab", FOnSpawnTab::CreateLambda([=](const FSpawnTabArgs&)
		{
			return SNew(SDockTab)
				[
					DetailsView
				];
		}))
		.SetDisplayName(INVTEXT("Details"))
		.SetGroup(WorkspaceMenuCategory.ToSharedRef());
}

void FTESSyncEditorToolkit::UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);
	InTabManager->UnregisterTabSpawner("TESSyncDetailsTab");
}
