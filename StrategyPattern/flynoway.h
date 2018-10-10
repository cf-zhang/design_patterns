#ifndef FLYNOWAY_H
#define FLYNOWAY_H
#include "flybehavior.h"
class FlyNoWay: public FlyBehavior
{
public:
        void fly(){
            std::cout<<"i can't flying."<<std::endl;
        }
};
#endif // FLYNOWAY_H
