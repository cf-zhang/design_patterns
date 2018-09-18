#include "singleton1.h"

Singleton1* Singleton1::instance = nullptr;
Singleton1::Singleton1()
{

}

Singleton1 *Singleton1::getInstance()
{
    if(nullptr == instance)
    {
        instance = new Singleton1();
    }
    return instance;
}
