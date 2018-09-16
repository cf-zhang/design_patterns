#include "crispcandy.h"
#include <iostream>
CrispCandy::CrispCandy(float wight, float shape, float price)
{
    this->w = wight;
    this->s = shape;
    this->p = price;
    this->n = "crisp";
    std::cout<<"i am a crisp candy."<<std::endl;
}
