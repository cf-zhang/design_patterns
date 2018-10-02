#ifndef HouseBlend_H_
#define Houseblend_H_

#include "beverage.h"
class HouseBlend: public Beverage{
	public HouseBlend(){
		descript = "House Blend Coffee";
	}
	double cost(){
		return 0.89;
	}
};




#endif
