#include "sonytv.h"
#include <iostream>
SonyTV::SonyTV()
{

}

void SonyTV::on()
{
    std::cout<<"sony tv is turn on."<<std::endl;
}
void SonyTV::off()
{
    std::cout<<"sony tv is turn off."<<std::endl;
}

void SonyTV::turnChannel(int channel)
{
    std::cout<<"sony tv is turn to channel "<<channel<<"."<<std::endl;
}
