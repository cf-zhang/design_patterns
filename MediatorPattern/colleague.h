#ifndef COLLEAGUE_H
#define COLLEAGUE_H
#include "iostream"
class Mediator;
class Colleague{
public:
    Colleague(){}
    virtual ~Colleague(){}

    virtual void receivemsg(std::string str){
        std::cout<<"receivemsg:"<<str<<std::endl;
    }
    virtual void sendmsg(int toWho, std::string str){

    }
    void setMediator(Mediator *mediator){
        m_pMediator = mediator;
    }
protected:
    Mediator *m_pMediator;
};
#endif // COLLEAGUE_H
