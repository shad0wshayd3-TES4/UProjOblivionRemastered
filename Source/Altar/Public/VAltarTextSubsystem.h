#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "VAltarTextSubsystem.generated.h"

class UVAltarRichTextBlock;
class UVAltarTextBlock;

UCLASS(Blueprintable)
class ALTAR_API UVAltarTextSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVAltarTextBlock*> AltarTextBlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVAltarRichTextBlock*> AltarRichTextBlocks;
    
public:
    UVAltarTextSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterAltarTextBlock(UVAltarTextBlock* AltarTextBlock);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterAltarRichTextBlock(UVAltarRichTextBlock* AltarRichTextBlock);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAltarTextBlock(UVAltarTextBlock* NewAltarTextBlock);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAltarRichTextBlock(UVAltarRichTextBlock* NewAltarRichTextBlock);
    
};

