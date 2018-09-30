#include <iostream>
#include "concreteremote.h"
#include "rcatv.h"
#include "sonytv.h"
using namespace std;

int main()
{
    TV *tv = new RCATV();
    ConcreteRemote *remoteControl = new ConcreteRemote(tv);
    remoteControl->on();
    remoteControl->nextChannel();
    remoteControl->previousChannel();
    remoteControl->off();

    delete remoteControl;
    delete tv;


    tv = new SonyTV();
    remoteControl = new ConcreteRemote(tv);
    remoteControl->on();
    remoteControl->nextChannel();
    remoteControl->previousChannel();
    remoteControl->off();

    delete remoteControl;
    delete tv;

    return 0;
}
