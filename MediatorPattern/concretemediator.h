#ifndef CONCRETEMEDIATOR_H
#define CONCRETEMEDIATOR_H
#include "mediator.h"
#include <map>
#include <iostream>
class ConcreteMediator :public Mediator
{
public:
    ConcreteMediator(){}

    virtual ~ConcreteMediator(){}

    virtual void operation(int who, std::string str){
        std::map<int, Colleague*>::const_iterator it = m_mapColleague.find(who);
        if(it == m_mapColleague.end()){
            std::cout<<"not found this colleague!"<<std::endl;
            return;
        }
        Colleague *pc = it->second;
        pc->receivemsg(str);
    }

    virtual void registered(int who, Colleague *colleague){
        std::map<int, Colleague*>::const_iterator it = m_mapColleague.find(who);
        if(it == m_mapColleague.end()){
            m_mapColleague.insert(std::pair<int ,Colleague*>(who, colleague));
            colleague->setMediator(this);
        }
    }
private:
    std::map<int, Colleague*> m_mapColleague;
};
#endif // CONCRETEMEDIATOR_H
