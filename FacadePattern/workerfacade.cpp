#include "workerfacade.h"

WorkerFacade::WorkerFacade(Light *light, Cup *cup, Computer *computer)
{
    this->light = light;
    this->cup = cup;
    this->computer = computer;
}
void WorkerFacade::startWork()
{
    light->on();
    computer->on();
    cup->fillCup();
}

void WorkerFacade::drinkWater()
{
    std::cout<<"the worker was thirsty,and get some drink."<<std::endl;
    cup->wasDrank(3);
}
void WorkerFacade::knockOff()
{
    computer->off();
    cup->pourCup();
    light->off();

}
