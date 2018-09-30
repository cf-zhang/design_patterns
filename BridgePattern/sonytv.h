#ifndef SONYTV_H
#define SONYTV_H

#include "tv.h"
class SonyTV : public TV
{
public:
    SonyTV();

    void on();
    void off();
    void turnChannel(int channel = 0);
};

#endif // SONYTV_H
