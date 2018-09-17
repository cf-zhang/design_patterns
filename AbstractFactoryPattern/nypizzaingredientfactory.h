#ifndef NYPIZZAINGREDIENTFACTORY_H
#define NYPIZZAINGREDIENTFACTORY_H
#include "pizzaingredientfactory.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    NYPizzaIngredientFactory();
    Dough *createDough();
    Cheese *createCheese();
    Sauce *createSauce();
};

#endif // NYPIZZAINGREDIENTFACTORY_H
