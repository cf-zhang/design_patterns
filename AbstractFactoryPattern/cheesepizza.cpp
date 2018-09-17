#include "cheesepizza.h"

CheesePizza::CheesePizza(PizzaIngredientFactory *factory)
{
    this->factory = factory;
}
void CheesePizza::prepare()
{
    std::cout<<"Preparing "+name;
    dough = factory->createDough();
    sauce = factory->createSauce();
    chess = factory->createCheese();
}
