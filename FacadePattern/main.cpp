#include <iostream>
#include "workerfacade.h"
using namespace std;

int main()
{
    Computer *computer = new Computer;
    Cup *cup = new Cup();
    Light *light = new Light();

    WorkerFacade facade(light,cup,computer);
    facade.startWork();
    facade.drinkWater();
    facade.knockOff();
    return 0;
}
