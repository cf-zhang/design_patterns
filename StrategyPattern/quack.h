#ifndef QUACK_H
#define QUACK_H
#include "quackbehavior.h"
class Quack:public QuackBehavior{
public:
    void quack(){
        std::cout<<"Quack."<<std::endl;
    }
};
#endif // QUACK_H
