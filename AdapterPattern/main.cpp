#include <iostream>
#include "duck.h"
#include "turkeyadapter.h"
#include "mallardduck.h"
#include "turkey.h"
#include "wildturkey.h"
using namespace std;
void testDuck(Duck *duck)
{
    duck->quack();
    duck->fly();
}
int main()
{
    MallardDuck *duck = new MallardDuck();
    WildTurkey *turkey = new WildTurkey();
    Duck *turkeyAdapter = new TurkeyAdapter(turkey);

    std::cout<<"the turkey says ..."<<std::endl;
    turkey->gobble();
    turkey->fly();

    std::cout<<"the duck says ..."<<std::endl;
    testDuck(duck);

    std::cout<<"the turkeyadapter says ..."<<std::endl;
    testDuck(turkeyAdapter);





    return 0;
}
