#ifndef PIZZA_H
#define PIZZA_H


#include <string>
#include <vector>

class Pizza
{
public:
    Pizza();
    void prepare();
    void bake();
    void cut();
    void box();
    std::string getName(){return name;}

protected:
    std::string name;
    std::string dough;
    std::string sauce;
    std::vector<std::string > topping;
};

#endif // PIZZA_H
