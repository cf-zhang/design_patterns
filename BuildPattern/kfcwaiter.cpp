#include "kfcwaiter.h"

KFCWaiter::KFCWaiter()
{

}
Meal KFCWaiter::construct()
{
    builder->buildDrink();
    builder->buildFood();
    return builder->getMeal();
}

void KFCWaiter::setMealBuilder(MealBuilder *builder)
{
    this->builder = builder;
}
