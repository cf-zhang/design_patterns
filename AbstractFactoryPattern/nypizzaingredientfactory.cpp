#include "nypizzaingredientfactory.h"
#include "thincrustdough.h"
#include "reggianocheese.h"
#include "marinarasauce.h"
NYPizzaIngredientFactory::NYPizzaIngredientFactory()
{

}
Dough *NYPizzaIngredientFactory::createDough()
{
    return new ThinCrustDough("ThinCrust");
}
Cheese *NYPizzaIngredientFactory::createCheese()
{
    return new ReggianoCheese("Reggiano");
}
Sauce *NYPizzaIngredientFactory::createSauce()
{
    return new MarinaraSauce("Marinara");
}
