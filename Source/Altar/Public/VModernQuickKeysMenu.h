#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
#include "ModernQuickKeysActionBinding.h"
#include "VAltarMenu.h"
#include "VModernQuickKeysMenu.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernQuickKeysMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfQuickKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseSelectionDeadZone;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernQuickKeysActionBinding> ActionBindings;
    
public:
    UVModernQuickKeysMenu();

    UFUNCTION(BlueprintCallable)
    void UpdateIcons(const TArray<UTexture2D*>& NewArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityByIndex(int32 Index, bool bVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetQuickKeyByIndex(int32 Index, UTexture2D* Texture);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 ComputeKeyIDWithCenterToCursor(const FVector2D& CenterToCursor);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 ComputeKeyIDOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent);
    
};

