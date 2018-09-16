
#include "nyppizzastore.h"
#include "chinesepizza.h"
#include "greekpizza.h"
#include "pepperonipizza.h"

Pizza *NYPPizzaStore::createPizza(std::string type)
{
    if("chinese" == type){
        return new ChinesePizza();
    }else if("greek" == type){
        return new GreekPizza();
    }else if("pepper" == type){
        return new PepperoniPizza();
    }else{
        return nullptr;
    }
}
