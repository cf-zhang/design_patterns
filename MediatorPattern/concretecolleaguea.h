#ifndef CONCRETECOLLEAGUEA_H
#define CONCRETECOLLEAGUEA_H
#include "mediator.h"
#include "colleague.h"
class ConcreteColleagueA: public Colleague{
public:
    ConcreteColleagueA():Colleague(){}
    virtual ~ConcreteColleagueA(){}

    virtual void sendmsg(int toWho, std::string str){
        std::cout<<"send msg from colleagueA to :"<< toWho <<std::endl;
        m_pMediator->operation(toWho, str);
    }
    virtual void receivemsg(std::string str){
        std::cout<<"ConcreteColleagueA receivemsg:"<<str<<std::endl;
    }

};
#endif // CONCRETECOLLEAGUEA_H
