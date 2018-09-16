#include "simplepizzafactory.h"
#include "chinesepizza.h"
#include "pepperonipizza.h"
#include "greekpizza.h"
SimplePizzaFactory::SimplePizzaFactory()
{

}

Pizza *SimplePizzaFactory::createPizza(std::string type)
{
    Pizza *pizza = nullptr;
    if("chinese" == type)
    {
        pizza = new ChinesePizza();
    }else if("pepperoni" == type)
    {
        pizza = new PepperoniPizza();
    }else if("greek" == type){
        pizza = new GreekPizza();
    }
    return pizza;
}
