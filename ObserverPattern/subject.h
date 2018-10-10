#ifndef SUBJECT_H
#define SUBJECT_H
#include "observer.h"
class Subject{
public:
    virtual void registerObserver(Observer *o)=0;
    virtual void removeObserver(Observer *o)=0;
    virtual void notifyObserver()=0;
};
#endif // SUBJECT_H
