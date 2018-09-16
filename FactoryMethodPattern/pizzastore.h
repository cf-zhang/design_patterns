#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include "pizza.h"
#include <string>
class PizzaStore
{
public:
    PizzaStore();
    Pizza *orderPizza(std::string type);
    virtual Pizza *createPizza(std::string type) = 0;
};

#endif // PIZZASTORE_H
