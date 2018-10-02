#ifndef CONIMENTDECORATOR_H_
#define CONIMENTDECORATOR_H_
#include "beverage.h"
class CondimentDecorator: public Beverage
{
public:
	virtual std::string getdescript()=0;		
};

#endif
