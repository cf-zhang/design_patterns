#include <iostream>
#include "kfcwaiter.h"
#include "meal.h"
#include "submealbuildera.h"
#include "submealbuilderb.h"
using namespace std;

int main()
{
    KFCWaiter waiter;
    MealBuilder *builder;
    Meal meal;
    builder = new SubMealBuilderA;
    waiter.setMealBuilder(builder);
    meal = waiter.construct();
    meal.beEaten();

    builder = new SubMealBuilderB;
    waiter.setMealBuilder(builder);
    meal = waiter.construct();
    meal.beEaten();

    return 0;
}
