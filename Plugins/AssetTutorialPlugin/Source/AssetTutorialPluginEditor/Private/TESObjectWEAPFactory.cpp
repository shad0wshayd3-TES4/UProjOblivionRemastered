#include "TESObjectWEAPFactory.h"
#include "TESObjectWEAP.h"

UTESObjectWEAPFactory::UTESObjectWEAPFactory()
{
    SupportedClass = UTESObjectWEAP::StaticClass();
    bCreateNew = true;
}

UObject* UTESObjectWEAPFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
    return NewObject<UTESObjectWEAP>(InParent, Class, Name, Flags, Context);
}
