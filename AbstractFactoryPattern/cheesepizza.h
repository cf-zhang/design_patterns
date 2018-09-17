#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H

#include "pizza.h"
class CheesePizza : public Pizza
{
public:
    CheesePizza(PizzaIngredientFactory *factory);
    void prepare();
};

#endif // CHEESEPIZZA_H
