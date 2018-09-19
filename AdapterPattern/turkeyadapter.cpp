#include "turkeyadapter.h"

TurkeyAdapter::TurkeyAdapter(Turkey *turkey)
{
    this->turkey = turkey;
}
void TurkeyAdapter::quack()
{
    turkey->gobble();
}

void TurkeyAdapter::fly()
{
    for(int i = 0; i < 5; i++)
    {
        turkey->fly();
    }
}
