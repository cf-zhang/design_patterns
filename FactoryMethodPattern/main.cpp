#include <iostream>

using namespace std;
#include "pizzastore.h"
#include "nyppizzastore.h"
#include "pizza.h"
int main()
{
    PizzaStore *store = new NYPPizzaStore();
    if(nullptr == store){
        return -1;
    }
    store->orderPizza("chinese");
    return 0;
}
