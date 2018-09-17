#ifndef CHEESE_H
#define CHEESE_H

#include <string>
#include <iostream>
class Cheese
{
public:
    Cheese(std::string type="");
    virtual std::string getType()=0;
protected:
    std::string type;
};

#endif // CHEESE_H
