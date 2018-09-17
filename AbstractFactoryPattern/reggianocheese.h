#ifndef REGGIANOCHEESE_H
#define REGGIANOCHEESE_H

#include <cheese.h>
class ReggianoCheese : public Cheese
{
public:
    ReggianoCheese(std::string type = "Reggiano");
    std::string getType(){return type;}
protected:
    std::string type;
};

#endif // REGGIANOCHEESE_H
