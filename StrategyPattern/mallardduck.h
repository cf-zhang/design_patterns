#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "duck.h"
#include "quack.h"
#include "flywithwings.h"
class MallardDuck:public Duck
{
public:
    MallardDuck(){
        quackBehavior = new Quack();
        flyBehavior = new FlyWithWings();
    }
    void display(){
        std::cout<<"i am a real mallard duck."<<std::endl;
    }

};

#endif // MALLARDDUCK_H
