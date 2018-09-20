#ifndef WORKERFACADE_H
#define WORKERFACADE_H
#include "light.h"
#include "cup.h"
#include "computer.h"

class WorkerFacade
{
public:
    WorkerFacade(Light *light, Cup *cup, Computer *computer);
    void startWork();
    void drinkWater();
    void knockOff();

private:
    Light *light;
    Cup *cup;
    Computer *computer;

};

#endif // WORKERFACADE_H
