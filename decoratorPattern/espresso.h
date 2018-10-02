#ifndef ESPRESSO_H_
#define ESPRESSO_H_
#include "beverage.h"
class Espresso: public Beverage{
public:
	Espresso():Beverage(){
		descript = "Espresso";
	}		
	double cost(){
		return 1.99;
	}
};

#endif
