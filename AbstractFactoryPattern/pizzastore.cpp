#include "pizzastore.h"

PizzaStore::PizzaStore()
{
}
Pizza *PizzaStore::orderPizza(std::string type)
{
    Pizza *pizza = nullptr;
    pizza = createPizza(type);
    if(nullptr == pizza)
        return nullptr;
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return pizza;
}
