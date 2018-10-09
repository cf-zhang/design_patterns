#include "invoker.h"
#include <iostream>
using namespace std;

Invoker::Invoker(Command * pCommand){
    m_pCommand = pCommand;
}

Invoker::~Invoker(){

}

void Invoker::call(){
    cout << "invoker calling" << endl;
    m_pCommand->execute();
}
