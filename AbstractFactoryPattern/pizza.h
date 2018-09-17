#ifndef PIZZA_H
#define PIZZA_H
#include "pizzaingredientfactory.h"
#include "sauce.h"
#include "cheese.h"
#include "dough.h"
class Pizza
{
public:

    virtual void prepare()=0;
    void bake();
    void cut();
    void box();
    void setName(std::string name);
    std::string getName(){return name;}
    std::string toString();
protected:
    Dough *dough;
    Cheese *chess;
    Sauce *sauce;
    std::string name;

    PizzaIngredientFactory *factory;
};

#endif // PIZZA_H
