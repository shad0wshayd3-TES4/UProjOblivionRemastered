#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PlayerClassItemProperties.h"
#include "VClassItemObject.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVClassItemObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerClassItemProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelected;
    
public:
    UVClassItemObject();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FPlayerClassItemProperties& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool bNewSelectionState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerClassItemProperties GetProperties() const;
    
};

