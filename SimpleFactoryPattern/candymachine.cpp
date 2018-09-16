#include "candymachine.h"
#include "toffee.h"
#include "hardcandy.h"
#include "softsweets.h"
#include "crispcandy.h"

CandyMachine::CandyMachine()
{

}

Candy *CandyMachine::createConcreteCandy(const std::string type)
{
    if("toffee" == type){
        return new Toffee(3.14,2.14,2.21);
    }else if("hard" == type){
        return new HardCandy(4.12,2.12,3.54);
    }else if("soft" == type){
        return new SoftSweets(2.34,4.56,4.32);
    }else if("crisp" == type){
        return new CrispCandy(1.21,2.32,4.43);
    }else{
        return nullptr;
    }

}
