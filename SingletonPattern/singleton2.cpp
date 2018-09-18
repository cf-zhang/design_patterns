#include "singleton2.h"
Singleton2* Singleton2::instance = new Singleton2;
Singleton2::Singleton2()
{

}
Singleton2* Singleton2::getInstance()
{
    return instance;
}
