#include "hardcandy.h"
#include <iostream>
HardCandy::HardCandy(float wight, float shape, float price)
{
    this->w = wight;
    this->s = shape;
    this->p = price;
    this->n = "hard";
    std::cout<<"i am a hard candy."<<std::endl;
}
