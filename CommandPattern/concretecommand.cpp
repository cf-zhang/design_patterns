#include "concretecommand.h"
#include <iostream>
using namespace std;


ConcreteCommand::ConcreteCommand(Receiver *pReceiver){
    m_pReceiver = pReceiver;
}



ConcreteCommand::~ConcreteCommand(){

}

void ConcreteCommand::execute(){
    cout << "ConcreteCommand::execute"  << endl;
    m_pReceiver->action();
}
