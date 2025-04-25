#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VModernSettingComboBoxItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernSettingComboBoxItem : public UObject {
    GENERATED_BODY()
public:
    UVModernSettingComboBoxItem();

    UFUNCTION(BlueprintCallable)
    void SetOption(const FText& NewOption);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetOption() const;
    
};

