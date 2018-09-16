#include <iostream>
#include "candymachine.h"
#include "candy.h"
using namespace std;

int main()
{
    Candy *A = CandyMachine::createConcreteCandy("toffee");
    Candy *B = CandyMachine::createConcreteCandy("hard");
    Candy *C = CandyMachine::createConcreteCandy("soft");
    Candy *D = CandyMachine::createConcreteCandy("crisp");

    std::cout<<A->name()<<std::endl;
    std::cout<<B->name()<<std::endl;
    std::cout<<C->name()<<std::endl;
    std::cout<<D->name()<<std::endl;

    return 0;
}
