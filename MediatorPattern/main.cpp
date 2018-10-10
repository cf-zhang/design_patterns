#include <iostream>
#include "concretecolleaguea.h"
#include "concretecolleagueb.h"
#include "concretemediator.h"
using namespace std;

int main()
{
    ConcreteColleagueA* pa = new ConcreteColleagueA;
    ConcreteColleagueB* pb = new ConcreteColleagueB;
    ConcreteMediator* pm = new ConcreteMediator();
    pm->registered(1,pa);
    pm->registered(2,pb);

    pa->sendmsg(2,"hello,i am a");

    pb->sendmsg(1,"hello, i am b");

    delete pa,pb,pm;
    return 0;
}
