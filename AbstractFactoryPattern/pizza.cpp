#include "pizza.h"

void Pizza::bake()
{
    std::cout<<"Bake for 25 minutes at 350."<<std::endl;
}
void Pizza::cut()
{
    std::cout<<"Cutting the pizza into diagonal slices."<<std::endl;
}
void Pizza::box()
{
    std::cout<<"Place pizza in official PizzaStore box."<<std::endl;
}
void Pizza::setName(std::string name)
{
    this->name = name;
}
std::string Pizza::toString()
{
    return name +": "+ dough->getType() +" "+ sauce->getType() +" "+ chess->getType();
}
