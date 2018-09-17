#include <iostream>
#include "nyppizzastore.h"
using namespace std;

int main()
{
    PizzaStore *store = new NYPPizzaStore();
    Pizza *pizza = store->orderPizza("cheese");
    std::cout<<pizza->toString()<<std::endl;
    return 0;
}
