#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H

#include "pizza.h"
#include "string"
class SimplePizzaFactory
{
public:
    SimplePizzaFactory();
    Pizza *createPizza(std::string type);
};

#endif // SIMPLEPIZZAFACTORY_H
