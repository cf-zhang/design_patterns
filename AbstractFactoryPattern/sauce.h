#ifndef SAUCE_H
#define SAUCE_H

#include <string>
#include <iostream>
class Sauce
{
public:
    Sauce(std::string type="");
    virtual std::string getType() = 0;
protected:
    std::string type;
};

#endif // SAUCE_H
