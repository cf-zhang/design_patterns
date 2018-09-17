#ifndef PIZZAINGREDIENTFACTORY_H
#define PIZZAINGREDIENTFACTORY_H

#include "dough.h"
#include "cheese.h"
#include "sauce.h"

class PizzaIngredientFactory{
public:
    virtual Dough *createDough()=0;
    virtual Sauce *createSauce()=0;
    virtual Cheese *createCheese()=0;

};
#endif // PIZZAINGREDIENTFACTORY_H
