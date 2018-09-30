#ifndef CONCRETEREMOTE_H
#define CONCRETEREMOTE_H
#include "tv.h"
#include "remotecontrol.h"
class ConcreteRemote : public RemoteControl
{
public:
    ConcreteRemote(TV *tv);
    void nextChannel();
    void previousChannel();
private:
    int currentStation;
};

#endif // CONCRETEREMOTE_H
