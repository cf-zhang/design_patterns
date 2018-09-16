#ifndef CANDY_H
#define CANDY_H
#include <string>

class Candy
{
public:
    Candy();
    float wight() {return w;}
    float shape() {return s;}
    float price() {return p;}
    std::string name() {return n;}
protected:
    float w;
    float s;
    float p;
    std::string n;
};

#endif // CANDY_H
