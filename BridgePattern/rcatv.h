#ifndef RCATV_H
#define RCATV_H

#include "tv.h"
class RCATV : public TV
{
public:
    RCATV():TV(){}
    void on();
    void off();
    void turnChannel(int channel = 0);
    virtual ~RCATV(){}
};

#endif // RCATV_H
