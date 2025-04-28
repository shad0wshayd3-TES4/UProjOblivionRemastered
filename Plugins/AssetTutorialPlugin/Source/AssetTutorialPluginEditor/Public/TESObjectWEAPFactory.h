#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "TESObjectWEAPFactory.generated.h"

UCLASS()
class UTESObjectWEAPFactory : public UFactory
{
    GENERATED_BODY()
public:
    UTESObjectWEAPFactory();
    UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
