#include "softsweets.h"
#include <iostream>
SoftSweets::SoftSweets(float wight, float shape, float price)
{
    this->w = wight;
    this->s = shape;
    this->p = price;
    this->n = "soft";
    std::cout<<"i am a soft sweets."<<std::endl;
}
