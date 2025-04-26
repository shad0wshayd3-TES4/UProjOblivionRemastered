#pragma once
#include "CoreMinimal.h"
#include "EWwiseGroupType.h"
#include "WwiseGroupValueCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseGroupValueCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWwiseGroupType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugName;
    
    FWwiseGroupValueCookedData();

};

FORCEINLINE uint32 GetTypeHash(const FWwiseGroupValueCookedData& Data)
{
    uint32 Hash = HashCombine(GetTypeHash(Data.Type), GetTypeHash(Data.GroupID));
    Hash = HashCombine(Hash, GetTypeHash(Data.ID));
    Hash = HashCombine(Hash, GetTypeHash(Data.DebugName));
    return Hash;
}