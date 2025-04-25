#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SkillInformation.h"
#include "VSkillInfoObject.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVSkillInfoObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillInformation Properties;
    
public:
    UVSkillInfoObject();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FSkillInformation& NewProperties);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkillInformation GetProperties() const;
    
};

