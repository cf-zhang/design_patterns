
#include "nyppizzastore.h"
#include "cheesepizza.h"
Pizza *NYPPizzaStore::createPizza(std::string type)
{
    PizzaIngredientFactory *factory = new NYPizzaIngredientFactory();
    Pizza *pizza = nullptr;
    if("cheese" == type){
        pizza = new CheesePizza(factory);
        pizza->setName("cheese");
    }
    return pizza;
}
