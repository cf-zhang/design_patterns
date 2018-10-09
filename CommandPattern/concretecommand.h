#ifndef CONCRETECOMMAND_H
#define CONCRETECOMMAND_H

#include "command.h"
#include "receiver.h"

class ConcreteCommand : public Command
{

public:
    ConcreteCommand(Receiver * pReceiver);
    virtual ~ConcreteCommand();
    virtual void execute();
private:
    Receiver *m_pReceiver;
};

#endif // CONCRETECOMMAND_H
