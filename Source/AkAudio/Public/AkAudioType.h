#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkAudioType.generated.h"

UCLASS(Abstract, Blueprintable)
class AKAUDIO_API UAkAudioType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> UserData;
    
    UAkAudioType();

    UFUNCTION(BlueprintCallable)
    void UnloadData(bool bAsync);
    
    UFUNCTION(BlueprintCallable)
    void LoadData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWwiseShortId() const;
    
};

