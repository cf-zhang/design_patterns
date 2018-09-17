#ifndef DOUGH_H
#define DOUGH_H

#include <string>
#include <iostream>
class Dough
{
public:
    Dough(std::string type="");
    virtual std::string getType() = 0;
protected:
    std::string type;
};

#endif // DOUGH_H
