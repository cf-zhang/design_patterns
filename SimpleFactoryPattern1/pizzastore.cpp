#include "pizzastore.h"

PizzaStore::PizzaStore(SimplePizzaFactory *factory)
{
    this->factory = factory;
}
Pizza *PizzaStore::orderPizza(std::string type)
{
    Pizza *pizza = nullptr;
    pizza = factory->createPizza(type);
    if(nullptr == pizza)
        return nullptr;
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return pizza;
}
