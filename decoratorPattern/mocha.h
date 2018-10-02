#ifndef MOCHA_H_
#define MOCHA_H_
#include "beverage.h"

class Mocha: public Beverage{
public:
	Mocha(Beverage *b){
		beverage = b;
	}	
	std::string getdescript(){
		return beverage->getdescript()+", Mocha";
	}
	double cost(){
		return 0.20 + beverage->cost();
	}
	
	
private:
	Beverage *beverage;
};


#endif
