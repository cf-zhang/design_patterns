#ifndef WHIP_H_
#define WHIP_H_
#include "beverage.h"
#include <iostream>
class Whip: public Beverage{
public:
	Whip(Beverage *b){
		beverage = b;
	}
	std::string getdescript(){
		return beverage->getdescript()+", Whip";
	}
	double cost(){
		return beverage->cost()+0.15;
	}	
private:
	Beverage *beverage;		
	
	
};

#endif
