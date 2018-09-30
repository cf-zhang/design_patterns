#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include "tv.h"
class RemoteControl
{
public:
    RemoteControl(TV *tv);
    void on();
    void off();
    void setChannel(int channel);
private:
    TV *tv;
};

#endif // REMOTECONTROL_H
