#ifndef MEALBUILDER_H
#define MEALBUILDER_H
#include "meal.h"

class MealBuilder
{
public:
    MealBuilder();
    virtual void buildDrink() = 0;
    virtual void buildFood() = 0;
    Meal getMeal(){return meal;}
protected:
    Meal meal;
};

#endif // MEALBUILDER_H
