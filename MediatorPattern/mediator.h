#ifndef MEDIATOR_H
#define MEDIATOR_H
#include "colleague.h"
class Mediator{
public:
    Mediator(){}
    virtual ~Mediator(){}

    virtual void operation(int who, std::string str){}
    virtual void registered(int who, Colleague* colleague){}
};
#endif // MEDIATOR_H
