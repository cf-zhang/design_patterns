#ifndef DUCK_H
#define DUCK_H
#include "flybehavior.h"
#include "quackbehavior.h"

class Duck{
public:
    Duck(){
        flyBehavior = nullptr;
        quackBehavior = nullptr;
    }
    virtual ~Duck(){}
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;
    virtual void display()=0;
    void performFly(){
        if(flyBehavior)
            flyBehavior->fly();
    }
    void performQuack(){
        if(quackBehavior)
            quackBehavior->quack();
    }
    void swim(){
        std::cout<<"all ducks float, even decoys.";
    }

    void setFlyBehavior(FlyBehavior *fb){
        flyBehavior = fb;
    }
    void setQuackBehavior(QuackBehavior *qb){
        quackBehavior = qb;
    }
};
#endif // DUCK_H
