#include <iostream>
#include "singleton1.h"
#include "singleton2.h"
#include "singleton3.h"
using namespace std;

int main()
{
    Singleton1 *s1 = Singleton1::getInstance();
    Singleton2 *s2 = Singleton2::getInstance();
    Singleton3 *s3 = Singleton3::getInstance();
    return 0;
}
