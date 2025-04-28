#include "TESObjectWEAPEditorToolkit.h"
#include "Modules/ModuleManager.h"

void FTESObjectWEAPEditorToolkit::InitEditor(const TArray<UObject*>& InObjects)
{
	TESObjectWEAP = Cast<UTESObjectWEAP>(InObjects[0]);

	const TSharedRef<FTabManager::FLayout> Layout = FTabManager::NewLayout("TESObjectWEAPEditorLayout")
		->AddArea
		(
			FTabManager::NewPrimaryArea()->SetOrientation(Orient_Horizontal)
			->Split
			(
				FTabManager::NewStack()
				->SetSizeCoefficient(1.0f)
				->AddTab("TESObjectWEAPDetailsTab", ETabState::OpenedTab)
			)
		);
	FAssetEditorToolkit::InitAssetEditor(EToolkitMode::Standalone, {}, "TESObjectWEAPEditor", Layout, true, true, InObjects);
}

void FTESObjectWEAPEditorToolkit::RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	FAssetEditorToolkit::RegisterTabSpawners(InTabManager);

	WorkspaceMenuCategory = InTabManager->AddLocalWorkspaceMenuCategory(INVTEXT("TESObjectWEAP Editor"));

	FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FDetailsViewArgs DetailsViewArgs;
	DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
	TSharedRef<IDetailsView> DetailsView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
	DetailsView->SetObjects(TArray<UObject*>{ TESObjectWEAP });
	InTabManager->RegisterTabSpawner("TESObjectWEAPDetailsTab", FOnSpawnTab::CreateLambda([=](const FSpawnTabArgs&)
		{
			return SNew(SDockTab)
				[
					DetailsView
				];
		}))
		.SetDisplayName(INVTEXT("Details"))
		.SetGroup(WorkspaceMenuCategory.ToSharedRef());
}

void FTESObjectWEAPEditorToolkit::UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);
	InTabManager->UnregisterTabSpawner("TESObjectWEAPDetailsTab");
}
