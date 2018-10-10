#ifndef CONCRETECOLLEAGUEB_H
#define CONCRETECOLLEAGUEB_H
#include "mediator.h"
#include "colleague.h"
class ConcreteColleagueB: public Colleague{
public:
    virtual ~ConcreteColleagueB(){}

    virtual void sendmsg(int toWho, std::string str){
        std::cout<<"send msg from colleagueB to :"<< toWho <<std::endl;
        m_pMediator->operation(toWho, str);
    }
    virtual void receivemsg(std::string str){
        std::cout<<"ConcreteColleagueB receivemsg:"<<str<<std::endl;
    }

};
#endif // CONCRETECOLLEAGUEB_H
