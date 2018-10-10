#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H
#include "flybehavior.h"
class FlyWithWings: public FlyBehavior
{
public:
        void fly(){
            std::cout<<"i am flying."<<std::endl;
        }
};
#endif // FLYWITHWINGS_H
