#include "SteeringBehaviorsComponentDeactivationTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ASteeringBehaviorsComponentDeactivationTrigger::ASteeringBehaviorsComponentDeactivationTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    const FProperty* p_CollisionComponent = GetClass()->FindPropertyByName("CollisionComponent");
    (*p_CollisionComponent->ContainerPtrToValuePtr<UShapeComponent*>(this)) = (UShapeComponent*)RootComponent;
}


