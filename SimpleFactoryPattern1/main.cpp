#include <iostream>
#include "simplepizzafactory.h"
#include "pizza.h"
#include "pizzastore.h"
using namespace std;

int main()
{
    SimplePizzaFactory *factory = new SimplePizzaFactory;

    PizzaStore *store = new PizzaStore(factory);
    store->orderPizza("chinese");

    return 0;
}
