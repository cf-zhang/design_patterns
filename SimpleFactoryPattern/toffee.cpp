#include "toffee.h"
#include <iostream>
Toffee::Toffee(float wight, float shape, float price)
{
    this->w = wight;
    this->s = shape;
    this->p = price;
    this->n = "toffee";
    std::cout<<"i am a toffee."<<std::endl;
}
