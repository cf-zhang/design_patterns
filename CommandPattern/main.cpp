#include <iostream>
#include "concretecommand.h"
#include "invoker.h"
#include "receiver.h"
using namespace std;

int main()
{
    Receiver * pReceiver = new Receiver();
    ConcreteCommand * pCommand = new ConcreteCommand(pReceiver);
    Invoker * pInvoker = new Invoker(pCommand);
    pInvoker->call();

    delete pReceiver;
    delete pCommand;
    delete pInvoker;
    return 0;
    return 0;
}
