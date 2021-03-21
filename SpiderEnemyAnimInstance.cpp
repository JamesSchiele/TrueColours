// Fill out your copyright notice in the Description page of Project Settings.


#include "SpiderEnemyAnimInstance.h"

void USpiderEnemyAnimInstance::NativeInitializeAnimation() 
{
    if (Pawn == nullptr)
    {
        Pawn = TryGetPawnOwner();
        if (Pawn)
        {
            //Enemy = Cast<AEnemy>(Pawn);
        }
    }
}

void USpiderEnemyAnimInstance::UpdateAnimationProperties() 
{
    if (Pawn == nullptr)
    {
        Pawn = TryGetPawnOwner();
        if (Pawn)
        {
            FVector Speed = Pawn->GetVelocity();
            FVector LateralSpeed = FVector(Speed.X, Speed.Y, 0.f);
            MovementSpeed = LateralSpeed.Size();

            //Enemy = Cast<AEnemy>(Pawn);
        }
    }
}


