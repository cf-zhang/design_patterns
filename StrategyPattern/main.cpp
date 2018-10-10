#include <iostream>
#include "duck.h"
using namespace std;
#include "mallardduck.h"
#include "squeak.h"
#include "flynoway.h"
int main()
{

    Duck *mallarduck = new MallardDuck();
    mallarduck->performFly();
    mallarduck->performQuack();
    mallarduck->display();
    mallarduck->swim();
    mallarduck->setFlyBehavior(new FlyNoWay());
    mallarduck->setQuackBehavior(new Squeak());

    mallarduck->performFly();
    mallarduck->performQuack();
    mallarduck->display();
    mallarduck->swim();
    return 0;
}
