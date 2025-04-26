#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Altar -ObjectName=AltarQMPSubsytemInterface -FallbackName=AltarQMPSubsytemInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=QMPUnrealIntegration -ObjectName=QMPGameInstance -FallbackName=QMPGameInstance
#include "AltarSpecificQMPGameInstance.generated.h"

class UCommonActivatableWidget;
class USaveGame;
class UVAltarSaveGame;

UCLASS(Blueprintable)
class ALTARQMP_API UAltarSpecificQMPGameInstance : public UQMPGameInstance, public IAltarQMPSubsytemInterface {
    GENERATED_BODY()
public:
    UAltarSpecificQMPGameInstance();

private:
    UFUNCTION(BlueprintCallable)
    void OnUIFocusChange(const FGameplayTag& TopMostLayer, UCommonActivatableWidget* TopMostWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveSlotLoaded_Delegate(USaveGame* GenericSave, const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    void OnAsyncSaveComplete_Delegate(const UVAltarSaveGame* SaveGame);
    

    // Fix for true pure virtual functions not being implemented
};

