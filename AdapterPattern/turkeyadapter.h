#ifndef TURKEYADAPTER_H
#define TURKEYADAPTER_H
#include "turkey.h"
#include "duck.h"
class TurkeyAdapter : public Duck
{
public:
    TurkeyAdapter(Turkey *turkey);
    void quack();
    void fly();
private:
    Turkey *turkey;
};

#endif // TURKEYADAPTER_H
