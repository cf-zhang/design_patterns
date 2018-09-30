#include "rcatv.h"
#include <iostream>

void RCATV::on()
{
    std::cout<<"rac tv is turn on."<<std::endl;
}
void RCATV::off()
{
    std::cout<<"rac tv is turn off."<<std::endl;
}

void RCATV::turnChannel(int channel)
{
    std::cout<<"rac tv is turn to channel "<<channel<<"."<<std::endl;
}
