#ifndef THINCRUSTDOUGH_H
#define THINCRUSTDOUGH_H
#include "dough.h"
#include <string>
#include <iostream>
class ThinCrustDough : public Dough
{
public:
    ThinCrustDough(std::string type="ThinCrust");
    std::string getType(){return type;}
};

#endif // THINCRUSTDOUGH_H
