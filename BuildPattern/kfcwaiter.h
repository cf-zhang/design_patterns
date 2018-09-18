#ifndef KFCWAITER_H
#define KFCWAITER_H
#include "meal.h"
#include "mealbuilder.h"
class KFCWaiter
{
public:
    KFCWaiter();
    Meal construct();
    void setMealBuilder(MealBuilder *builder);
private:
    MealBuilder *builder;
};

#endif // KFCWAITER_H
