
#ifndef BEVERAGE_H_
#define BEVERAGE_H_

class Beverage{
public:
    Beverage(){
	}
    virtual std::string getdescript(){
		return descript;
    }
	virtual double cost() = 0;
	
protected: 
	std::string descript;
};

#endif
