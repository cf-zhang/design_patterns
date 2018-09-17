#ifndef MARINARASAUCE_H
#define MARINARASAUCE_H
#include "sauce.h"
#include <string>
#include <iostream>

class MarinaraSauce : public Sauce
{
public:
    MarinaraSauce(std::string type="Marinara");
    std::string getType(){return  type;}
protected:
    std::string type;
};

#endif // MARINARASAUCE_H
