#ifndef CANDYMACHINE_H
#define CANDYMACHINE_H
#include "candy.h"
#include <string>
class CandyMachine
{
public:
    CandyMachine();
    static Candy *createConcreteCandy(const std::string type);

};

#endif // CANDYMACHINE_H
