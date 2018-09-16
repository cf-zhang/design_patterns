#include "pizza.h"
#include <iostream>
Pizza::Pizza()
{

}
void Pizza::prepare()
{
    std::cout<<"Preparing "<<name<<std::endl;
    std::cout<<"Tossing dough..."<<std::endl;
    std::cout<<"Adding sauce..."<<std::endl;
    std::cout<<"Adding toppings: "<<std::endl;
    for(int i=0; i < topping.size(); i++)
    {
        std::cout<<"    "<<topping[i]<<std::endl;
    }
}
void Pizza::bake()
{
    std::cout<<"Bake for 25 minutes at 350."<<std::endl;
}
void Pizza::cut()
{
    std::cout<<"Cuting the pizza into diagonal slices."<<std::endl;
}
void Pizza::box()
{
    std::cout<<"Place pizza in offical PizzaStore box."<<std::endl;
}
