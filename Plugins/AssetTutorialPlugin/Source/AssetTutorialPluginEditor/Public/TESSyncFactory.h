#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "TESSyncFactory.generated.h"

UCLASS()
class UTESSyncFactory : public UFactory
{
    GENERATED_BODY()
public:
    UTESSyncFactory();
    UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
