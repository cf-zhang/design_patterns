#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "simplepizzafactory.h"

#include <string>
class PizzaStore
{
public:
    PizzaStore(SimplePizzaFactory *factory);
    Pizza *orderPizza(std::string type);
//    virtual Pizza *createPizza(std::string type) = 0;
private:
    SimplePizzaFactory *factory;
};

#endif // PIZZASTORE_H
