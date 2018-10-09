#ifndef INVOKER_H
#define INVOKER_H

#include "command.h"

class Invoker
{

public:
    Invoker(Command * pCommand);
    virtual ~Invoker();
    void call();

private:
    Command *m_pCommand;


};


#endif // INVOKER_H
