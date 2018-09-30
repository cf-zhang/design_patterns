#include "remotecontrol.h"

RemoteControl::RemoteControl(TV *tv)
{
    this->tv = tv;
}
void RemoteControl::on()
{
    tv->on();
}
void RemoteControl::off()
{
    tv->off();
}
void RemoteControl::setChannel(int channel)
{
    tv->turnChannel(channel);
}
