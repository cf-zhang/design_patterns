#include "concreteremote.h"

ConcreteRemote::ConcreteRemote(TV *tv):RemoteControl(tv)
{
    currentStation = 10;
}
void ConcreteRemote::nextChannel()
{
    setChannel(currentStation+1);
}

void ConcreteRemote::previousChannel()
{
    setChannel(currentStation-1);
}

