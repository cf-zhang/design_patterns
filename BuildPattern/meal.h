#ifndef MEAL_H
#define MEAL_H
#include <string>
#include <iostream>
class Meal
{
public:
    Meal();
    std::string getDrind(){return drink;}
    std::string getFood(){return food;}
    void setDrink(std::string drink){this->drink = drink;}
    void setFood(std::string food){this->food = food;}
    void beEaten(){std::cout<<food+" and "+ drink +" is eaten."<<std::endl;}
private:
    std::string food;
    std::string drink;

};

#endif // MEAL_H
