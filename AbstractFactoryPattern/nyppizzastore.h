#ifndef NYPPIZZASTORE_H
#define NYPPIZZASTORE_H
#include "nypizzaingredientfactory.h"
#include "pizzastore.h"
#include "pizza.h"
class NYPPizzaStore : public PizzaStore
{
public:
    Pizza *createPizza(std::string type);
};

#endif // NYPPIZZASTORE_H
